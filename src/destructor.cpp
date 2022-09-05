#include <iostream>
using namespace std;

class Employee{
public:
    string *s;
    int *i;
    Employee (string str,int deger) {
        s = new string;
        i = new int;
        
        *s = str;
        *i = deger;
    }
    ~Employee () {
        delete s; //sildiğimiz zaman ayrılan bölge tamamen belleğe verilir
        delete i;
        cout << "bb benim is biteer" << endl;
    }
    void show(){
        cout << "Str deger: " << *s 
        << "\n"
        << "Int deger: " << *i << endl;
    }
};
int main() {
    
    //Employee Employee; // sade çağırma işlemi
    Employee *emp = new Employee("ahmet aga",13);
    emp->show();
    delete emp; //obje tamamen silinir ama içinde ayrılan bellek kısımları(*i,*s) kalır --> bellek sızıntısı

    return 0;
}
#include <iostream>
using namespace std;

class Student {
    public:
    string name;

    void tellName () {
        cout << "benim adim " << name << endl;
    }
    
};

int main() {
    
    Student student1;
    Student student2;
    
    student1.name = "ahmet";
    student2.name = "aga";
    
    //cout << "1. ogrenci: " << student1.name << endl;
    //cout << "2. ogrenci: " << student2.name << endl;

    student1.tellName();
    student2.tellName();

    return 0;
}
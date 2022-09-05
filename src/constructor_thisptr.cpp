#include <iostream>
using namespace std;

class Employee {

private:
    string name;
    int salary;
    int id;
public:
    Employee() {
        this->name = "Bilgi yok";
        this->salary = 0;
        this->id = 0;
    }
    Employee (string name,int salary) {
        this -> name = name;
        this -> salary = salary;
        this-> id = 0; //yazılmazsa otomatik default değer atıyor
    }
    Employee (string name,int salary, int id) {
        this->name = name;
        this->salary = salary;
        this->id = id;
    }
    

    void setSalary(int salary) {
        this->salary = salary;
    }
    int getSalary() {
        return salary;
    }
    void setName (string name) {
        this-> name = name;
    }
    string getName () {
        return name;
    }
    void showInfos() {
        cout << "isim: " << this->name/* this kullanmaya gerekk yok*/<< endl;
        cout << "maas: " << this->salary << endl;
        cout << "id: " << this->id << endl;
    }
};

void ptrdeneme(Employee* ptr) {
    ptr->showInfos();
}

int main () {
   
    Employee employee1 ("ahmet",3000,12);
    Employee employee2 ("ender",31);
    Employee employee3; // cpp default yazdığı constu atıyor boş olsa bile hata vermez
    employee1.showInfos();
    employee2.showInfos();
    employee3.showInfos();

    Employee employee ("ahmet aga",5000,10);
    ptrdeneme(&employee);
    
    return 0;
}
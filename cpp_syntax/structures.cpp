#include <iostream>
using  namespace std;

struct Address { // alt üst olayı var yukarda olmalı...
    string cityName;
    int No;
};

struct Employee {
    
    int id;
    string name;
    string department;
    Address* /* pointer şeklinde kullanak için */ address;
};

/*void showEmployee (Employee employee) {
    
    employee.id = 30; // burda tamamen değişmiyor sadece kopyalanıyor
    cout << "ID: " << employee.id << endl;
    cout << "NAME: " << employee.name << endl;
    cout << "DEPARTMENT: " << employee.department << endl;
}
*/
/*void show (Employee* employee) {
    
    employee->id = 30; // burda adres üzerinden direk deeğişiklik yapılıyor..
    cout << "ID: " << employee->id << endl;
    cout << "NAME: " << employee->name << endl;
    cout << "DEPARTMENT: " << employee->department << endl;
}  
*/

int main() {
    
    /*Employee employee1;
    employee1.id = 12;
    employee1.name = "ahmet aga";
    employee1.department = "fizik";*/
    
    //Employee* ptr = &employee1;
    
    
    //Employee employee1 = {12,"Ahmet AGA","Scince"};
    //cout << ptr->department << endl;
    //employee1.name = "ahmet aga kilic";
    //cout << employee1.name << endl;

    //showEmployee(employee1);
    //show(&employee1);
    //cout << employee1.id << endl;

    //  NESTED STRUCTURES <<
    
    //Employee employee = {12,"dumbuk9","scince",{"ankara",31}};
    
    /*Employee employee;
    employee.id = 12;
    employee.name = "dumbuk9";
    employee.department = "science";
    employee.address = {"ankara",31}; // bunu kullan
    //employee.address.cityName = "ankara";
    //employee.address.No = 31;
    
    cout << employee.id << endl;
    cout << employee.name << endl;
    cout << employee.department << endl;
    cout << employee.address.cityName << endl; //pointer olmadığı zaman çalışır
    cout << employee.address.No << endl;*/

    // NESTED STRUCTURES WITH POINTERS (kafayı yersin...)

    Employee employee;
    employee.id = 12;
    employee.name = "ahmet aga";
    employee.department = "scince";
    
    Address address = {"ankara", 31};
    
    employee.address = &address;
    Employee* ptr = &employee;
    
    cout << ptr->address->cityName << endl;
    cout << ptr->address->No << endl;
    
    
    return 0;
}
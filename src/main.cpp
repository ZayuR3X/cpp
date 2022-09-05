/*#include <iostream>
using namespace std;

class Employee {
public:
    string name;
    int id;
    int salary;
    
    void showInfos() {
        
        cout << "Id: " << id << endl;
        cout << "Name: " << name << endl;
        cout << "Salary: " << salary << endl;
        
    }
};

int main () {

    Employee employee;
    
    employee.id = 12;
    employee.name = "ahmet";
    employee.salary = 9000;
    
    employee.showInfos();

    return 0;
}*/

#include <iostream>
using namespace std;

class Employee {
    
private:
    string name;
    int age;
public:
    void setAge (){ // ne yaptım bilmiom
        int yas;
        do {
            cout << "Yasinizi giriniz: ";
            cin >> yas;
            if (yas <= 0) {
                cout << "Gecersiz yas islemi...\n";
            }
        }while (yas <= 0);
        age = yas;
        
    }
        
    void setName (string isim) {
    name = isim;
    }
    int getAge () {
        return age;
    }
    string getName (){
        return name;
    }
    
};
int main() {
    Employee employee;
    employee.setName("ahmet");
    employee.setAge();
    cout << employee.getName() << endl;
    
    cout << employee.getAge() << endl;
    /*Employee* employee = new Employee();
    employee->setName("ahmet");
    employee->setAge();            // Pointer yapısı..
    cout << employee->getName() << endl;
    cout << employee->getAge() << endl;*/
    
    return 0;
}
#include <iostream>
using  namespace std;


struct Student {
    int id;
    char letter;
};

int main() {
    
    cout << "integer: " << sizeof(int) << endl;
    cout << "char: " << sizeof(char) << endl;
    cout << "double: " << sizeof(double) << endl;
    cout << "float: " << sizeof(float) << endl;
    
    cout << "struct: " << sizeof(Student) << endl;

    return 0;
}
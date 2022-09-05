#include <iostream>
using namespace std;

int main() {
    
    /*int *ptr = new int;
    *ptr = 5;
    cout << *ptr << endl;
    delete ptr;*/
    /*int *ptr;
    int a[] = {1,2,3,4,5};
    ptr = a;
    cout << ptr[1] << endl;*/
    
    // Kullanıcıdan input alarak bellek ayarlama ve silme
    int *ptr;
    int size;
    cout << "Kac deger girilsin: ";
    cin >> size;
    
    ptr = new int[size];
    
    for (int i=0; i < size; i++) {
        cout << "Deger: ";
        cin >> ptr[i];
    }
    
    for (int i = 0; i < size;i++) {
        cout << "Eleman: " << ptr[i] << endl;
    }
    
    delete [] ptr;
    
    return 0;
}
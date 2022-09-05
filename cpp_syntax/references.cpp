#include <iostream>
using namespace std;


/*void degerDegistir (int &ref) {
    ref = 20;
}*/

// bu ne ve neden var abi ??? 

int main() {
    
    int a = 10;
    //cout << "a'nin degeri: " << a << endl;
    //degerDegistir(a);
    //cout << "a'nin yeni degeri: " << a << endl;
    int *ptr;
    ptr = &a;
    /*int &ref; // hatalı
    ref = a;*/

    return 0;
}
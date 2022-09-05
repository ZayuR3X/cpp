#include <iostream>
using namespace std;

void selamla() {
    
    cout << "BEN BIR FONKSIYONUM ULEN" << endl;
}

void selam2();

void factorial(/*int sayi*/) {
    
    cout << "FAKTORIYEL HESAPLA" << endl;
    int sayi;
    cout << "Sayi giriniz: ";
    cin >> sayi;
    
    int faktoriyel = 1;
    
    for (int i = 2 ; i <= sayi ; i++){
        faktoriyel *= i;
    }
    
    cout << "Factorial: " << faktoriyel << endl;
    
}

  /* RETURN MANTIĞI */

int toplama (int a, int b, int c){
    return a + b + c;
}

int main() {

    selamla();
    selam2();
    
    //int a;
    //cout << "Sayi giriniz: ";
    //cin >> a;
    factorial();

    int a = toplama(1,2,3);
    cout << "a: " << a << endl;
    
    return 0;
}

void selam2() {
    cout << "bende assadaki fok baligi" << endl;
}
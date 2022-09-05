#include <iostream>
using namespace std;

int main () {

    /*int i;

    for (i = 1; i < 10 ; i++){

        cout << "i: " << i << endl;
    }*/

    int sayi;
    cout << "Faktoriyel: ";
    cin >> sayi;

    int faktoriyel = 1;

    for (int i = 1; i <= sayi; i++) {
        faktoriyel *= i;
        cout << faktoriyel << endl;
    }
    
    cout << "answer: " << faktoriyel << endl;
    
    // FOR EACH YAPISI // arrayler ve vektörler üzerinde kullanılabilir

    int a [] = {10,20,30,40,50};

    for (int item: a) {
        cout << item << endl;
    }

    return 0;
}
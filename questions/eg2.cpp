#include <iostream>
using namespace std;

int main () {

    int faktoriyel = 1;
    int kullanici_sayisi;
    cout << "Faktoriyel Hesapla" << endl;
    cout << endl;
    cout << "Hesaplanacak sayi: ";
    cin >> kullanici_sayisi;

    for (int i = 1; i <= kullanici_sayisi; i++) {
        faktoriyel *=i;
        cout << "sirasiyla carptiginin kaniti ->" << faktoriyel << endl;
    }
    cout << "Usta senin sonuc : " << faktoriyel << endl;

    return 0;
}
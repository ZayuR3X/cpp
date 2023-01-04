#include <iostream>
using namespace std;

int main() {
    
    float toplam = 0, x;
    
    cout << "X degerini giriniz: ";
    cin >> x;
    
    for (int i = 5; i <= 12; i ++) {
        toplam = toplam + (2*x + i);
    }
    cout << endl;
    cout << "Sonuc: " << toplam << endl;
    
    return 0;
}

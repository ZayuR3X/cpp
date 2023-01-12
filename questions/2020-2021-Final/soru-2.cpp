#include <iostream>
using namespace std;

int main () {
    
    float sayilar[25]; 
    float toplam = 0;
    for (int i = 0; i < 25; i++) {
    
        cout << i+1 << ". sayi: ";
        cin >> sayilar[i];
        //cout << sayilar[i] << endl;
        toplam = toplam + sayilar[i];
    }
    
    cout << "Toplam: " << toplam << endl;
    cout << "Ortalama: " << toplam / 25 << endl;
    
    return 0;
    
}

#include <iostream>
using namespace std;

int main() {
        
    // 1'den kullanıcının girdiği sayıya kadar 7'nin katlarını ekrana yazan programı yazınız.
    
    int kullaniciSayisi;
    cout <<  "Baba sana zahmet sayiyi gir: ";
    cin >> kullaniciSayisi;
    
    for (int i = 1 ; i <= kullaniciSayisi;i++) {
        if (i % 7 == 0) { // % -> bölme işleminde bölümün tam sayısını gösterir
        // kalan 0 ise 7'nin katıdır.
            cout << i << endl;
        }
    }
    return 0;
}
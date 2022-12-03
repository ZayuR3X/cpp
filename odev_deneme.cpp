#include <iostream>
#include <math.h>
using namespace std;

#define PI 3.14159265

float faktoriyel(int x){
    float f = 1;
    for (int i = 1; i <= x; i++) {
        f *= i;
    }
    return f;
}

float tanjant(int y){
    float tansonuc = tan(y * PI/180);
    return tansonuc;
}

float a_sayisi(int k){
    float a_son_sayi = sqrt((2*k-3) * sqrt(faktoriyel(3*k)));
    return a_son_sayi;
}

float a_son_sonuc(int k){
    float a_sonuc;
    
    if (k <= 15){
        a_sonuc = sqrt(a_sayisi(k));
    }
    else if(k > 15 && k <= 30){
        a_sonuc = (a_sayisi(k)*a_sayisi(k) + 1);
    }
    else if (k > 30) {
        a_sonuc = (a_sayisi(k)*a_sayisi(k)*a_sayisi(k));
    }
    return a_sonuc;
}

int main() {
    // Tanjant denemesi
    float tantoplam1 = 1;
    float tantoplam2 = 1;
    float user_input;
    //cout << "x: ";
    //cin >> user_input;
    for(int i = 1; i <= 10;i++){
        for (int j = 1; j <= 20; j++){
            tantoplam2 = tantoplam2 + tanjant(user_input) * faktoriyel(2*j +i);
        }
        tantoplam1 = tantoplam1 + tantoplam2;
    }
    
    //cout << tantoplam1 << endl;
    cout << a_son_sonuc(11) << endl;
    
    // k sayisi 10 ile 60 arasında tek sayı olmalı
    // k sayısının seçimi
    int k_Sayisi;
    
    while (true) {
        
        cout << "K sayisi 10 ile 60 arasındaki TEK sayilar olabilir...\nK sayisini giriniz: ";
        cin >> k_Sayisi;
        
        if (k_Sayisi < 10 || k_Sayisi > 60) {
            cout << "Yanlıs deger..." << endl;
        }
        else if (k_Sayisi%2 == 0) {
            cout << "Dogru aralık fakat cift sayi girdiniz..." << endl;
        }
        else{
            break;
        }
    }
    
    cout << a_son_sonuc(k_Sayisi) << endl;
    
    
    return 0;
}

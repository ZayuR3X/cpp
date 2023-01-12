#include <iostream>
#include <math.h>
using namespace std;

const float pi = 3.141592;

namespace ahmet
{
    string benim_adim = "merhaba benim adim ahmet";

} // namespace ahmet

using namespace ahmet;

void selamla () {
    cout << "merhaba" << endl;
}

void selamla (string a) {
    cout << "merhaba " << a << endl;
}

void selamla (string a , int b) {
    cout << "merhaba " << a << " yasin: " << b << endl;
}

void kare (int a) {
    cout << a*a << endl;
}

int kare () {
    int a;
    cout << "a: ";
    cin >> a;

    return a*a;
}

float alan (int r) {
    return pi*r*r;
}

int sayi_toplami (int a , int b ,int c ,int d){
    return a*b*c*d;
}

int main () {
    
    int m,n;
    cout << "Toplanacak matrisler kaca kaclık olcak[mxn]:\nm: ";
    cin >> m;
    cout << "n: ";
    cin >> n;

    float matris1[m][n],matris2[m][n],toplam_matris[m][n];

    for (int i = 0; i < m;i++) {
        for (int j = 0; j < n; j++){
            cout << "1. matrisin [" << i << "][" << j << "] degeri: ";
            cin >> matris1[i][j];
        }
    }

    for (int i = 0; i < m;i++) {
        for (int j = 0; j < n; j++){
            cout << "2. matrisin [" << i << "][" << j << "] degeri: ";
            cin >> matris2[i][j];
        }
    }

    for (int i = 0; i < m;i++) {
        for (int j = 0; j < n; j++){
            cout << "1. matrisin [" << i << "][" << j << "] degeri: " << matris1[i][j] << endl;
        }
    }

    for (int i = 0; i < m;i++) {
        for (int j = 0; j < n; j++){
            toplam_matris[i][j] = matris1[i][j] + matris2[i][j];
        }
    }

    for (int i = 0; i < m;i++) {
        for (int j = 0; j < n; j++){
            cout << "Toplam matrisin [" << i << "][" << j << "] degeri: " << toplam_matris[i][j] << endl;
        }
    }



    
    
    /*
    float r;
    cout << "r: ";
    cin >> r;
    cout << "alan: " << alan(r) << endl; 
    */
    
    /*
   int sayi1,sayi2,sayi3,sayi4;
   cout<< "sayi1: ";
   cin >> sayi1;
   cout<< "sayi2: ";
   cin>> sayi2;
   cout<< "sayi3: ";
   cin>> sayi3;
   cout<< "sayi4: "; 
   cin>> sayi4; 
   cout << "sayi_toplami: "<< sayi_toplami(sayi1,sayi2,sayi3,sayi4)<<endl; 
    */

    //std::cout << "deneme";
    //cout << "deneme\n" << endl;
    //cout << benim_adim << endl;
    
    /*
    int yas;
    cout << "Yasiniz giriniz: ";
    cin >> yas;

    cout << "yasiniz: " << yas << endl; 
    */
   

   
   
    /*

    int i = 1;
    int j = 1;
    
    while (i < 10 && j < 5) {
        
        cout << "i:" << i <<" j:"<< j << endl;
        i++;
        j++;
        
    }
    */
    
    /*
    float vize,final,ortalama;
   do {
    cout << "Vize notunu gir: ";
    cin >> vize;
    cout <<"Notun " << vize << " olamaz!" << endl;
   }while (vize < 0 || vize > 100); 
   
   do {
    cout << "Final notunu gir: ";
    cin >> final;
    cout << "Notun " << final << " olamaz!" << endl;
   }while (final < 0 || final > 100);
   

   ortalama = (vize*0.4) + (final*0.6) ;

    if (ortalama <= 100 && ortalama >= 85) {
        cout << "AA" << endl;
    }

    else if (ortalama < 85 && ortalama >= 70) {
        cout << "BA" << endl;
    }

    else if (ortalama < 70 && ortalama >= 50) {
        cout << "BB" << endl;
        
    }

    else if (ortalama < 50 && ortalama >= 0) {
        cout << "Kaldiniz" << endl;
        
    }

    else {
        cout << "notun boyle olamaz" << endl;
    }

    cout << "Ortalama notunuz: " << ortalama << endl;
    */
   
   /*
   for (int i = 0; i <= 10; i+=2) {
    cout << "i: " << i << endl;
   }

    int sayi;
    cout << "Faktoriyel hesaplanacak sayi: ";
    cin >> sayi;

    int faktoriyel = 1;

    for (int i = 1; i <= sayi; i++) {
        faktoriyel = faktoriyel * i; // faktoriyel *= i
        cout << "kanit: " << faktoriyel << endl;
    }

    cout << "Sonuc: " << faktoriyel << endl;
    */

   /*
    // 1'den 20'ye kadar olan tek sayıların toplamını karekökünü alan program.
    // sqrt() karekök alır.

    int toplam = 0;

    for (int i = 1; i <= 20; i++) {
        if (i % 2 != 0) {
            toplam = toplam + i;
        }
    }

    cout << toplam << endl;
    cout << "toplamin karekoku: " << sqrt(toplam) << endl;
    */

   /*
   string string_dizim[3] = {"elma","muz","kelek"};

   cout << string_dizim[2] << endl;

   int array[] = {1,2,3,4,5,6};

   cout << array[0] << endl;

   string array2[3];
    */

    /*
   for (int i = 0; i < 3; i++) {

    cout << "deger giriniz: ";
    cin >> array2[i];

   }

   for (int i = 0; i < 3;i++) {
    cout << array2[i] << endl;
   }   
    */

   /*
   // 1. final sorusu 
   int dizi_240[240];

   for (int i = 0; i < 240; i++) {
    dizi_240[i] = 34;
   }

   cout << "dizinin 0. indexi: " << dizi_240[0] << endl;
   cout << "dizinin 239. indexi: " << dizi_240[239] << endl;
    */
    
   /*
   // 2)final sor 
   int toplam = 0, n;
   cout << "n: ";
   cin >> n;

   int dizi[n];

   for (int i = 0; i < n; i ++) {
    cout << i+1 << ". sayi: ";
    cin >> dizi[i];
    toplam += dizi[i];
   }

    cout << "ortalama: " << toplam / n << endl;
    */
   


   /*
   // 4. soru
   int toplam = 0;
   for(int i = 8; i <= 146; i +=2){
    toplam = toplam + i ;

   }
    cout<< toplam <<endl;
    */
    
    return 0;

}

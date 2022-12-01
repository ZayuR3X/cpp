#include <iostream>
#include <math.h>
using namespace std;

double vektor(int a, int b){
    double sonuc = sqrt((a*a)+(b*b));
    return sonuc;
}

int toplam1,toplam2;

int vektor_topla() {
    int a,b,c,d;
    cout << "Ilk vektorun i degeri: ";
    cin >> a;
    cout  << "Ilk vektorun j degeri: ";
    cin >> b;
    cout << "Ikinci vektorun i degeri: ";
    cin >> c;
    cout << "Ikinci vektorun j degeri: ";
    cin >> d;
    toplam1 = a + c;
    toplam2 = b + d;
    cout << "Yeni vektor\ni:" << toplam1 << " j:" << toplam2 << endl;
    return toplam1,toplam2;
}


int main () {
    
    vektor_topla();
    cout <<"Vektor buyuklugu:" << vektor(toplam1,toplam2);
    
    return 0;
}

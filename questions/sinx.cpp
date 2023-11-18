#include <iostream>
#include <math.h>
using namespace std;

double ifact (int n);
int main() {
    
    int n;
    double fact;
    float derece,derece_tam,radian,toplam = 0;
    const float pi = 3.141592;
    // kullanıcıdan derece al
    cout << "Derece giriniz: ";
    cin >> derece;
   
    //dereceyi radyana çevir
    radian = (derece * pi) / 180.0;
    cout << derece << " derece: "<<radian<<" radyan"<< endl;
    
    for (int i = 0; i <= 10; i++) {
        n = 2*i+1;
        fact = ifact(n);
        //cout << n <<" faktoriyel: " << fact << endl; // kontrol
        toplam = toplam +(pow(-1,i)*pow(radian,n) / fact);
        //cout << toplam << endl; // kontrol
    }
    
    cout << "Sin(" << derece << ") = " << toplam << endl;
    return 0;
}
double ifact(int n) {
    double f = 1;
    for (int i = 1; i<=n ; i++) {
        f = f * i;
    }
    return f;
}

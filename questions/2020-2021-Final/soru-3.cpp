#include <iostream>
using namespace std;

void carpim () {
    int x,y,z,t;
    
    cout << "x: "; cin >> x;
    cout << "y: "; cin >> y;
    cout << "z: "; cin >> z;
    cout << "t: "; cin >> t;
    
    cout << "Carpimlari: " << x*y*z*t << endl;
}
//return kullanarak ana programda da yazilabilir ikiside dogru...

//deger döndürerek yapmak icin alttaki

int carpimlar (int x,int y,int z,int t) {
    return x*y*z*t;
}


int main () {
    
    // 1. fonksiyon
    carpim();
    
    
    //2. fonksiyon
    int a,b,c,d;
    cout << "a: "; cin >> a;
    cout << "b: "; cin >> b;
    cout << "c: "; cin >> c;
    cout << "d: "; cin >> d;
    
    cout << "Carpimlari: " << carpimlar(a,b,c,d) << endl;
    
    return 0;
}

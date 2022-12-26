#include <iostream>
using namespace std;

int main () {
    
    int dizi[239];
    
    for (int i = 0; i <= 239; i++) {
        dizi[i] = 34;
        cout << dizi[i] << endl;
    }
    
    cout << "dizi degeri: " << dizi[0] << endl;
    cout << "dizi degeri: " << dizi[239] << endl;
    cout << "dizi degeri: " << dizi[240] << endl; // 34 degerini vermez cünkü diziler 0. indexten baslar...(Verdigi deger bellekteki herhangi kayıtlı olan bir deger)   
    
    return 0;
    
}

#include <iostream>
using namespace std;

int main () {
    
    int dizi[240];
    
    for (int i = 0; i < 240; i++) {
        dizi[i] = 34;
        cout << dizi[i] << endl;
    }
    
    cout << "dizi degeri: " << dizi[0] << endl;
    cout << "dizi degeri: " << dizi[239] << endl;   
    
    return 0;
    
}

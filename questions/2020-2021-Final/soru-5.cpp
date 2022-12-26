#include <iostream>
using namespace std;

int main () {
    
    int carpim = 1;
    
    for (int i = 7; i <= 12; i++) {
        carpim *= i; // şu anlama geliyor --> carpim = carpim * i;  
    }
    
    cout << "Sonuc: " << carpim << endl;
    
    return 0;
}

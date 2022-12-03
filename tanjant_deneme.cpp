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

int main() {
    
    float tantoplam1 = 1;
    float tantoplam2 = 1;
    float user_input;
    cout << "x: ";
    cin >> user_input;
    for(int i = 1; i <= 10;i++){
        for (int j = 1; j <= 20; j++){
            tantoplam2 = tantoplam2 + tanjant(user_input) * faktoriyel(2*j +i);
        }
        tantoplam1 = tantoplam1 + tantoplam2;
    }
    
    cout << tantoplam1 << endl;
    
    return 0;
}

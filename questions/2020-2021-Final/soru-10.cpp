#include <iostream>
#include <math.h>
using namespace std;

float karekok (int x) {
    return sqrt(x);
}

int main() {
    
    float a;
    cout << "X: ";
    cin >> a;
    cout << a << " sayisinin karekok degeri: " << karekok(a) << endl;
    
    return 0;
}

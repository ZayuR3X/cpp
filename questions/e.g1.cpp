#include <iostream>
using namespace std;

int main() {
    //Kullanıcıdan 3 tam sayı al
    //Bu 3 sayıdan en büyük olanını ekrana yazdır
    //Bunları yaparken en az sayıda kod yazarak yapmaya çalış
    //örn: 5,6,7 -> output (7) & 5,5,6 -> output (5)
    
    int a,b,c;
    cin >> a >> b >> c;
    
    if (a >= b && a >= c) {
        cout << "en büyük: " << a << endl;        
    }
    else if (b >= c) { 
        cout << "en büyük: " << b << endl;
    }
    else{
        cout << "en büyük: " << c << endl;
    }
    
    return 0;
}
#include <iostream>
using namespace std;

int main () {
    
    int toplam = 0;
    
    for (int i = 8; i <= 146; i++) {
        if (i % 2 == 0) { // %: MOD demektir, sayının kalanını alır. %2 demek sayiyi 2'ye böler ve kalanını alır. Çift sayıyı 2'ye bölersen kalan 0 olur.
            toplam += i;
        }
    }
    
    cout << "Toplam: " << toplam << endl;
    
    return 0;
}

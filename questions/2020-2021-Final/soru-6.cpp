#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    
    srand (time(NULL)); // bu olmazsa hep aynı sayıları verir
    
    for (int i = 0; i < 8; i++) {
        cout << (rand() % 100) + 1 << " "; // +1 eklememin sebebi 100'ü dahil etmek için
        }    
       
    return 0;
}

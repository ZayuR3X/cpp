#include <iostream>
using namespace std;


int main () {

    // NULL POINTER AND DANLING REFERANSİÜÜÜÜÜÜ

    int *ptr1 = nullptr;
    int *ptr2 = nullptr;
    
    ptr1 = new int;

    *ptr1 = 10;
    ptr1 = ptr2;

    delete ptr1;
    //*ptr1 = 10; // ptr eşitlenmediği zaman çalışıyor ptr2'ye eşitlendiğinde hata veriyor.
    //cout << *ptr1 << endl;
    *ptr2 = 20;
    cout << *ptr2 << endl;
    //usta bunlar sınavda çıkar diyor önemli olabilir...
    
    return 0;
}
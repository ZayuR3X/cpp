#include <iostream>
using namespace std;

int main () {

    int islem;

    cout << "bir islem giriniz: ";
    cin >> islem;

    switch (islem)
    {
    case 1:
        cout << "1. islemi sectiniz..." << endl;
        break; // break önemli! yoksa olmuş gibi kabul eder.
    case 2:
        cout << "2. islemi sectiniz..." << endl;
        break;
    case 3:
        cout << "3. islemi sectiniz..." << endl;
        break;

    default:
        cout << "gecersiz bir islem..." << endl;
        break;
    }

    return 0;

}
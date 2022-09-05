#include <iostream>
using namespace std;

int main() {

    /*int i = 1;
    int j = 1;
    
    while (i < 10 && j < 5) {
        
        cout << "i:" << i <<" j:"<< j << endl;
        i++;
        j++;
        
    }
    */

    // DO WHILE DONGÜSÜ

    string parola = "dumbuk9";
    string user_input;

    do {                                   // ilk seferlik hep çalıştırır o7

        cout << "Parolayi Gir: ";
        cin >> user_input;

        if (parola != user_input) {

            cout
            << "hatali giris brom"
            << endl; 
        }
    }while (parola != user_input);

    cout 
    << "dumbuk9 online" 
    << endl;

    return 0; 
}
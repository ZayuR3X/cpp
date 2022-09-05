#include <iostream>
using namespace std;

int main () {

    /*string password = "deneme123";

    string input;
    cout << "sifreyi giriniz: ";
    cin >> input;

    if (password  == input) {

        cout << "sifreniz dogru :) ...";
    }

    else {
        cout << "sifreniz yanlis :( ..."; 
    }
    */

    int a,b;
    string islem;

    cout << "C++ Hesap Makinesine HG" << endl;
    cout << "Toplama icin: 1\nCikarma icin: 2\nCarpma icin: 3\nBolme icin: 4" << endl;
    cout << "islem: ";
    cin >> islem;

    if (islem == "1") {
        cout << "a:";
        cin >> a;
        cout << "b:";
        cin >> b;

        cout << "Toplamlari: " << a + b << endl;
    }  
    else if (islem == "2") {
        cout << "a:";
        cin >> a;
        cout << "b:";
        cin >> b;

        cout << "Farklari: " << a - b << endl;
    }
    else if (islem == "3") {
        cout << "a:";
        cin >> a;
        cout << "b:";
        cin >> b;

        cout << "Carpimlari: " << a * b << endl;
    }
    else if (islem == "4") {
        cout << "a:";
        cin >> a;
        cout << "b:";
        cin >> b;

        cout << "Bolumleri: " << a / b << endl;
    }
    else {
        cout << "hatali bir islem ..."; // olm utf8 sorununu bi çözemedim aq ya türkçe karakter almıyor
    }


    return 0;
}
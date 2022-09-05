#include <iostream>
using namespace std;

int main () {

    /*int i = 0;
    
    while (i < 10) {
        
        if (i == 5) {
            break;
            }
        cout << "i: " << i << endl;
        i++;
        } */

    /*for (int i = 0 ; i < 10; i++) {

        if (i == 3 || i == 5) {
            continue;
        }

        cout << "i: " << i << endl;
    }*/
/*
    // Hata oluşabilecek durum...

    int i = 0;

    while (i < 10) {

        if (i == 3 || i == 5) {
            // i++; sorun çözülür...
            continue; // loopa girer...
        }
    cout << "i: " << i << endl;
    i++;
    }   
*/

    string sys_user = "ahmetaga";
    string sys_sıfre = "dumbuk9";
    
    string username;
    string sıfre;

    while (true) {

        cout << "Username: ";
        cin >> username;
        cout << "Password: ";
        cin >> sıfre;

        if (sys_user  == username && sys_sıfre == sıfre) {

            cout << "WELCOME "<< sıfre <<  endl;
            break;
        }

        else if (sys_user != username && sys_sıfre == sıfre) {
            cout << "Wrong Username" << endl;
        }


        else if (sys_user == username && sys_sıfre != sıfre) {
            cout << "Wrong Password" << endl;
        }
        else {
            cout << "All infos wrong dudeee" << endl;
        }
    }

    return 0;
}
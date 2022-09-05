#include <iostream>
using namespace std;

int main() {

    /*int array[3];
    array[0] = 10;
    array[1] = 20;
    array[2] = 30;

    cout << "0. index: " << array[0] << endl;
    cout << "1. index: " << array[1] << endl;
    cout << "2. index: " << array[2] << endl;*/

    //int array[] = {10,20,30,40};
    /*double array2[] = {1.2,2.4,6.7,7.31};

    for (int i = 0; i < 4; i++) {
        cout << i << ". index: " << array2[i] << endl;
    }*/

    /*string array3[4];

    for (int i = 0; i < 4; i++) {
        cout << "deger giriniz: ";
        cin >> array3[i];
    }
    for (int i = 0; i < 4; i++) {

        cout << i << ". index: " << array3[i] << endl;
    }*/


    // ++++++++++++++++++++++++++
    // ++ ÇOK BOYUTLU ARRAYLER ++
    // ++++++++++++++++++++++++++                  
    
    int matris [3][3]; //{{1,2,3},{4,5,6},{7,8,9}};
    /*
    cout << matris[0][1]<< endl;
    cout << matris[2][2]<< endl;
    cout << matris[1][1]<< endl;
    */
    cout << "matris degerlerini giriniz:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++){
            cin >> matris[i][j];
        }
    }
    cout << "Matris" << endl;
    
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            //cout << "i ve j " << i<<":"<<j<<endl;
            cout << matris [i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
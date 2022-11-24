#include <iostream>
using namespace std;

int main () {
    
    int m1,m2,n1,n2; 
    
    cout << "A matrisi kaca kaclık olacak(MxN): "<< endl;
    cout << "m:";
    cin >> m1;
    cout << "n:";
    cin >> n1;
    
    cout << "B matrisi kaca kaclık olacak(MxN): "<< endl;
    cout << "m: ";
    cin >> m2;
    cout << "n: ";
    cin >> n2;
    
    float matris1[m1][n1];
    float matris2[m2][n2];
    float sonmatris[m1][n1];
    
    for (int i = 0; i < m1 ; i++) {
        for (int j = 0; j < n1 ; j++){
            cout << "[" << i << "]" << "][" << j << "] degeri: ";
            cin >> matris1[i][j];
        }
    }
    
    for (int i = 0; i < m2 ; i++) {
        for (int j = 0; j < n2 ; j++){
            cout << "[" << i << "]" << "][" << j << "] degeri: ";
            cin >> matris2[i][j];
        }
    }
    
    // matris toplami
    
    for (int i = 0; i < m1; i++){
        for (int j = 0; j < n1; j++){
            sonmatris[i][j] = matris1[i][j] + matris2[i][j];
        }
    }
    
    // sonuc matrisin ekrana basimi
    for(int i = 0; i < m1; i++){
        for (int j = 0; j < n2; j++){
         cout << sonmatris[i][j] << " ";   
        }
        cout << endl;
    }
    
    return 0;
}

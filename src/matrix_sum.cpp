#include <iostream>
using namespace std;

int main () {
    
    int m ,n ;
    cout << "Matrisler kaca kaclik: " << endl;
    cout << "M: ";
    cin >> m;
    cout << "N: ";
    cin >> n;
    
    int matris_A [m] [n];
    int matris_B [m] [n];
    int matris_C [m] [n];

    cout << "A matris degerlerini giriniz:" << endl;
    for (int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++){
            cout << "[" << i << "]" << "[" << j << "] degeri: ";
            cin >> matris_A [i] [j];
        }
    }
    cout << "B matris degerlerini giriniz:" << endl;
    for (int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++){
            cout << "[" << i << "]" << "[" << j << "] degeri: ";
            cin >> matris_B [i] [j];
        }
    }
    
    // Matrislerin toplamı
    for(int i = 0; i < m; i++) {
        for (int j = 0 ; j < n; j++){
            matris_C [i] [j] = matris_A[i][j] + matris_B[i][j];
        }
    }
    
    // Ekrana yazdır
    cout << "Toplam Matris Degerleri:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (j == 0) {
                cout << "| ";
            }
            cout << matris_C [i][j] << " ";
        }
        cout << "|" << endl;
    }

    return 0;
}

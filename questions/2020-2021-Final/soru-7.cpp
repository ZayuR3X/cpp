#include <iostream>
using namespace std;

int main() {
    
    float matris1[2][2],matris2[2][2],toplam_matris[2][2];
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
        
        cout << "Ilk matris [" << i << "][" << j << "] degeri: "; // anlaşılır olması için böyle yazdım
        cin >> matris1[i][j];
            
        }
    }
    
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
        
        cout << "Ikinci matris [" << i << "][" << j << "] degeri: ";
        cin >> matris2[i][j];
            
        }
    }
    
    /*for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
        
        cout << "Ilk matris [" << i << "][" << j << "] degeri: " 
        << matris1[i][j] << endl;
        
        }
    }*/ //degerlerin atandığını kontrol etmek için
    
    //matris toplami 
    for (int i = 0; i < 2; i++) {
        for (int j = 0; i < 2 ;j++) {
            toplam_matris[i][j] = matris1[i][j] + matris2[i][j];
        }
    }
    
    // sonuc matrisin ekrana basimi
    for(int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
         cout << toplam_matris[i][j] << " ";   
        }
        cout << endl;
    }
    
    return 0;
}

#include <iostream>
using namespace std;

int main()
{
 int m1,m2,n1,n2;
 cout << "A matrisi satir ve sutun sayisi giriniz(mxn)\nm:";
 cin >> m1;
 cout << "n:"; 
 cin>> n1;
 cout << "B matrisi satir ve sutun sayisi giriniz(mxn)\nm:";
 cin >> m2;
 cout << "n:";
 cin >> n2;
 
 float matris1[m1][n1];
 float matris2[m2][n2];
 float son_matris[m1][n2];
 
 for (int i = 0; i < m1 ; i++) {
     for (int j = 0; j < n1 ; j++){
         cout << "A matrisi [" << i << "][" << j << "] = ";
         cin >> matris1[i][j];
         }
     }
     
 for (int i = 0; i < m2 ; i++) {
     for (int j = 0 ; j < n2; j++) {
         cout << "B matrisi ["  << i << "][" << j << "] = ";
         cin >> matris2[i][j];
         }
     }
 
 // çarpma işlemi 
 
 for (int i = 0; i < m1 ; i++){
     for (int j = 0; j < n1; j++){
         son_matris[i][j] = 0;
         for (int s = 0; s < n1 ; s++){
             son_matris[i][j] += matris1[i][s] * matris2[s][j];
             }
         }
     }
 
 for (int i = 0; i < m1 ; i++){
     for (int j = 0; j < n2; j++){
         cout << son_matris[i][j] << " ";
         }
     cout << endl;
     }
 
 return 0; 
}

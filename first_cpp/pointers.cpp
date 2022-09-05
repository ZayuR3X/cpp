#include <iostream>
using namespace std;


/*void degerDegistir (int *ptr) {
    *ptr = 20;
    cout << "Fonksiyon icindeki deger: " << *ptr << endl;
}*/

int main() {

    /*int a = 10;
    cout << "a degiskeninin degeri: " << a << endl;
    degerDegistir(&a);
    cout << "a'nin yeni degeri: " << a << endl;
    */

       
    string array[] = {"Ahmet", "Kilic","deneme"};
    string *ptr = array;
    //cout << *(ptr + 1) << endl;
    cout << ptr[1] << endl; // bunu kullan daa temiz. arraylerin indexlerini aşma pc yi bozarsın
    
    //int array[] = {1,2,3,4};
    //cout << array << endl;
    //cout << array + 1 << endl; 
    //int  *p = array;
    //cout << p << endl;
    //int *ptr = &array[2];
    //cout << ptr << endl;
    
    //ptr = ptr + 1;
    //ptr += 1;
    //cout << ptr << endl;
    
    return 0;
}
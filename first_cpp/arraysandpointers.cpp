#include <iostream>
using namespace std;

void printArray(int /*array[]*/*ptr,int size) {
    
    for (int i=0;i<size;i++){
        cout << /*array[i]*/ptr[i] << endl;
    }    
}

void printArray2 (const int *ptr1, const int *ptr2) {
    
    for (; ptr1 != ptr2;ptr1++) {
        cout << "Eleman: " << *ptr1 << endl;
    }
}

int main() {
    
    int a[] = {1,2,3,4,5};
    printArray(a,5);
    
    const int i = 10; // const yapılan değiken bir daha değiştirilemez
    //int i = 20; yaparsan hata alırsın
    cout << i << endl;
    const int constarray[] = {1,2,3,4,5,6};
    //constarray[2] = 100; yapamazsın

    int array2[] = {1,2,3,4,5,6,7,8,9,10};
    
    printArray2(array2+2,array2+7);
    
    return 0;
}
#include <iostream>
using namespace std;

void selamla() {
    cout << "hi" << endl;
}

void selamla (string name) {
    cout << "hi " << name << endl;
}

void selamla (string name1,string name2) {
    cout << "hi " << name1 << " " << name2 << endl;
}

int main () {

    selamla();
    selamla("ahmet");
    selamla("ahmet","aga");

    return 0;
}
#include <iostream>
#include "daire.h"

using namespace std;

int main () {
	
	Daire d;
	cout << "Yaricapi giriniz: ";
	cin >> d.r;
	
	cout << "\nAlan: " << d.alan() << endl;
	cout << "\nCevre: " << d.cevre() << endl;
	
	return 0;
	
}

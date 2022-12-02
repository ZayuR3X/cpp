#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;

void kare_al(){
	int x;
	cout << "Karesi alinacak sayi: ";
	cin >> x;
	cout << "Sonuc: " << x*x << endl;
	}
	
void factorial() {
	int sayi;
	cout << "Faktoriyel Hesapla" << endl;
	cout << "Sayi giriniz: ";
	cin >> sayi;
	
	int faktoriyel = 1;
	for (int i = 1; i <= sayi; i++){
		faktoriyel *= i;	
	}
	cout << "Sonuc: " << faktoriyel << endl;
}

//exp hesabı

int fakt(int n) {
	int f = 1;
	for (int i = 1; i <= n ;i++){
		f  = f * i;
	}
	return f;
}

int main() {
	
	//kare_al();
	//factorial();
	cout << fakt(5) << endl;
	
	int i,x;
	cout << "x:";
	cin >> x;
	float toplam = 1;
	for (i = 1 ; i <= 10; i++){
		toplam = toplam + pow(x,i) / fakt(i); 
	}
	cout << "exp: " << toplam << endl;
	
	return 0;
}

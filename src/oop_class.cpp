#include <iostream>
#include <string>
using namespace std;

class daire {
	
	private:
		const double pi = 3.14;
	public:
		double r;
		double alan(double r) {
			return pi*r*r;
		}
};

class dik {
	
	public:
		int genislik,yukseklik;
		int alan (int gen,int yuk){
			return gen * yuk;
		}
		int cevre (int gen,int yuk) {
			return 2*(gen+yuk);
		}
};

class sayilar {
	public:
		int a,b,c;
		sayilar() {
		a = 1; b = 4, c = 15;
		}
}sayi; // ana programda " sayilar sayi; " yerine geçiyor

class insanlar {
	string ad,soyad;
	int yas;
	public:
		insanlar (string a,string s, int y) {
			ad = a;
			soyad = s;
			yas = y;
		}
		void goster() {
			cout << "Adi: " << ad << endl;
			cout << "Soyad: " << soyad << endl;
			cout << "Yas: " << yas << endl;
			cout << "------------------\n" <<endl;
		}
};

int main () {
	
	/*daire d;
	
	cout << "Yaricap: ";
	cin >> d.r;
	cout << "Alan: " << d.alan(d.r);
	*/
	
	/*
	dik d1,d2;
	
	cout << "d1 genislik: "; 
	cin >> d1.genislik;
	cout << "d1 yukseklik: "; 
	cin >> d1.yukseklik;
	cout << "d1 alan: " << d1.alan(d1.genislik,d1.yukseklik) << endl;
	cout << "d1 cevre: " << d1.cevre(d1.genislik,d1.yukseklik) << endl;
	
	cout << "d2 genislik: "; 
	cin >> d2.genislik;
	cout << "d2 yukseklik: "; 
	cin >> d2.yukseklik;
	cout << "d2 alan: " << d2.alan(d2.genislik,d2.yukseklik) << endl;
	cout << "d2 cevre: " << d2.cevre(d2.genislik,d2.yukseklik) << endl;
	*/
	
	
	cout << "A degeri: " << sayi.a << endl;
	cout << "B degeri: " << sayi.b << endl;
	cout << "C degeri: " << sayi.c << endl;
	
	
	insanlar insan1("Ahmet","KILIC",18);
	insanlar insan2("Mehmet","YILDIZ",21);
	insan1.goster();
	insan2.goster();
	
	
	return 0;
}

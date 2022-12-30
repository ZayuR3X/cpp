//#include <ifstream>  //  dosyadan veri okuma için
//#include <ofstream> // dosyaya veri yazdırma
#include <fstream>   // dosyadan okuma ve yazdırma
#include <iostream>
#include <string>

using namespace std;

int main () {
	//yazma
	char veri[100]; //string veri; = belli kısımları okunun çalışması için

	
	ofstream testyaz;
	testyaz.open("test.txt",/*ios::app // ekleyerek yazar // kullanmazsan üstüne yazar*/);
	cout << "Adiniz: "; 
	cin.getline(veri,100);
	testyaz << veri << endl;
	cout << "Yasiniz: "; 
	cin>>veri;
	//testyaz.seekp/* p(put): okuma */
	cin.ignore();
	testyaz << veri << endl;
	
	testyaz.close();	
	
	
	//okuma
	/*
	ifstream testoku;
	testoku.open("test.txt");
	cout << "Dosyadan veri okuma" << endl;
	testoku >> veri;
	cout << veri << endl;
	testoku >> veri;
	cout << veri << endl;
	testoku.close();
	*/
	
	// belli kısımları okuma
	/*
	ifstream testoku;
	
	testoku.open("test.txt");
	cout << "Dosyadan veri okuma" << endl;
	//testoku.seekg// (g: okuma)(0,ios::beg); // beg = başlangıçtan alıyor
	//getline (testoku,veri); 
	//cout << veri << endl;
	testoku.seekg(1,ios::cur); // cur = curser'ı atlatıyor
							  // end = son kısma gelip -(sayi) ile geri gelir ve kalanı yazar
	getline (testoku,veri);
	cout << veri << endl;
	
	testoku.close();
	*/
	
	return 0;
}

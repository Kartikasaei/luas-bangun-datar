#include <iostream>
#include <conio.h>

using namespace std;

float p, l, a, t, d, phi = 3.14, luas;

int main()

{
	cout << "==========MENGHITUNG LUAS PERSEGI==========="<<endl;
	cout << "Masukkan nilai panjang : ";
	cin >> p;
	cout << "Masukkan nilai lebar : ";
	cin >> l;
	//cout<<endl;
	
	luas = p * l;
	cout << "Luas dari persegi tersebut = " << luas << " m^2" << endl;
	
	cout<<endl;
	cout<<endl;
	cout << "==========MENGHITUNG LUAS SEGITIGA==========="<<endl;
	cout << "Masukkan nilai tinggi : ";
	cin >> a;
	cout << "Masukkan nilai alas : ";
	cin >> t;
	
	luas = (a * t)/2;
	cout << "Luas dari segitiga tersebut = " << luas << " m^2" << endl;
	
	cout<<endl;
	cout<<endl;
	cout << "==========MENGHITUNG LUAS LINGKARAN==========="<<endl;
	cout << "Masukkan nilai diameter : ";
	cin >> d;
	
	luas = phi * d;
	cout << "Luas dari lingkaran tersebut = " << luas << " m^2" << endl;

	//getch();
	
	return 0;
}

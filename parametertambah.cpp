#include <iostream>
using namespace std;

//prototype
int tambahkan ( int a, int b);

//program utama
int a, b; 
int main () {
	cout << "masukan nilai A : ";
	cin >> a;
	cout << "masukan nilai B : ";
	cin >> b;
	cout << " Hasil : " << tambahkan (a, b) << endl;
	return 0;
}
	int tambahkan (int a, int b) {
	return a + b;
}
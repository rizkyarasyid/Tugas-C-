#include <iostream>

using namespace std;

void prosesbaca();
int proseshitung();
void prosestampil();

int bil,faktor=1;

int main () {
	prosesbaca();
	proseshitung();
	prosestampil();
}

void prosesbaca () {
	cout << "Masukan Nilai : ";
	cin >>  bil;
	
}

int proseshitung () {
	for(int a=bil;a>=2;a--) {
		faktor=a*faktor;
	}
}
void prosestampil(){
	cout << "Hasil Faktorisasinya adalah = " ; 
	cout << faktor;
}
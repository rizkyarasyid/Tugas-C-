#include <iostream>
using namespace std;
// prototype
void prosesbaca();
int prosestambah();
int proseskurang();
void prosestampil();

// variable global
int a, b;

// program utama
int main () {
prosesbaca();
prosestampil();
return 0;
}

// proses membaca 
void prosesbaca () {
cout << "masukan nilai A : ";
cin >> a;
cout << "masukan nilai B : ";
cin >> b;
}

// proses tambah
int prosestambah () {
return a + b;
}

// proses kurang 
int proseskurang (){
int hasil;
hasil = a - b;
return hasil;
}

// proses tampil 
void prosestampil () {
cout << "hasiltambah : " << prosestambah ()
<< endl;
cout << "hasilkurang : " << proseskurang ();
}
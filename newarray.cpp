#include <iostream>
using namespace std;

struct data_mahasiswa {
	string nama;
	int semester,nim,nilai;
	};

data_mahasiswa mahasiswa[5];
	int main ()
	{
	cout << " Data Mahasiswa STTB " << endl;
	cout << "========================= " << endl;
	for (int i=1; i<5; ++i)
	{
	cout << "Masukkan Mahasiswa ke -"<<i<< endl;
	cout << "Nama Mahasiswa: "; cin >> mahasiswa[i].nama;
	cout << "Semester: ";cin >> mahasiswa[i].semester;
	cout << "Nomor Induk Mahasiswa: "; cin >> mahasiswa [i].nim;
	cout << "Nilai: "; cin >> mahasiswa [i].nilai;
	}
	for (int i=1; i<5; ++i)
	{
	cout <<	" mahasiswa " << i << endl;
	cout << mahasiswa[i].nama << endl;
	cout << mahasiswa[i].semester << endl;
	cout << mahasiswa [i].nim << endl;
	cout << mahasiswa [i].nilai << endl;
	}
	
	
return 0;
}
	
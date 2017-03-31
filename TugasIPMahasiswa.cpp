#include <iostream>
using namespace std;

bool iswithinrange(float nilai, int max, int min);
void proses_cetak();
	float ip, total;
	bool valid;
	int jmlh_mahasiswa, jmlh_lulus, jmlh_tdklulus;
	
int main () {

	do {
	
		cout << "Masukan Nilai IP : ";
		cin >> ip;
		valid = iswithinrange(ip,4,0);
		if (valid){
			if (ip >= 2.75){
				jmlh_lulus++;
			} 
			
			else {
				jmlh_tdklulus++;
			}
			total = total + ip;
			jmlh_mahasiswa++;
		}
		
		else {
			cout << "Mohon Masukan Nilai yang benar | RANGE IP 1 s/d 4" <<endl;
			
		}
		
		
	
	}
	
	while (ip != -999);
	proses_cetak();

}


bool iswithinrange (float nilai, int max, int min){
	
	if (nilai > max || nilai <=0){
		return false;
	}
	
	return true;
	
}


void proses_cetak(){
	cout << "Banyaknya Mahasiswa : " << jmlh_mahasiswa << endl;
	cout << "Banyaknya Mahasiswa Lulus : " << jmlh_lulus << endl;
	cout << "Banyaknya Mahasiswa Tidak Lulus : " << jmlh_tdklulus << endl;
	cout << "Rata - rata nilai IP : " << (total / jmlh_mahasiswa) << endl;
	
}
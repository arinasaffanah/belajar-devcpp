#include<iostream>
using namespace std;

int main(){
	//operator pengurangan
	//variabel ga usah panjang-panjang namanya, satu kata cukup. karena hanya ada di layar prgogram.
	int tahun_saat_ini, tahun_lahir, umur;
	
	cout<<"masukkan tahun saat ini : ";
	cin>>tahun_saat_ini;
	
	cout<<"masukkan tahun lahir anda : ";
	cin>>tahun_lahir;
	
	umur = tahun_saat_ini - tahun_lahir;
	cout<<"umur anda saat ini adalah "<<umur<<" tahun.";
	
	}

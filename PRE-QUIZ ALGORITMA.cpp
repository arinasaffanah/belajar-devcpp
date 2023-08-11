#include<iostream>
using namespace std;

int main(){
	//MEMBUAT PROGRAM PENENTUAN LULUS ATAU TIDAK BERDASARKAN HASIL IPK
	/* 
	
	+ RATA2 DARI TIAP MATKUL -> MENENTUKAN IPK AKHIR
	+ JANGAN LUPA PAKAI LOOPING
	1. INPUT DATA
	- NAMA LENGKAP
	- MASUKKAN NILAI TIAP MATKUL (BERUPA ANGKA)
	2. MENGGUNAKAN IF ELSE. 
	- MENGUBAH FLOAT MENJADI INT
	3. SWITCH CASE
	*/
	
	string nama[4];
	float nilai_algoritma[4], nilai_dsi[4], nilai_almat[4], nilai_pku[4], nilai_bing[4], nr[4], ipk[4];
	int hasil[4];
	
	for (int a = 1; a<4; a++){
	cout<<endl;
	cout<<a<<". Nama \t\t\t\t\t\t= ";
	cin.ignore();
	getline(cin, nama[a]);
	cout<<endl;
	cout<<"   Masukkan nilai matkul ALGORITMA \t\t\t= ";
	cin>>nilai_algoritma[a];
	cout<<"   Masukkan nilai matkul DASAR SISTEM INFORMASI \t= ";
	cin>>nilai_dsi[a];
	cout<<"   Masukkan nilai matkul ALJABAR LINEAR & MATRIKS \t= ";
	cin>>nilai_almat[a];
	cout<<"   Masukkan nilai matkul PKU \t\t\t\t= ";
	cin>>nilai_pku[a];
	cout<<"   Masukkan nilai matkul BAHASA INGGRIS \t\t= ";
	cin>>nilai_bing[a];
	cout<<"-------------------------------------------------------------"<<endl;
	
	nr[a] = (nilai_algoritma[a] + nilai_dsi[a] + nilai_almat[a] + nilai_pku[a] + nilai_bing[a])/5;
	cout<<"==============================================="<<endl;
	cout<<endl;
	
}
}

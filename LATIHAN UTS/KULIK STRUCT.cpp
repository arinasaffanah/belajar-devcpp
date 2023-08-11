#include<iostream>
using namespace std;

/* struct sinya hanya variabel
untuk pemanggilan dan pengisian nilai ada di method main
-- buat dulu semua nilainya, lalu invoke

-- notasi, namastruct_pemilik (pengisian nilai di main method)
-- invoke, pemilik_variabel(pemanggilan di main  ethod)
*/


struct mahasiswa{
	string nama;
	float nim;
	string fakultas;
	string prodi;
	
};

//notasi pemanggilan

int main(){
	mahasiswa mhs;//mhs=arina
	mahasiswa saya;
	
	mhs.nama = "Arina";
	mhs.nim = 20220801189;
	mhs.fakultas = "Ilmu Komputer";
	mhs.prodi = "Teknik informatika";
	
	saya.nama = "Saffanah";
	saya.nim = 20220802189;
	saya.fakultas = "Ilmu Komputer";
	saya.prodi = "Sistem Informmasi";
	
	cout<<"Nama \t\t= "<<mhs.nama<<endl;
	cout<<"NIM \t\t= "<<mhs.nim<<endl;
	cout<<"Fakultas \t= "<<mhs.fakultas<<endl;
	cout<<"Prodi \t\t= "<<mhs.prodi<<endl;
	
	cout<<"\n====================================================="<<endl;
	
	cout<<"Nama \t\t= "<<saya.nama<<endl;
	cout<<"NIM \t\t= "<<saya.nim<<endl;
	cout<<"Fakultas \t= "<<saya.fakultas<<endl;
	cout<<"Prodi \t\t= "<<saya.prodi<<endl;
	
}

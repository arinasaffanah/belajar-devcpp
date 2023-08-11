#include<iostream>
using namespace std;

int main(){
	int angka, umur;
	string gender, status, kegiatan;
	
	cout<<"Pilih salah satu angka yang sesuai (1/2)"<<endl;
	cout<<"1. LAKI-LAKI"<<endl;
	cout<<"2. PEREMPUAN"<<endl;
	cout<<"\nPilih angka \t\t= ";
	cin>>angka;
	
	cout<<"Masukkan umur anda \t= ";
	cin>>umur;
	cout<<endl;
	
	if (angka == 1){
		gender = "Laki-laki";
		if (umur >= 27){
			status = "Sudah waktunya";
			kegiatan = "cari jodoh";
		} else if (umur < 27){
			status = "Belum waktunya";
			kegiatan = "tingkatkan kualitas diri";
		}
	} else if (angka == 2){
		gender = "Perempuan";
		if (umur >= 25){
			status = "Sudah waktunya";
			kegiatan = "cari jodoh";
		} else if (umur < 27){
			status = "Belum waktunya";
			kegiatan = "tingkatkan kualitas diri";
		}
	} else {
		gender = "anonim";
		status = "anonim";
		kegiatan = "anonim";
	}
	
	cout<<"-----------------------------------------------------------------"<<endl;
	cout<<"Anda adalah seorang "<<gender<<" berusia "<<umur<<" tahun "<<endl;
	cout<<status<<" anda menikah!!!"<<endl;
	cout<<"Silahkan "<<kegiatan<<" !!!"<<endl;
	
	
}

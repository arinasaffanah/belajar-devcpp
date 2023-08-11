#include<iostream>
using namespace std;

int main(){
	string nama[4], skor[4];
	float nilai_tugas[4], nilai_uts[4], nilai_uas[4], nr[4];
	int hasil[4], pilih[4], jumlah_array[4];
		
	cout<<"=========================="<<endl;
	cout<<"# PROGRAM C++ SWITCH CASE"<<endl;
	cout<<"==========================\n"<<endl;
	
	for(int a=1; a<=4; a++){
	cout<<a<<". Nama \t\t\t= ";
	cin>>nama[a];
	
	cout<<"   Masukkan nilai tugas \t= ";
	cin>>nilai_tugas[a];
	
	cout<<"   Masukkan nilai UTS \t\t= ";
	cin>>nilai_uts[a];
	
	cout<<"   Masukkan nilai UAS \t\t= ";
	cin>>nilai_uas[a];
	
	nr[a] = (nilai_tugas[a] + nilai_uts[a] + nilai_uas[a])/3;
	cout<<"==============================================="<<endl;
	cout<<endl;

	
	if (nr[a] >= 90){
		hasil[a] = 1;
	} else if (nr[a] >= 70){
		hasil[a] = 2;
	} else if (nr[a] >= 60){
		hasil[a] = 3;
	} else if (nr[a] >= 50){
		hasil[a] = 4;
	} else {
		
	}
}
	
	cout<<"-----------------------------------------------"<<endl;
	
	
	
	
	for(int a=1; a<=4; a++){
		
	cout<<"\nPilih mahasiswa 1/2/3/4 = ";
	cin>>nama[a];
		
	cout<<"\nHallo "<<nama[a]<<"!!!"<<endl;
	cout<<"Nilai rata-rata anda \t= "<<nr[a]<<endl;

	switch (hasil[a]){
		case 1 :
			cout<<"Skor anda \t\t= A"<<endl;
			cout<<"SELAMAT!!! Anda adalah mahasiswa THE BEST!!!"<<endl;
			cout<<"==============================================="<<endl;
			break;
		case 2 :
			cout<<"Skor anda \t\t= B"<<endl;
			cout<<"Harus lebih baik lagi!!!"<<endl;
			cout<<"==============================================="<<endl;
			break;
		case 3 :
			cout<<"Skor anda \t\t= C"<<endl;
			cout<<"Perbanyak belajar!!!"<<endl;
			cout<<"==============================================="<<endl;
			break;
		case 4 :
			cout<<"Skor anda \t\t\= D"<<endl;
			cout<<"Jangan keseringan main!!!"<<endl;
			cout<<"==============================================="<<endl;
			break;
		default :
			cout<<"Skor anda  \t\t= E "<<endl;
			cout<<"MAAF! ANDA TIDAK LULUS."<<endl;
			cout<<"==============================================="<<endl;
	}
}	
				
	
}

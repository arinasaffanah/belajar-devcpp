#include<iostream>
using namespace std;

int main(){
	string nama[4];
	float nilai_tugas[4], nilai_uts[4], nilai_uas[4], nr[4];
	int hasil;
		
	cout<<"=========================="<<endl;
	cout<<"# PROGRAM C++ SWITCH CASE"<<endl;
	cout<<"=========================="<<endl;
	
	for(int a=0; a<4; a++){
	cout<<"\nNama \t\t\t= ";
	cin>>nama[a];
	
	cout<<"Masukkan nilai tugas \t= ";
	cin>>nilai_tugas[a];
	
	cout<<"Masukkan nilai UTS \t= ";
	cin>>nilai_uts[a];
	
	cout<<"Masukkan nilai UAS \t= ";
	cin>>nilai_uas[a];
	
	nr[a] = (nilai_tugas[a] + nilai_uts[a] + nilai_uas[a])/3;
	cout<<"==============================================="<<endl;
	cout<<"Nilai rata-rata anda \t= "<<nr[a]<<endl;
	
	cout<<"-----------------------------------------------"<<endl;
	cout<<"\nHallo "<<nama[a]<<"!!!"<<endl;
	cout<<"Nilai anda \t\t= "<<nr[a]<<endl;
 
 
	if (nr[a] >= 90){
		hasil = 1;
		cout<<"skor \t\t\t= A"<<endl;
	} else if (nr[a] >= 70){
		hasil = 2;
		cout<<"skor \t\t\t= B"<<endl;
	} else if (nr[a] >= 60){
		hasil = 3;
		cout<<"skor \t\t\t= C"<<endl;
	} else if (nr[a] >= 50){
		hasil = 4;
		cout<<"skor \t\t\t= D"<<endl;
	} else {
		cout<<"skor \t\t\t= E"<<endl;
	}
	
	cout<<"-----------------------------------------------"<<endl;
	
	switch (hasil){
		case 1 :
			cout<<"SELAMAT!!! Anda adalah mahasiswa THE BEST!!!"<<endl;
			break;
		case 2 :
			cout<<"Harus lebih baik lagi!!!"<<endl;
			break;
		case 3 :
			cout<<"Perbanyak belajar!!!"<<endl;
			break;
		case 4 :
			cout<<"Jangan keseringan main!!!"<<endl;
			break;
		default :
			cout<<"Maaf, anda tidak dapat mengakses nilai anda"<<endl;
	}
	
	cout<<"==============================================="<<endl;
}
	

	cout<<"==============================================="<<endl;
}

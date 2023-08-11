#include<iostream>
using namespace std;

int main(){
	string nama[5];
	float nilai_tugas[4], nilai_uts[4], nilai_uas[4], nr[4];
	int hasil[4];
	
	cout<<"=========================="<<endl;
	cout<<"# PROGRAM C++ SWITCH CASE"<<endl;
	cout<<"=========================="<<endl;
	
	
	
	for(int a=1; a<5; a++){
	cout<<endl;
	cout<<endl;
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
	cout<<"   Nilai rata-rata anda \t= "<<nr[a]<<endl;
	
	cout<<"-----------------------------------------------"<<endl;
	cout<<"\n   Hallo "<<nama[a]<<"!!!"<<endl;
	cout<<"   Nilai anda \t\t\t= "<<nr[a]<<endl;
	
	
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
	
	switch (hasil[a]){
		case 1 :
			cout<<"   skor \t\t\t= A"<<endl;
			cout<<"   ~~SELAMAT!!! Anda adalah mahasiswa THE BEST!!!~~"<<endl;
			break;
		case 2 :
			cout<<"   skor \t\t\t= B"<<endl;
			cout<<"   ~~Harus lebih baik lagi!!!~~"<<endl;
			break;
		case 3 :
			cout<<"   skor \t\t\t= C"<<endl;
			cout<<"   ~~Perbanyak belajar!!!~~"<<endl;
			break;
		case 4 :
			cout<<"   skor \t\t\t= D"<<endl;
			cout<<"   ~~Jangan keseringan main!!!~~"<<endl;
			break;
		default :
			cout<<"   skor \t\t\t= E"<<endl;
			cout<<"   ~~MAAF! ANDA TIDAK LULUS~~"<<endl;
	}
		cout<<"-----------------------------------------------"<<endl;
}

}

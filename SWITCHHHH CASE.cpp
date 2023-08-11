#include<iostream>
using namespace std;

int main(){
	string nama;
	float nilai_tugas, nilai_uts, nilai_uas, nr;
	int hasil;
	
	cout<<"=========================="<<endl;
	cout<<"# PROGRAM C++ SWITCH CASE"<<endl;
	cout<<"=========================="<<endl;
	
	cout<<"\nNama \t\t\t= ";
	getline(cin, nama);
	
	cout<<"Masukkan nilai tugas \t= ";
	cin>>nilai_tugas;
	
	cout<<"Masukkan nilai UTS \t= ";
	cin>>nilai_uts;
	
	cout<<"Masukkan nilai UAS \t= ";
	cin>>nilai_uas;
	
	nr = (nilai_tugas + nilai_uts + nilai_uas)/3;
	cout<<"==============================================="<<endl;
	cout<<"Nilai rata-rata anda \t= "<<nr<<endl;
	
	cout<<"-----------------------------------------------"<<endl;
	cout<<"\nHallo "<<nama<<"!!!"<<endl;
	cout<<"Nilai anda \t\t= "<<nr<<endl;
	
	
	if (nr >= 90){
		hasil = 1;
		cout<<"skor \t\t\t= A"<<endl;
	} else if (nr >= 70){
		hasil = 2;
		cout<<"skor \t\t\t= B"<<endl;
	} else if (nr >= 60){
		hasil = 3;
		cout<<"skor \t\t\t= C"<<endl;
	} else if (nr >= 50){
		hasil = 4;
		cout<<"skor \t\t\t= D"<<endl;
	} else {
		cout<<"skor \t\t\t= E"<<endl;
	}
	
	cout<<"-----------------------------------------------"<<endl;
	
	switch (hasil){
		case 1 :
			cout<<"Pertahankan nilainya yaaa!!!"<<endl;
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
	
	cout<<"-----------------------------------------------"<<endl;
}

#include<iostream>
using namespace std;

int main(){
	string nama;
	float nilai_tugas, nilai_uts, nilai_uas, nr;
	
	
	cout<<"Nama \t\t\t= ";
	cin>>nama;
	
	cout<<"Masukkan nilai tugas \t= ";
	cin>>nilai_tugas;
	
	cout<<"Masukkan nilai UTS \t= ";
	cin>>nilai_uts;
	
	cout<<"Masukkan nilai UAS \t= ";
	cin>>nilai_uas;
	
	nr = (nilai_tugas + nilai_uts + nilai_uas)/3;
	cout<<"\nNilai rata-rata anda \t= "<<nr<<endl;
	
	cout<<"\nHallo "<<nama<<endl;
	cout<<"Nilai anda = "<<nr<<endl;
	
	if (nr >= 90){
		cout<<"skor = A";
	} else if (nr >= 70){
		cout<<"skor = B";
	} else if (nr >= 60){
		cout<<"skor = C";
	} else if (nr >= 50){
		cout<<"skor = D";
	} else {
		cout<<"skor = E";
	}
	
	/*switch (nr){
		case '>= 90' :
			cout<<"Pertahankan!!!"<<endl;
		case '>= 70' :
			cout<<"Harus lebih baik lagi"<<endl;
		case '>= 60' :
			cout<<"Perbanyak belajar!!!"<<endl;
		case '>= 50' :
			cout<<"Jangan keseringan main"<<endl;
		default :
			cout<<"Maaf, anda tidak dapat mengakses nilai anda"<<endl;
	}
	
}
	

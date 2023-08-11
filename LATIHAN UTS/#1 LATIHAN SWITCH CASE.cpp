#include<iostream>
using namespace std;

int main(){
	string nama[4];
	double tugas[4], uts[4], uas[4], total[4], nr[4];
	int hasil[4];
	
	cout<<"======================="<<endl;
	cout<<"#1 LATIHAN SWITCH CASE"<<endl;
	cout<<"======================="<<endl;
	
	for(int a = 0 ; a < 4 ; a++){
	
		cout<<"----------------------------------------"<<endl;	
		cout<<a+1<<". Nama \t\t= ";
		cin.ignore();
		getline(cin, nama[a]);
		cout<<"   Nilai Tugas \t\t= ";
		cin>>tugas[a];
		cout<<"   Nilai UTS \t\t= ";
		cin>>uts[a];
		cout<<"   Nilai UAS \t\t= ";
		cin>>uas[a];
		cout<<endl;
		
		nr[a] = (tugas[a] + uts[a] + uas[a])/3;
		
		if(nr[a] >= 90){
			hasil[a] = 1;
		} else if(nr[a] >= 80){
			hasil[a] = 2;
		} if(nr[a] >= 70){
			hasil[a] = 3;
		} if(nr[a] >= 60){
			hasil[a] = 4;
		} else {
			
		}
	}
		
		for(int a = 0 ; a < 4 ; a++){
		
		cout<<"\nHallo "<<nama[a]<<endl;
		cout<<"Nilai Tugas anda\t\t= "<<tugas[a]<<endl;
		cout<<"Nilai UTS anda \t\t= "<<uts[a]<<endl;
		cout<<"Nilai UAS anda \t\t= "<<uas[a]<<endl;
		cout<<"Nilai rata-rata anda \t\t= "<<nr[a]<<endl;
			
		switch(hasil[a]){
			case 1 :
				cout<<"==============================================="<<endl;
				cout<<"Skor anda \t\t= A"<<endl;
				cout<<"~~SELAMAT!!! ANDA ADALAH MAHASISWA/I HEBAT~~"<<endl;
				break;
			case 2 :
				cout<<"==============================================="<<endl;
				cout<<"Skor anda \t\t= B"<<endl;
				cout<<"~~TINGKATKAN LAGI NILAINYA YA!!! SEMANGAT!!!~~"<<endl;
				break;
			case 3 :
				cout<<"==============================================="<<endl;
				cout<<"Skor anda \t\t= A"<<endl;
				cout<<"~~JANGAN PUTUS ASA!!!~~"<<endl;
				break;
			case 4 :
				cout<<"==============================================="<<endl;
				cout<<"Skor anda \t\t= A"<<endl;
				cout<<"~~BELAJAR YANG BENER1!!!~~"<<endl;
				break;
			default :
				cout<<"==============================================="<<endl;
				cout<<"Skor anda \t\t= A"<<endl;
				cout<<"~~JANGAN MALAS-MALASAN BELAJARNYA!!!~~"<<endl;
				break;
				
		}
	}
		
	
}

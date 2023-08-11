#include<iostream>
using namespace std;

int main(){
	string nama[9] ={"Zainab", "Yunarso", "Jojon", "Tinatun", "Qinanti", "Mintarso", "Janah", "Jonathan", "Junaidi"};
	string datacari = "na";
	//char hasil;
	char tiga = 'n';
	char empat = 'a';
	//int length = sizeof(nama)/sizeof(*nama);
	
	
	cout<<"Index : ";
	for(int a = 0 ; a < 9 ; a++){
		cout<<a<<" \t";
	}
	cout<<"\nNama  : ";
	for(int b = 0 ; b < 9 ; b++){
	cout<<nama[b]<<" ";
	}
	
	cout<<"\n\nData sebelum di-sort : "<<endl;
	cout<<"Nama = ";
	for(int b = 0 ; b < 9 ; b++){
	cout<<nama[b]<<" ";
	}
	cout<<
	
	cout<<"\n\nData setelah di-sort : "<<endl;
	cout<<"Nama = ";
	//for(int b = 0 ; b < 9 ; b++){
	cout<<" "<<nama[6]<<" "<<nama[8]<<" "<<nama[2]<<" "<<nama[7]<<" "<<nama[5]<<" "<<nama[4]<<" "<<nama[3]<<" "<<nama[1]<<" "<<nama[0]<<" "<<endl;
	
}

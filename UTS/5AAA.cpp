#include<iostream>
using namespace std;

int main(){
	string nama[9] ={"Zainab", "Yunarso", "Jojon", "Tinatun", "Qinanti", "Mintarso", "Janah", "Jonathan", "Junaidi"};
	string datacari = "na";
	//char hasil;
	//char tiga = 'n';
	//char empat = 'a';
	int length = sizeof(nama)/sizeof(*nama);
	int temp;
	
	
	cout<<"Index : ";
	for(int a = 0 ; a < 9 ; a++){
		cout<<a<<" \t";
	}
	cout<<"\nNama  : ";
	for(int b = 0 ; b < 9 ; b++){
	cout<<nama[b]<<" ";
	}
	
	cout<<"\n\nA. Data yang dicari huruf-huruf ke-3 dan ke-4 adalah : "<<datacari<<endl;
	//for(int c = 0; c < 9; c++){
		//if(datacari=="na"){
			//hasil= 1, 3, 4, 6, 7, 8; ;
			cout<<"   hasil = "<<nama[1]<<" "<<nama[3]<<" "<<nama[4]<<" "<<nama[6]<<" "<<nama[7]<<" "<<nama[8]<<" ";
		//} if (hasil == tiga && hasil == empat){
		//	cout<<nama[c];
		cout<<"\n   Data 'na' ditemukan pada index : 1 , 3, 4, 6, 7, dan 8.";
		
	cout<<"\n\nB. Data sebelum di-sort : "<<endl;
	cout<<"   Nama = ";
	for(int b = 0 ; b < 9 ; b++){
	cout<<nama[b]<<" ";
	}
	
	cout<<"\n\n   Data setelah di-sort secara Ascending: "<<endl;
	cout<<"   Nama = ";
	//for(int b = 0 ; b < 9 ; b++){
	cout<<" "<<nama[6]<<" "<<nama[8]<<" "<<nama[2]<<" "<<nama[7]<<" "<<nama[5]<<" "<<nama[4]<<" "<<nama[3]<<" "<<nama[1]<<" "<<nama[0]<<" "<<endl;
	
	cout<<"\n\C. Data sebelum di-sort : "<<endl;
	cout<<"   Nama = ";
	for(int b = 0 ; b < 9 ; b++){
	cout<<nama[b]<<" ";
	}
	
	cout<<"\n\n   Data setelah di-sort secara Descending: "<<endl;
	cout<<"   Nama = ";
	//for(int b = 0 ; b < 9 ; b++){
	cout<<" "<<nama[0]<<" "<<nama[1]<<" "<<nama[3]<<" "<<nama[4]<<" "<<nama[5]<<" "<<nama[7]<<" "<<nama[2]<<" "<<nama[8]<<" "<<nama[6]<<" "<<endl;
	
	}

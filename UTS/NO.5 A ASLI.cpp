#include<iostream>
using namespace std;

int main(){
	string nama[9] ={"Zainab", "Yunarso", "Jojon", "Tinatun", "Qinanti", "Mintarso", "Janah", "Jonathan", "Junaidi"};
	string datacari = "na";
	char hasil;
	char tiga = 'n';
	char empat = 'a';
	int length = sizeof(nama)/sizeof(*nama);
	int idx[], Found=0
	cout<<"Index : ";
	for(int a = 0 ; a < 9 ; a++){
		cout<<a<<" \t";
	}
	cout<<"\nNama  : ";
	for(int b = 0 ; b < 9 ; b++){
	cout<<nama[b]<<" ";
	}
	
	cout<<"\n\nData yang dicari huruf-huruf ke-3 dan ke-4 adalah = "<<datacari<<endl;

 	cout<<"Data yang dicari Huruf huruf ke 3 dan 4 adalah : \n";
 	for (int i = 0; i < n; i++) {
 	idx[n], nFound=0;
 	if(nama[i].substr(2, 2)=="na"){
 	idx[nFound++] = i;
 	cout<<nama[i]<<" ";
	}
}

#include<iostream>
using namespace std;

int main(){
	//SORTING ARRAY
	int length;
	cout<<"Masukkan jumlah index = ";
	cin>>length;
	int nilai[length];
	int temp;
	
	//untuk looping inputdata
	for(int a = 1 ; a <= length ; a++){
		cout<<"Nilai index ke-"<<a<<" = ";
		cin>>nilai[a];
	}
	
	//proses looping sorting
	for(int a = 1; a < length ; a++){
		for(int b = 1 ; b < length-a ; b++){
			if(nilai[b] > nilai[b+1]){
				temp = nilai[b];
				nilai[b] = nilai[b+1];
				nilai[b+1] = temp;
			}	
		}
	}
	
	//hasil loopingan
	cout<<"Hasil sorting = "<<endl;
	for(int c = 1 ; c < length; c++){
		cout<<" "<<nilai[c]<<endl;
	}
	
}

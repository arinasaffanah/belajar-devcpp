#include<iostream>
using namespace std;

int main(){
	int jumlah_index, maks, min, nilai;
	
	cout<<"Masukkan jumlah data = ";
	cin>>jumlah_index;
	
	for(int a = 1 ; a <= jumlah_index; a++){
		cout<<"Nilai ke-"<<a<<" = ";
		cin>>nilai;
		
		if(a == 1){
			min = nilai;
			maks = nilai;
		} else {
			if (nilai > maks){
			maks = nilai;
		}
			if (nilai < min){
			min = nilai;
		}
	}
		
	}
	
	cout<<"\nNilai maksimum = "<<maks<<endl;
	cout<<"Nilai manimum  = "<<min<<endl;
	
}

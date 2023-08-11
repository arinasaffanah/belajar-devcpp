#include<iostream>
using namespace std;

int main(){
	//MEMBUAT PROGRAM RATA-RATA ARRAY
	
	int jumlah_index;
	cout<<"Masukkan jumlah data yang diinginkan = ";
	cin>>jumlah_index;
	
	float nilai[jumlah_index], total, rata_rata;
	
	for(int a = 1 ; a <= jumlah_index; a++){
		cout<<"Nilai data ke-"<<a<<" \t= ";
		cin>>nilai[a];
		
		total = total + nilai[a];
		
	}
	
	cout<<"Total nilai \t\t= "<<total<<endl;
	rata_rata = total/jumlah_index;
	cout<<"Rata-rata nilai \t= "<<rata_rata;
}

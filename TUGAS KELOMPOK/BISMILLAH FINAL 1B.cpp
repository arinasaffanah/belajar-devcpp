#include<iostream>
using namespace std;

int main(){
	//MEMBUAT PROGRAM DERET FAKTORIAL
	
	cout<<"=========================================="<<endl;	
	cout<<"## Program C++ Deret Bilangan Faktorial ##"<<endl;
	cout<<"-------------OLEH KELOMPOK 10-------------"<<endl;
	cout<<"=========================================="<<endl;
	cout<<endl;
	
	int n, i;
	long double hasil;
	
	cout<<"Masukkan bilangan yang ingin difaktorialkan : ";
	cin >>n;
	cout<<endl;
	cout<<n<<"! = ";

	hasil = 1;
	for ( i = n ; i >= 1; i--){
	hasil = hasil*i;
	//untuk menampilkan angka
	cout<< i;
	if(i != 1){
		cout<<" * ";
	}	
 	}

 	cout<<" = "<<hasil<<endl;
 	cout<<"Hasil dari "<<n<<" faktorial adalah "<<hasil<<endl;
	//PROGRAM DERET FAKTORIAL SELESAI
	
	cout<<"\n\n======================================"<<endl;	
	cout<<"## Program C++ Deret Bilangan Prima ##"<<endl;
	cout<<"-----------OLEH KELOMPOK 10-----------"<<endl;
	cout<<"======================================"<<endl;
	cout<<endl;
	
	int batas, bil;
	
	cout<<"Masukkan batas bilangan prima yang diinginkan : ";
	cin>>batas;
	cout<<endl;
	cout<<"Deret bilangan prima : "<<endl;
	
	for(int a = 1 ; a <= batas ; a++){
		bil = 0;
			for(int b = 1 ; b <= a; b++){
			if(a % b == 0){
			bil = bil + 1;
			}
		}
			if(bil == 2){
			cout<<a<<" ";
		}
	}
	cout<<endl;
	//PROGRAM DERET PRIMA SELESAI
	return 0;
}

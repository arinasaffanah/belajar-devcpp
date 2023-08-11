#include<iostream>
using namespace std;

int faktorial(int x){
	if (x <= 1){
		cout<<x<<endl;
		return x;
	} else {
		cout<<x<<" x ";
		return x * faktorial (x-1);
	}
}

int main(){
	//MEMBUAT PROGRAM DERET FAKTORIAL
	
	cout<<"=========================================="<<endl;	
	cout<<"## Program C++ Deret Bilangan Faktorial ##"<<endl;
	cout<<"-------------OLEH KELOMPOK 10-------------"<<endl;
	cout<<"=========================================="<<endl;
	cout<<endl;
	
	int n;
	
	cout<<"Masukkan bilangan yang ingin difaktorialkan : ";
	cin>>n;
	cout<<endl;
	cout<<n<<"! = ";
	
	cout<<n<<"! = "<<faktorial(n)<<endl;
	cout<<"\nHasil dari "<<n<<" Faktorial adalah "<<faktorial(n)<<endl;
	//PROGRAM DERET FAKTORIAL SELESAI
	
	cout<<"\n\n======================================"<<endl;	
	cout<<"## Program C++ Deret Bilangan Prima ##"<<endl;
	cout<<"-----------OLEH KELOMPOK 10-----------"<<endl;
	cout<<"======================================"<<endl;
	cout<<endl;
	
	int batas, bil;
	
	cout<<"Masukkan batas bilangan prima yang diinginkan : ";
	cin>>batas;
	cout<<"Deret bilangan prima : "<<endl;
	
	for(int a = 1 ; a <= batas ; a++){
		bil = 0;
			for(int b = 1 ; b <= a; b++){
			if(a % b == 0){
			bil = bil + 1;
			}
		}
			if(bil==2){
			cout<<a;
		}
		if(a != batas){
		cout<<", ";
	}	
	}
	return 0;
}

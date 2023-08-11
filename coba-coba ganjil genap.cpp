#include<iostream>
using namespace std;

int main(){
	int a;
	bool hasil;
	
	cout<<"Masukkan angka = ";
	cin>>a;
	
	hasil = a % 2;
	
	if(hasil == 1){
		cout<<"Angka "<<a<<" adalah bilangan Ganjil"<<endl;
	} else{
		cout<<"Angka "<<a<<" adalah bilangan Genap"<<endl;
	}
	
cout<<"\nFinish";
}

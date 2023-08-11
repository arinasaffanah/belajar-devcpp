#include<iostream>
using namespace std;

int main(){
	//operator sisa bagi 
	int a, hasil;
	
	cout<<"masukkan bilangan : ";
	cin>>a;
	
	hasil = a % 2;
	string jenis = hasil == 1 ? "Ganjil" : "Genap";
	
	cout<<"bilangan "<<a<<" adalah bilangan "<<jenis;
}

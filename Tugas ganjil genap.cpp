#include<iostream>
using namespace std;

int main(){
	
	cout << "=======================================================" << endl;	
	cout << "## Program C++ Menentukan Bilangan Genap dan Ganjil ##" << endl;
	cout << "=======================================================" << endl;
	cout << endl;

	
	int a;
	cout<<"Masukkan angka = ";
	cin>>a;
	
	if (a % 2 == 1){
		cout<<"Angka "<<a<<" adalah bilangan GANJIL"<<endl;
	} else {
		cout<<"Angka "<<a<<" adalah bilangan GENAP"<<endl;
	}
}

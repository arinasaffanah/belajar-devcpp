#include<iostream>
using namespace std;

int main(){
	//operator kondisional
	//menentukan lulus atau tidak lulus 
	
	int a,b;
	bool hasil;
	
	a = 8;
	b = 7;
	
	hasil = a > b;
	
	string kondisi = hasil == 1 ? "Lulus":"Tidak lulus";
	
	cout<<"Hasil = "<<kondisi;
}

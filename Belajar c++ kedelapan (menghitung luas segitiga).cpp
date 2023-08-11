#include<iostream>
using namespace std;

int main(){
	/*Menghitung Luas Segitiga
	
	L = (a x t)/2
	
	L : Luas
	a : alas
	t : tinggi
	
	*/
	
	double a, t, luas;
	
	cout<<"Menghitung Luas Segitiga \n================================================================"<<endl;
	cout<<"Masukkan alas \t\t= ";
	cin>>a;
	cout<<"Masukkan tinggi \t= ";
	cin>>t;
	
	luas = (a*t)/2;
	
	cout<<"Nilai alas \t= "<<a<<" cm "<<endl;
	cout<<"Nilai tinggi \t= "<<t<<" cm "<<endl;
	cout<<"L = (a x t)/2"<<endl;
	cout<<"L = ("<<a<<" x "<<t<<")/2 "<<endl;
	cout<<"L = "<<luas<<" cm "<<endl;
	cout<<"Luas dari segitiga tersebut adalah "<<luas<<" cm "<<endl;
}

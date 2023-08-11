#include<iostream>
using namespace std;

int main(){
	
	/*menghitung luas lingkaran
	
	L = phi x r x r
	
	l = luas
	phi adalah nilai kontstanta
	phi = 3.14
	r = jari-jari lingkaran
	
	*/
	
	const float phi = 3.14;
	float luas, r, a;
	
	cout<<"Menghitung luas lingkaran \n============================================================"<<endl;
	cout<<"masukkan nilai jari-jari lingkaran = ";
	cin>>r;

	
	luas = phi * r * r;
	a = r*r;
	
	cout<<"\nphi \t\t\t= "<<phi<<endl;
	cout<<"jari-jari lingkaran \t= "<<r<<" cm "<<endl;
	cout<<"============================================================"<<endl;
	
	cout<<"\nL = phi x (r x r)"<<endl;
	cout<<"L = "<<phi<<" x "<<"("<<r<<" x "<<r<<" )"<<endl;
	cout<<"L = "<<phi<<" x "<<a<<endl;
	cout<<"L = "<<luas<<endl;
	
	cout<<"Maka, luas lingkaran tersebut adalah "<<luas<<" cm2";
	
	
	
	
}

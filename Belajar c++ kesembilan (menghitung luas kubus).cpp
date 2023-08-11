#include<iostream>
using namespace std;

int main(){
	/*menghitung luas kubus 
	
	l = 6 x s x s
	
	l = luas permukaan
	s = sisi
	
	a = sisi x sisi
	
	*/
	
	float luas, s, a;

	
	
	cout<<"Menghitung luas permukaan kubus \n============================================================"<<endl;
	cout<<"Masukkan panjang sisi \t: ";
	cin>>s;
	
		a = s*s;
	luas = 6*s*s;
	
	cout<<"Panjang sisi adalah \t: "<<s<<" cm"<<endl;
	cout<<"L = 6 x (s x s)"<<endl;
	cout<<"L = 6 x "<<"("<<s<<" x "<<s<<") "<<endl;
	cout<<"L = 6 x "<<a<<endl;
	cout<<"L = "<<luas<<" cm "<<endl;
	cout<<"Maka, luas permukaan dari kubus tersebut adalah "<<luas<<" cm. "<<endl;
	
	
	
	
	


}

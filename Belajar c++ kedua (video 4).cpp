#include<iostream>
using namespace std;

int main(){
	string aktivitas;
	string tempat;
	
	cout<<"apa aktivitas anda? \t: ";
	getline(cin, aktivitas);
	
	cout<<"dimana anda "<<aktivitas<< "? \t: ";
	getline(cin,tempat);
		
	cout<<"saya sedang "<<aktivitas<<" di "<<tempat;
}

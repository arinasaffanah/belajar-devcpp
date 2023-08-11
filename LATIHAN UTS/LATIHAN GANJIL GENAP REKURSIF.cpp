#include<iostream>
using namespace std;


int main(){
	int n;
	
/*	cout<<"Masukkan angka = ";
	cin>>n;
	if(n%2==0){
		cout<<n<<" adalah bilangan genap ";
	} else{
		cout<<n<<" adalah bilangan ganjil";
	}*/
	cout<<"-----------------------------------------------"<<endl;
	cout<<"Masukkan angka = ";
	cin>>n;
	cout<<"Deret bilangan genap : "<<endl;
	for(int a=1; a<=n; a++){
		
	if(a%2==0){
		cout<<a;
		if(a != n && a!= n-1){
			cout<<", ";
		}
	} /*else if (a%2==1){
		cout<<a;
		if(a!=n){
			cout<<", ";
		}
	}*/
	}
	cout<<endl;
	cout<<"\n\n-----------------------------------------------"<<endl;
	cout<<"Masukkan angka = ";
	cin>>n;
	cout<<"Deret bilangan ganjil : "<<endl;
	for(int a=1; a<=n; a++){
		if(a%2==1){
			cout<<a;
			if(a != n && a!=n-1){
				cout<<", ";
			}
		}
	}
	cout<<endl;
	cout<<"\n\n-----------------------------------------------"<<endl;
	
	
	return 0;
}



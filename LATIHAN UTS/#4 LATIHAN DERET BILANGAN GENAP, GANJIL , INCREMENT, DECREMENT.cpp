#include<iostream>
using namespace std;

int main(){
	
	cout<<"========================================"<<endl;
	cout<<"#3 LATIHAN DERET BILANGAN GENAP & GANJIL"<<endl;
	cout<<"========================================"<<endl;
	
	int n;
	
	cout<<"\n-----------------------------------------------"<<endl;
	cout<<"Masukkan batas deret bilangan genap = ";
	cin>>n;
	cout<<"\nDeret bilangan genap : "<<endl;
	
	for(int a = 1 ; a <= n ; a++){
			if(a % 2 == 0){
				cout<<a;
				if(a != n && a != n-1){
					cout<<", ";
				}
			} 	
	}
	

	cout<<"\n\n\n-----------------------------------------------"<<endl;
	cout<<"Masukkan batas deret bilangan ganjil = ";
	cin>>n;
	cout<<"\nDeret bilangan ganjil : "<<endl;
	for(int a = 1 ; a <= n ; a++){
			if(a % 2 == 1){
			
				cout<<a;
				if(a != n && a != n-1){
					cout<<", ";
				}
			}
	}
	
	
	cout<<"\n\n==============================================="<<endl;
	cout<<"#3 LATIHAN DERET BILANGAN INCREMETN & DECREMENT"<<endl;
	cout<<"==============================================="<<endl;
	
	cout<<"Masukkan batas bilangan increment = ";
	cin>>n;
	
	for(int x=1 ; x<=n ; x++){
		cout<<x;
		if(x != n){
		cout<<", ";
		}
	}
	
	cout<<endl;
	
	cout<<"\nMasukkan awal mulai bilangan decrement yang diinginkan = ";
	cin>>n;
	
	for(int x=n ; x>=1 ; x--){
		cout<<x;
		if(x != 1){
		cout<<", ";
		}
	}
	cout<<endl;
	return 0;
}

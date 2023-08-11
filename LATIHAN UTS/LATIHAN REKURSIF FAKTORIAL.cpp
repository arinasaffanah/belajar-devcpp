#include<iostream>
using namespace std;

int faktorial(int x){
	//batas dulu
	//proses pengulangan (diapakan)
	//hanya menggunakan if
	
	if(x <= 1){
		cout<<x<<" ";
		return x;
	} else {
		cout<<x<<" x ";
		return x * faktorial (x-1);
	}
	
}

int main(){
	int n;
	
	cout<<"Masukkan bilangan yang ingin difaktorialkan = ";
	cin>>n;
	cout<<endl;
	cout<<n<<"! = "<<faktorial(n);

	
	
	
}

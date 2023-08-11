#include<iostream>
using namespace std;

int main(){
	int n, hasil, i;

cout << "==========================================" << endl;	
cout << "## Program C++ Deret Bilangan Faktorial ##" << endl;
cout << "==========================================" << endl;
cout << endl;

cout << "Masukkan angka : ";
cin >>n;

cout<<n<<"! = ";

hasil = 1;
for ( i = n ; i >= 1; i--){
	hasil = hasil*i;
	
	//untuk menampilkan angka
	cout<< i;
	if(i != 1){
		cout<<" * ";
	}
	
 	}

 	cout<<" = "<<hasil<<endl;
 	cout<<"\nHasil dari "<<n<<" faktorial adalah "<<hasil<<endl;
		
}
	

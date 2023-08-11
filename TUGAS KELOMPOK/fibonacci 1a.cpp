#include<iostream>
using namespace std;

int main(){
	int n, f1 = 0, f2 = 1, berikutnya;

	cout<<"=================================="<<endl;	
	cout<<"## Program C++ Deret Fibonacci ##"<<endl;
	cout<<"=================================="<<endl;
	cout<<endl;

	cout<<"Jumlah deret yang diinginkan : ";
	cin>>n;

	cout<<"Deret fibonacci = ";
	for(int i=1; i<=n; ++i){
	
		if (i == 1){
 		cout<<" "<<f1<<" ";
		continue;
 		}

 		if (i == 2){
		cout<<" "<<f2<<" ";
		continue;
	 	}
	 
	berikutnya = f1 + f2;
		f1 = f2;
		f2 = berikutnya;
		
		//mencetak deret bilangan fibonacci berikutnya
		cout<<berikutnya<<" ";
}
}

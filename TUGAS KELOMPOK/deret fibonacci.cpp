#include<iostream>
using namespace std;

int main(){
	int n, f1 = 0, f2 = 1, berikutnya;
	
	cout<<"Masukkan batas deret bilangan fibonacci = ";
	cin>>n;
	
	cout<<"Deret Fibonacci = ";
	for (int i = 1; i <= n; ++i){
		//mencetak dua deret bilangan fibonacci pertama.
		
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

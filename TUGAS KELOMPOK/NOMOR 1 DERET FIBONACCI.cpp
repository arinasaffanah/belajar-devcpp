#include<iostream>
using namespace std;

int main(){
	//rumus : n = f1+f2
	
	// n = jumlah deret
	// f1 = n-1
	// f2 = n-2
	int n;
	float rata_rata, total_deret;
	int f1 = 0;
	int f2 = 1;
	int berikutnya = 0;
	
	cout<<"============================"<<endl;
	cout<<"PROGRAM C++ DERET FIBONACCI"<<endl;
	cout<<"OLEH KELOMPOK 10 :D"<<endl;
	cout<<"============================"<<endl;
	
	cout<<"\nMasukkan jumlah deret yang diinginkan \t= ";
	cin>>n;
	cout<<"\nDeret fibonacci : "<<endl;
	
	cout<<f1<<", ";
	cout<<f2<<", ";
	total_deret += f2 + berikutnya;
	
	for(int a = 3; a <= n; a++){
	
		berikutnya = f1 + f2;
		f1 = f2;
		f2 = berikutnya;
		
		cout<<berikutnya<<" ";
		total_deret += berikutnya;
		if(a != n){
			cout<<", ";
		}
	}
	
	
	rata_rata = total_deret/n;
	cout<<endl;	
	cout<<"\n----------------------------------------------------"<<endl;
	cout<<"Total dari jumlah deret tersebut \t= "<<total_deret<<endl;
	cout<<"Rata-rata dari deret tersebut \t\t= "<<rata_rata<<endl;
	cout<<"----------------------------------------------------"<<endl;
	
	return 0;
	
}

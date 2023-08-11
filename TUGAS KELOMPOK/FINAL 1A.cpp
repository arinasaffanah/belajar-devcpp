#include<iostream>
using namespace std;

int main(){
	//MEMBUAT PROGRAM DERET FIBONACCI
	cout<<"========================"<<endl;
	cout<<"PROGRAM C++ DERET KUBIK"<<endl;
	cout<<"----OLEH KELOMPOK 10----"<<endl;
	cout<<"========================"<<endl;
	
  	/*
	1) input jumlah deret yang diinginkan
	2) suku -> yang jadi rumus kubik
  	3) cari rata-rata dan total rata-rata.
  	*/
	
	int jumlah_deret, suku, a;
	float rata_rata, total_deret = 0;
	
	cout<<"\nMasukkan jumlah deret yang diinginkan \t= ";
	cin>>jumlah_deret;
	cout<<endl;
	
	for(int a = 1; a <= jumlah_deret; a++){
		suku = a*a*a;
		cout<<suku;
		total_deret += suku; //total deret = total deret + suku. 
		if(a != jumlah_deret){
			cout<<", ";
		}
	}

	rata_rata = total_deret/jumlah_deret;

	cout<<endl;	
	cout<<"\n----------------------------------------------------"<<endl;
	cout<<"Total dari jumlah deret tersebut \t= "<<total_deret<<endl;
	cout<<"Rata-rata dari deret tersebut \t\t= "<<rata_rata<<endl;
	cout<<"----------------------------------------------------"<<endl;
	//PROGRAM DERET KUBIK SELESAI
	
	
	//MEMBUAT PROGRAM DERET FIBONACCI
	cout<<"\n\n============================"<<endl;
	cout<<"PROGRAM C++ DERET FIBONACCI"<<endl;
	cout<<"------OLEH KELOMPOK 10------"<<endl;
	cout<<"============================"<<endl;
	
	/*
	rumus : n = f1+f2
			n = jumlah deret
			f1 = n-1
			f2 = n-2
	*/
	
	int n;
	float rata2, total;
	int f1 = 0;
	int f2 = 1;
	int berikutnya = 0;
	
	
	cout<<"\nMasukkan jumlah deret yang diinginkan \t= ";
	cin>>n;
	cout<<"\nDeret fibonacci : "<<endl;
	
	cout<<f1<<", ";
	cout<<f2<<", ";
	total = + f1 + f2;
	
	for(int a = 3; a <= n; a++){
	
		berikutnya = f1 + f2;
		f1 = f2;
		f2 = berikutnya;
		
		cout<<berikutnya<<" ";
		total = total + berikutnya;
		if(a != n){
			cout<<", ";
		}
	}
	
	
	rata2 = total/n;
	cout<<endl;	
	cout<<"\n----------------------------------------------------"<<endl;
	cout<<"Total dari jumlah deret tersebut \t= "<<total<<endl;
	cout<<"Rata-rata dari deret tersebut \t\t= "<<rata2<<endl;
	cout<<"----------------------------------------------------"<<endl;
	//PROGRAM DERET FIBONACCI SELESAI
	return 0;
	
}

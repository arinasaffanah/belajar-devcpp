#include<iostream>
using namespace std;

int main(){
	// cari rata-rata dan total rata-rata.
	// input jumlah deret yang diinginkan
	// suku -> yang jadi rumus kubik
	
	int jumlah_deret, total_deret = 0, suku, a;
	float rata_rata;
	
	cout<<"========================"<<endl;
	cout<<"PROGRAM C++ DERET KUBIK"<<endl;
	cout<<"OLEH KELOMPOK 10 :D"<<endl;
	cout<<"========================"<<endl;
	
	
	cout<<"\nMasukkan jumlah deret yang diinginkan \t= ";
	cin>>jumlah_deret;
	cout<<endl;
	
	for(int a = 1; a <= jumlah_deret; a++){
		suku = a*a*a;
		cout<<suku;
		total_deret += suku; //t = t + suku. 
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
	
	
	
	
	
	return 0;
}

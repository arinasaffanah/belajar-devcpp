#include<iostream>
using namespace std;

int main(){
	float r;
	int jumlah_deret, i, t=0, suku;

	cout<<"==================================" << endl;	
	cout<<"## Program C++ Deret Kubik ##" << endl;
	cout<<"==================================" << endl;
	cout<<endl;
	
	cout<<"Jumlah deret yang diinginkan = ";
	cin>>jumlah_deret;
	cout<<endl;
	
	for(i=1; i <= jumlah_deret; i++){
	 suku = i*i*i;
	 cout<<suku<<"  ";
	 t += suku; 
	}
	
	
	r=t/jumlah_deret;
	
	
	cout<<endl;
	cout<<"\n========================";
	cout<<"\nTotal deret kubik \t= "<<t;
	cout<<"\nRata-rata deret kubik \t= "<<r;
	cout<< endl;
	return 0;
}

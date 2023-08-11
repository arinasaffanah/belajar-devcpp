#include <iostream>
using namespace std;
int main (){
	//MEMBUAT PROGRAM DERET BILANGAN GENAP
	
	cout<<"=================================================="<<endl;	
	cout<<" ## Program C++ DERET BILANGAN GENAP & GANJIL ## "<<endl;
	cout<<"-----------------OLEH KELOMPOK 10-----------------"<<endl;
	cout<<"=================================================="<<endl;
	cout<<endl;
	
	int batas_genap, batas_ganjil;
	
	cout<<"--------------------------------------------------"<<endl;
	cout<<"Masukkan batas deret genap yang diinginkan = ";
	cin>>batas_genap;
	cout<<"--------------------------------------------------"<<endl;
	cout<<endl;
	
	cout<<"Deret bilangan genap : "<<endl;
	
	
	for(int a = 1 ; a <= batas_genap ; a++){
		if (a % 2 == 0){
		cout<<a;
		if (a != batas_genap && a != (batas_genap - 1)){
			cout<<", ";
		}
		}	
	}
	cout<<endl;
	//PROGRAM DERET BILANGAN GENAP SELESAI
	
	//MEMBUAT PROGRAM DERET BILANGAN GANJIL
	cout<<"\n\n--------------------------------------------------"<<endl;
	cout<<"Masukkan batas deret ganjil yang diinginkan = ";
	cin>>batas_ganjil;
	cout<<"--------------------------------------------------"<<endl;
	cout<<endl;
	
	cout<<"Deret bilangan ganjil : "<<endl;
	
	
	for(int b = 1 ; b <= batas_ganjil ; b++){
		if (b % 2 == 1){
		cout<<b;
		if (b != batas_ganjil && b != (batas_ganjil - 1)){
			cout<<", ";
		}
		}	
	}
	cout<<"\n\n"<<endl;
	//PROGRAM DERET BILANGAN GENAP SELESAI
	
	return 0;
}

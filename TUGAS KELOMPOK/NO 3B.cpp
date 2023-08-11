#include <iostream>
using namespace std;
int main (){
	//MEMBUAT PROGRAM DERET BILANGAN INCREMENT (MENAIK)
	
	cout<<"======================================================="<<endl;	
	cout<<" ## Program C++ DERET BILANGAN INCREMENT & DECREMENT ## "<<endl;
	cout<<"-------------------OLEH KELOMPOK 10--------------------"<<endl;
	cout<<"======================================================="<<endl;
	cout<<endl;
	
	int batas_increment, batas_decrement;
	
	cout<<"-------------------------------------------------------"<<endl;
	cout<<"Masukkan batas deret increment diinginkan = ";
	cin>>batas_increment;
	cout<<"-------------------------------------------------------"<<endl;
	cout<<endl;
	
	cout<<"Deret bilangan increment (menaik) : "<<endl;
	
	
	for(int a = 1 ; a <= batas_increment ; a++){
		cout<<a;
		if (a != batas_increment){
			cout<<", ";
		}
	
	}
	cout<<endl;
	//PROGRAM DERET BILANGAN INCREMENT (MENAIK) SELESAI
	
	//MEMBUAT PROGRAM DERET BILANGAN DECREMENT (MENURUN)
	cout<<"\n\n-------------------------------------------------------------------------"<<endl;
	cout<<"Masukkan bilangan yang diinginkan untuk memulai deret decrement  = ";
	cin>>batas_decrement;
	cout<<"-------------------------------------------------------------------------"<<endl;
	cout<<endl;
	
	cout<<"Deret bilangan decrement (menurun) : "<<endl;
	
	
	for(int b = batas_decrement ; b >= 1  ; b--){
		cout<<b;
		if (b != 1){
			cout<<", ";
		}
			
	}
	cout<<"\n\n"<<endl;
	//PROGRAM DERET BILANGAN DECREMENT (MENURUN) SELESAI
	
	return 0;
}

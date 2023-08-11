#include<iostream>
using namespace std;

int main(){
	cout<<"============================="<<endl;
	cout<<"# QUIZ ALGORITMA PROGRAM C++ "<<endl;
	cout<<"---ARINA SAFFANAH ZAKIYYAH---"<<endl;
	cout<<"=============================\n"<<endl;
	
	string nama[4] = {"Arina", "Andita", "Reza", "Yoga"};
	int total_belanja[4] = {65000, 120000, 1000000, 35000};
	double diskon[4], total_bayar[4];
	for(int a = 0; a < 4; a++){
		
			
		cout<<"====================================="<<endl;
		cout<<a+1<<". Nama customer \t= "<<nama[a]<<endl;
		cout<<"   Total belanja \t= Rp."<<total_belanja[a]<<endl;
		
		if(total_belanja[a] >= 500000){
			diskon[a] = 0.5;
			cout<<"   Diskon\t\t= 50%"<<endl;
		} else if (total_belanja[a] >= 100000){
			diskon[a] = 0.1;
			cout<<"   Diskon\t\t= 10%"<<endl;
		} else if (total_belanja[a] >= 50000){
			diskon[a] = 0.05;
			cout<<"   Diskon\t\t= 5%"<<endl;
		} else {
			diskon[a] = 0;
			cout<<"   Diskon\t\t= 0%"<<endl;
		}
		
		total_bayar[a] = total_belanja[a] -  (diskon[a] * total_belanja[a]);
	
		
		cout<<"   Total bayar \t\t= Rp."<<total_bayar[a]<<endl;
		cout<<"====================================="<<endl;
		cout<<endl;
		
		
}
	
	system("pause>0");
}

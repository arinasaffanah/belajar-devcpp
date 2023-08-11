#include<iostream>
using namespace std;

int main(){
	//MEMBUAT PROGRAM ARRAY
	cout<<"====================="<<endl;
	cout<<"MEMBUAT PROGRAM ARRAY"<<endl;
	cout<<"====================="<<endl;
	
	
	string nama[4] = {"Arina", "Andita", "Reza", "Yoga"};
	float nim[4] = {20220801189, 20220801266, 20220801010, 20220801284};
	float nilai[4] = {100, 88, 78, 65};
	string predikat[4];
	
		cout<<"\n=========================================================================="<<endl;
		cout<<"   No \t ";
		cout<<"   NIM \t ";
		cout<<"   \tNama \t ";
		cout<<"   \tNilai \t ";
		cout<<"   Predikat \t ";
		cout<<"\n=========================================================================="<<endl;
	
	for(int a=0; a<4; a++){
		
		cout<<"    "<<a+1<<"     "<<nim[a];
		cout<<"     \t"<<nama[a];
		cout<<"\t     \t"<<nilai[a];
	
		
		if(nilai[a]>=88 && nilai[a]<=100){
			predikat[a] = "Sangat memuaskan";
		} else if(nilai[a]>77 && nilai[a]<88){
			predikat[a] = "Memuaskan";
		} else if(nilai[a]>=60 && nilai[a]<=76){
			predikat[a] = "Cukup";
		}
		
		//cout<<"-------------------------------------------------"<<endl;
		cout<<"\t    "<<predikat[a]<<endl;
	}
}

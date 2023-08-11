#include<iostream>
using namespace std;
	
	string nama[5] = {"Arina", "Andita", "Reza", "Yoga", "Saffa"};
	string nim[5] = {"20220801189", "20220801266", "20220801010", "20220801284", "20220801188"};
	int nilai[5] = {100, 88, 78, 65, 85};
	string predikat[5];

	int jumlahPred1 = 0;
	int jumlahPred2 = 0;
	int jumlahPred3 = 0;

void mahasiswa(){
	for(int a=0; a<5; a++){
	nama[a];
	nim[a];
	nilai[a];
	}
}

void proses(){
	for(int a=0; a<5; a++){
	if(nilai[a]>=88 && nilai[a]<=100){
			predikat[a] = "Sangat memuaskan";
			jumlahPred1+=1;
		} else if(nilai[a]>77 && nilai[a]<88){
			predikat[a] = "Memuaskan";
			jumlahPred2+=1;
		} else if(nilai[a]>=60 && nilai[a]<=76){
			predikat[a] = "Cukup";
			jumlahPred3+=1;
		}
	}
	
}

void output(){
	
		cout<<"-------------------------------------"<<endl;
		cout<<"             PROGRAM ARRAY           "<<endl;
		cout<<"ARINA SAFFANAH ZAKIYYAH - 20220801189"<<endl;
		cout<<"-------------------------------------"<<endl;
	
		cout<<"\n===================================================================================="<<endl;
		cout<<"   No \t ";
		cout<<"   NIM \t ";
		cout<<"   \tNama \t ";
		cout<<"   \tNilai \t\t ";
		cout<<"   Predikat \t ";
		cout<<"\n===================================================================================="<<endl;
		
		for(int a=0; a<5; a++){
		
		cout<<"   "<<a+1<<"     "<<nim[a];
		cout<<"     \t"<<nama[a];
		cout<<"\t   \t"<<nilai[a];
		cout<<"\t   \t"<<predikat[a]<<endl;
		
		
} 
	cout<<"===================================================================================="<<endl;
	cout<<"Jumlah predikat yang 'Sangat memuaskan' \t= "<<jumlahPred1<<endl;
	cout<<"Jumlah predikat yang 'Memuaskan' \t\t= "<<jumlahPred2<<endl;
	cout<<"Jumlah predikat yang 'Cukup' \t\t\t= "<<jumlahPred3<<endl;
}

int main(){
 	mahasiswa();
	proses();
	output();
	
	return 0;
}



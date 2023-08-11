#include<iostream>
using namespace std;
	
	string nama[5] = {"Arina", "Andita", "Reza", "Yoga", "Saffa"};
	string nim[5] = {"20220801189", "20220801266", "20220801010", "20220801284", "20220801188"};
	int nilai[5] = {100, 88, 78, 65, 85};
	string predikat[5];
	string *ptr1 [5];
	string *ptr2 [5];
	int *ptr3 [5];
	string *ptr4 [5];

	int jumlahPred1 = 0;
	int jumlahPred2 = 0;
	int jumlahPred3 = 0;

void mahasiswa(){
	for(int a=0; a<5; a++){
	ptr1[a] = &nama[a];
	ptr2 [a]= &nim[a];
	ptr3 [a]= &nilai[a];
	ptr4 [a]= &predikat[a];
	}
}

void proses(){
	for(int a=0; a<5; a++){
	ptr1[a] = &nama[a];
	ptr2 [a]= &nim[a];
	ptr3 [a]= &nilai[a];
	ptr4 [a]= &predikat[a];
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
		ptr1[a] = &nama[a];
		ptr2 [a]= &nim[a];
		ptr3 [a]= &nilai[a];
		ptr4 [a]= &predikat[a];
		
		cout<<"   "<<a+1<<"     "<<*ptr1[a];
		cout<<"     \t"<<*ptr2 [a];
		cout<<"\t   \t"<<*ptr3 [a];
		cout<<"\t   \t"<<*ptr4 [a]<<endl;
		
		
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



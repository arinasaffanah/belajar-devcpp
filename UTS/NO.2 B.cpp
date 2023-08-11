#include<iostream>
using namespace std;

struct mhs{
	string nama;
	string nim;
	int nilai;
	string predikat;
	
};
	/*string nama[5] = {"Arina", "Andita", "Reza", "Yoga", "Saffa"};
	string nim[5] = {"20220801189", "20220801266", "20220801010", "20220801284", "20220801188"};
	int nilai[5] = {100, 88, 78, 65, 85};*/

int main(){
	mhs input[5];
	
	input[0].nama = "Arina";
	input[0].nim = "20220801189";
	input[0].nilai = 100;
	
	input[1].nama = "Andita";
	input[1].nim = "20220801266";
	input[1].nilai = 88;
	
	input[2].nama = "Reza";
	input[2].nim = "20220801010";
	input[2].nilai = 78;
	
	input[3].nama = "Yoga";
	input[3].nim = "20220801284";
	input[3].nilai = 65;
	
	input[4].nama = "Saffa";
	input[4].nim = "20220801188";
	input[4].nilai = 85;
	
	int jumlahPred1 = 0;
	int jumlahPred2 = 0;
	int jumlahPred3 = 0;
	
	for(int a=0; a<5; a++){
	if(input[a].nilai>=88 && input[a].nilai<=100){
			input[a].predikat = "Sangat memuaskan";
			jumlahPred1+=1;
		} else if(input[a].nilai>77 && input[a].nilai<88){
			input[a].predikat = "Memuaskan";
			jumlahPred2+=1;
		} else if(input[a].nilai>=60 && input[a].nilai<=76){
			input[a].predikat = "Cukup";
			jumlahPred3+=1;
		}
	}
	
	
		cout<<"===================================================================================="<<endl;
		cout<<"   No \t ";
		cout<<"   NIM \t ";
		cout<<"   \tNama \t ";
		cout<<"   \tNilai \t\t ";
		cout<<"   Predikat \t ";
		cout<<"\n===================================================================================="<<endl;
		
		for(int a=0; a<5; a++){
		
		cout<<"   "<<a+1<<"     "<<input[a].nim;
		cout<<"     \t"<<input[a].nama;
		cout<<"\t   \t"<<input[a].nilai;
		cout<<"\t   \t"<<input[a].predikat<<endl;
		
		
} 
	cout<<"===================================================================================="<<endl;
	cout<<"Jumlah predikat yang 'Sangat memuaskan' \t= "<<jumlahPred1<<endl;
	cout<<"Jumlah predikat yang 'Memuaskan' \t\t= "<<jumlahPred2<<endl;
	cout<<"Jumlah predikat yang 'Cukup' \t\t\t= "<<jumlahPred3<<endl;
	
	return 0;
	
}

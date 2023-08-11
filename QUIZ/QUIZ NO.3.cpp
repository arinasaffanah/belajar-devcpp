#include<iostream>
using namespace std;

int main(){
	string nama[5] = {"Arina", "Saffanah", "Zakiyyah", "Chitato", "Cheetos"};
	string jabatan[5] = {"Direktur", "Wakil Direktur", "Sekretaris", "Manager", "Supervisor"};
	string status[5] = {"Sudah menikah", "Belum menikah", "Sudah menikah", "Sudah menikah", "Belum menikah"};
	string bonus[5];
	int anak[5] = {4, 0, 3, 1, 0};
	long int gapok[5] = {10000000, 8000000, 7500000, 6800000, 4000000};
	long int tunjangan[5], gaber[5];
	
	for(int a = 0; a < 5 ; a++){
		cout<<"\n--------------------------------------------------"<<endl;
		cout<<a+1<<". Nama \t= "<<nama[a]<<endl;
		cout<<"   Jabatan \t= "<<jabatan[a]<<endl;
		cout<<"   Status \t= "<<status[a]<<endl;
		cout<<"   Gaji pokok \t= Rp"<<gapok[a]<<endl;
		
		if(status[a] == "Sudah menikah"){
			tunjangan[a] = 0.1 * gapok[a];
		} else {
			tunjangan[a] = 0.05 * gapok[a];
		}
		
		cout<<"   Tunjangan \t= Rp"<<tunjangan[a]<<endl;
		
		gaber[a] = gapok[a] + tunjangan[a];
		
		cout<<"   Gaji Bersih \t= Rp"<<gaber[a]<<endl;
		
		if(jabatan[a]=="Direktur"){
			bonus[a] = "Singapore";	
		} else if(jabatan[a]=="Wakil Direktur"){
			bonus[a] = "Malaysia";	
		} else if(jabatan[a]=="Sekretaris"){
			bonus[a] = "Sariather";	
		} else if(jabatan[a]=="Manager"){
			bonus[a] = "Bali";	
		} else if(jabatan[a]=="Supervisor"){
			bonus[a] = "PutriDuyung Park Ancol";	
		} else{
			
		}
		 
		cout<<"   Bonus \t= "<<bonus[a]<<endl;
	}
	return 0;
}

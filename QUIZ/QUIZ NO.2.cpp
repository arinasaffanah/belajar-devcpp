#include<iostream>
using namespace std;

int main(){
	string nama[3] = {"Arina", "Saffanah", "Zakiyyah"};
	string jabatan[3] = {"Direktur", "Manager", "Sekretaris"};
	string status_perkawinan[3] = {"Sudah kawin", "Sudah kawin", "Sudah kawin"};
	int jumlah_anak[3] = {4, 2, 3};
	long int gaji[3] = {10000000, 7000000, 4000000};
	long int tunjangan_anak[3], tunjangan_istri[3], total_gaji[3];
	
	
	
	for(int a = 0; a < 3; a++){
		
		cout<<a+1<<". Nama karyawan \t= "<<nama[a]<<endl;
		cout<<"   Jabatan \t\t= "<<jabatan[a]<<endl;
		cout<<"   Gaji \t\t= Rp"<<gaji[a]<<endl;
		cout<<"   Status perkawinan \t= "<<status_perkawinan[a]<<endl;
		cout<<"   Jumlah anak \t\t= "<<jumlah_anak[a]<<endl;
		
			
		if(jabatan[a]=="Direktur"){
			tunjangan_istri[a] = (0.1 * gaji[a]);
			tunjangan_anak[a] = jumlah_anak[a] * (0.2 * gaji[a]);
		
		} else if(jabatan[a]=="Manager"){
			tunjangan_istri[a] = (0.1 * gaji[a]);
			tunjangan_anak[a] = jumlah_anak[a] * (0.2 * gaji[a]);
			
		} else if(jabatan[a]=="Sekretaris") {
			tunjangan_istri[a] = (0.1 * gaji[a]);
			tunjangan_anak[a] = jumlah_anak[a] * (0.2 * gaji[a]);
		
		}
	
		
		cout<<"   Tunjangan anak \t= Rp"<<tunjangan_anak[a]<<endl;
		cout<<"   Tunjangan istri \t= Rp"<<tunjangan_istri[a]<<endl;
	
		total_gaji[a] = gaji[a] + (tunjangan_istri[a] + tunjangan_anak[a]);
			
		cout<<"-------------------------------------------------------"<<endl;
		cout<<"   Total gaji \t\t= Rp"<<total_gaji[a]<<endl;
		cout<<"-------------------------------------------------------\n"<<endl;
	}
	return 0;
}

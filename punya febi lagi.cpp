#include <iostream>

using namespace std;

int main(){
	string nama[4];
	int tugas[4],uts[4],uas[4],nr;
	char again = 'y';
	
	cout<<"====================================="<<endl;
	cout<<"==============INPUT DATA============="<<endl;
	cout<<endl;
	
	for (int i=0;i<=4;i++){
		{
		cout<< "Masukkan Nama: ";
		cin >> nama[i];
		cout<< "Nilai tugas  : ";
		cin >> tugas[i];
		cout<< "Nilai uts    : ";
		cin>> uts[i];
		cout<< "Nilai uas    : ";
		cin>> uas[i];
		cout<<endl;
		}
		
		cout<< "========================"<<endl;
		nr = (tugas[i]+uts[i]+uas[i])/3;
		cout<< "Masukkan nama anda: ";
		cin>>nama[i];
		cout<< "Hallo "<<nama[i]<<endl;	
		cout<< "Nilai anda: "<<nr<<endl;	

	if (nr>=80) {
		cout<< "Anda mahasiswa the best! ";
	}
	else if (nr>=78) {
		cout<< "Tidak apa apa. Tetap semangat! ";
	}	
	else if (nr<=70) {
		cout << "Maaf, anda harus mengulang ";
	}
	else {
		cout << "Coba lagi ";
	}
	break;
}

return 0;
}

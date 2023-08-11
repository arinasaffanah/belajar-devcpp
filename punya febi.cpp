#include <iostream>
#include <conio.h>

using namespace std;

int main() {
    string nama[4], keterangan;
    int tugas[4],uts[4],uas[4],choose,total, nr;
    double nilai;
    char again= 'y';
    
    cout << "==============================" << endl;
    cout << "==========INPUT DATA==========" << endl;
    
    for (int i=0; i<=4; i++) {
    	cout << "===============================" << endl;
    	cout << "Masukan nama: ";
    	cin >> nama[i];
    	cout << "Nilai tugas : ";
    	cin >> tugas[i];
    	cout << "Nilai UTS   : ";
    	cin >> uts[i];
    	cout << "Nilai UAS   : ";
    	cin >> uas[i];

	}
	cout << "===============================" << endl;
	{ 
	cout<< "Pilih nama: ";
	cin>>choose;
	
	choose = choose - 1;
	nilai=1.0 * (tugas[choose] + uts[choose] + uas[choose])/3;
	
	if (nilai>=78){
		cout << "Selamat, anda lulus! "; }
		
		else { 
		cout << "Maaf, anda harus mengulang. Jangan patah semangat! "; }
	
	}
return 0;
}

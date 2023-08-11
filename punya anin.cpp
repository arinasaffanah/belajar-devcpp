#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;
int main() {
  
  int e, pilihan[4];
  float tugas[3], uts[3], uas[3], ratarata; 
  string nama[4];
  
  cout << "Program Switch-case" << endl;
  cout << "===================" << endl;
 
  for (e=1; e<=3; e++) {
  cout << e << ". Nama Mahasiswa : ";
  cin >> nama[e];
  cout << "   Nilai Tugas : ";
  cin >> tugas[e];
  cout << "   Nilai UTS : ";
  cin >> uts[e];
  cout << "   Nilai UAS : ";
  cin >> uas[e];
  cout << endl;
  }
  
  ratarata = (tugas[1]+uts[1]+uas[1])/3;
  
  for (e=1; e<=3; e++){
  if (ratarata >= 90) {
  	  pilihan[e] = 1;
      
    }
    else if (ratarata >=65 ) {
      pilihan[e] = 2;
    
    }
    else if (ratarata >= 0 ) {
    	 pilihan[e] = 3;
    
    }
  
   
   switch(pilihan[e]) {
     case 1:
      
      cout << "hallo " << nama[1]<<endl;
      cout << "rata-rata nilai kamu = " << ratarata << endl;
      cout<<"Anda Mahasiswa THE BEST!!"<<endl;
    break;
      
    case 2:
      ratarata = (tugas[2]+uts[2]+uas[2])/3;
      cout << "hallo " << nama[2]<<endl;
      cout << "rata-rata nilai kamu = " << ratarata << endl;
      cout<<"Nilai Anda SUDAH CUKUP BAIK"<<endl;
    break;
      
    case 3:
      ratarata = (tugas[3]+uts[3]+uas[3])/3;
      cout << "hallo " << nama[3]<<endl;
      cout << "rata-rata nilai kamu = " << ratarata << endl;
      cout<<"Maaf, Anda TIDAK LULUS TES"<<endl;
    break;
  }
}

    
 
}

#include <iostream>
#include <iomanip>
#include <conio.h>
#include <windows.h>

using namespace std;

void gotoxy(int x, int y)
{
    //HANDLE hConsoleOutput;
    //COORD dwCursorPosition;
    //cout.flush();
    //dwCursorPosition.X = x;
    //dwCursorPosition.Y = y;
    //hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
	
	//	Membuat program TST (Tutorial Service Time) yaitu layanan konsul PR, tugas sekolah, 
	//	menyelesaikan soal-soal sulit, dan lainnya secara gratis dan bisa request.
	
	
	//deklarasi global
	//string kelas[4] = {"R-701","R-204","R-205","R-309"}; 
	string nama[8], hari[8], no[3];
	string mapel1[4] = {"Matematika","Fisika","Kimia","Biologi"};
	string mapel2[4] = {"Matematika","Matematika","Kimia","Fisika"};
	string mapel3[4] = {"Kimia","Fisika","Kimia","Biologi"};
	string mapel4[4] = {"Matematika","Biologi","Biologi","Fisika"};
//	string mapel5[4] = {"Fisika","Fisika","Matematika","Biologi"};
	string jam[8] = {"9-11","10-12","13-15","16-18"};
	double harga[8], jumlah[8], total[8], hargaSatuan[8];
	string jwb[4], jwbHari[4], jwbMapel[4];
	int pilHari[4], pilMapel[4], pilHariLagi[4];

	void jadwal(){
		gotoxy(0,2);cout<<"DAFTAR JADWAL TST MINGGU INI : ";
		gotoxy(0,3);cout<<"-----------------------------------------------------------------------------------------------------------------";
		gotoxy(5,4);cout<<"SENIN";
		gotoxy(35,4);cout<<"SELASA";
		gotoxy(64,4);cout<<"RABU";
		gotoxy(90,4);cout<<"KAMIS";
//		gotoxy(112,4);cout<<"JUMAT";
		gotoxy(0,10);cout<<"-----------------------------------------------------------------------------------------------------------------";	
		for(int i=0 ; i<4; i++){
			gotoxy(0,6+i);cout<<i+1<<")";
			gotoxy(5,6+i);cout<<mapel1[i]<<"\t"<< setw (1) << "("  << jam[i] << ")";
		}
		
		for(int i=0 ; i<4; i++){
			gotoxy(30,6+i);cout<<i+1<<")";
			gotoxy(35,6+i);cout<<mapel2[i]<<"\t"<< setw (1) << "("  << jam[i] << ")";
		}
		
		for(int i=0 ; i<4; i++){
			gotoxy(59,6+i);cout<<i+1<<")";
			gotoxy(64,6+i);cout<<mapel3[i]<<"\t"<< setw (1) << "("  << jam[i] << ")";
		}
		
		for(int i=0 ; i<4; i++){
			gotoxy(85,6+i);cout<<i+1<<")";
			gotoxy(90,6+i);cout<<mapel4[i]<<"\t"<< setw (1) << "("  << jam[i] << ")";
		}
		
//		for(int i=0 ; i<4; i++){
//			gotoxy(107,6+i);cout<<i+1<<".";
//			gotoxy(112,6+i);cout<<mapel5[i]<<"\t"<< setw (1) << "("  << jam[i] << ")";
//		}	
		
	}

void input(){
	for(int i=0 ; i<1; i++){
		gotoxy(0,11);cout<<"Daftar TST? [Y/T] \t: ";
		cin>>jwb[i];
		if(jwb[i]=="Y" || jwb[i]=="y"){
		
		gotoxy(0,13);cout<<"Masukkan nama anda \t: ";
		cin>>nama[i];	
		
		gotoxy(0,14);cout<<"Pilih hari \t\t: 1) SENIN\n\t\t\t  2) SELASA\n\t\t\t  3) RABU\n\t\t\t  4) KAMIS";
//		gotoxy(73,14);cout<<"   ";
//		gotoxy(73,15);cout<<"   ";
		gotoxy(42,14);cout<<"--> Pilih angka yang sesuai \t: ";cin>>pilHari[i];
//		gotoxy(42,15);cout<<"--> Lagi? [Y/T]\t\t: ";cin>>jwbHari[i];
//		for(int j=0; j<3; j++){
//			if (jwbHari[j]=="Y" || jwb[j]=="y"){
//			gotoxy(73,14);cout<<"   ";
//			gotoxy(73,15);cout<<"   ";
//			gotoxy(42,14);cout<<"--> Pilih angka yang sesuai \t: ";cin>>pilHari[i];
//			gotoxy(42,15);cout<<"--> Lagi? [Y/T]\t\t: ";cin>>jwbHari[j];
//			}
//		}
				
			gotoxy(0,19);cout<<"Pilih mapel \t\t: 1) MATEMATIKA\n\t\t\t  2) FISIKA\n\t\t\t  3) KIMIA\n\t\t\t  4) BIOLOGI";
//			gotoxy(73,19);cout<<"   ";
//			gotoxy(73,20);cout<<"   ";
			gotoxy(42,19);cout<<"--> Pilih angka yang sesuai \t: ";cin>>pilMapel[i];
//			gotoxy(42,20);cout<<"--> Lagi? [Y/T]\t\t: ";cin>>jwbMapel[i];
			
	}
		}
	}
		
void output(){
	gotoxy(0,24);cout<<"Daftar Berhasil!";
	gotoxy(0,25);cout<<"------------------------------------------------------------------------------------";
}
	
	

int main(){
	gotoxy(35,0);cout<<"Tutorial Service Time (TST)";
	
	jadwal();
	input();
	output();
	
//	return 0;
	system("pause>0");
	
}
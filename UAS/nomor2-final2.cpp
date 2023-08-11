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
	string ruangan[4];
	string nama[8], hari[8], no[1], kelas[1], oHari[1], oMapel[1], oJam[1];
	string mapel1[4] = {"Matematika","Fisika","Kimia","Biologi"};
	string mapel2[4] = {"Matematika","Matematika","Kimia","Fisika"};
	string mapel3[4] = {"Kimia","Fisika","Kimia","Biologi"};
	string mapel4[4] = {"Matematika","Biologi","Biologi","Fisika"};
//	string mapel5[4] = {"Fisika","Fisika","Matematika","Biologi"};
	string jam[8] = {"9-11","10-12","13-15","16-18"};
	double harga[8], jumlah[8], total[8], hargaSatuan[8];
	string jwb[4], jwbHari[4], jwbMapel[4];
	int pilHari[4], pilMapel[4], pilHariLagi[4];
	string tanggal[4];

	void jadwal(){
		gotoxy(0,4);cout<<"DAFTAR JADWAL TST MINGGU INI : ";
		gotoxy(0,5);cout<<"-----------------------------------------------------------------------------------------------------------------";
		gotoxy(5,6);cout<<"SENIN";
		gotoxy(35,6);cout<<"SELASA";
		gotoxy(64,6);cout<<"RABU";
		gotoxy(90,6);cout<<"KAMIS";
//		gotoxy(112,4);cout<<"JUMAT";
		gotoxy(0,12);cout<<"-----------------------------------------------------------------------------------------------------------------";	
		for(int i=0 ; i<4; i++){
			gotoxy(0,8+i);cout<<i+1<<")";
			gotoxy(5,8+i);cout<<mapel1[i]<<"\t"<< setw (1) << "("  << jam[i] << ")";
		}
		
		for(int i=0 ; i<4; i++){
			gotoxy(30,8+i);cout<<i+1<<")";
			gotoxy(35,8+i);cout<<mapel2[i]<<"\t"<< setw (1) << "("  << jam[i] << ")";
		}
		
		for(int i=0 ; i<4; i++){
			gotoxy(59,8+i);cout<<i+1<<")";
			gotoxy(64,8+i);cout<<mapel3[i]<<"\t"<< setw (1) << "("  << jam[i] << ")";
		}
		
		for(int i=0 ; i<4; i++){
			gotoxy(85,8+i);cout<<i+1<<")";
			gotoxy(90,8+i);cout<<mapel4[i]<<"\t"<< setw (1) << "("  << jam[i] << ")";
		}
		
	}

void input(){
	for(int i=0 ; i<1; i++){
		
		gotoxy(0,15);cout<<"Daftar TST? [Y/T] \t: ";
		cin>>jwb[i];
		if(jwb[i]=="Y" || jwb[i]=="y"){
		
		gotoxy(0,16);cout<<"Masukkan nama anda \t: ";
		cin>>nama[i];	
		
		gotoxy(0,17);cout<<"Masukkan kelas anda \t: ";
		cin>>kelas[i];
		
		gotoxy(0,18);cout<<"Masukkan No.HP anda \t: ";
		cin>>no[i];
		
		gotoxy(0,20);cout<<"Pilih hari \t\t: 1) SENIN\n\t\t\t  2) SELASA\n\t\t\t  3) RABU\n\t\t\t  4) KAMIS";
		gotoxy(42,20);cout<<"--> Pilih angka yang sesuai \t: ";cin>>pilHari[i];
		
		if(pilHari[i]==1){
				oHari[i] = "SENIN";
				tanggal[i] = "1 Januari 2023";
		} else if (pilHari[i]==2){
				oHari[i] = "SELASA";
				tanggal[i] = "2 Januari 2023";
		} else if (pilHari[i]==3){
				oHari[i] = "RABU";
				tanggal[i] = "3 Januari 2023";
		} else if (pilHari[i]==4){
				oHari[i] = "KAMIS";
				tanggal[i] = "4 Januari 2023";
		} else{
		}
				
		gotoxy(0,25);cout<<"Pilih mapel \t\t: 1) MATEMATIKA\n\t\t\t  2) FISIKA\n\t\t\t  3) KIMIA\n\t\t\t  4) BIOLOGI";
		gotoxy(42,25);cout<<"--> Pilih angka yang sesuai \t: ";cin>>pilMapel[i];
		
			if(pilMapel[i]==1){
				ruangan[i] = "R-701";
				oMapel[i] = "MATEMATIKA";
				oJam[i] = "09.00-11.00";
			} else if (pilMapel[i]==2){
				ruangan[i] = "R-204";
				oMapel[i] = "FISIKA";
				oJam[i] = "10.00-12.00";
			} else if (pilMapel[i]==3){
				ruangan[i] = "R-205";
				oMapel[i] = "KIMIA";
				oJam[i] = "13.00-15.00";
			} else if (pilMapel[i]==4){
				ruangan[i] = "R-309";
				oMapel[i] = "BIOLOGI";
				oJam[i] = "16.00-18.00";
			} else{
			}

	} //else {
//		gotoxy(0,17);cout<<"Terima Kasih! Ditunggu ya TST-nya ^^";
//	}
		}
	}
		
void output(){
	
	gotoxy(1,31);cout<<"Daftar Berhasil!";
	gotoxy(1,32);cout<<"----------------------- GANESHA OPERATION : TUTORIAL SERVICE TIME (TST) -----------------------";
		gotoxy(1,33);cout<<"";
		gotoxy(1,35);cout<<"Selamat anda telah mendaftar TST. Berikut detail pendaftaran :";
		gotoxy(1,36);cout<<"Nama \t: ";
		gotoxy(11,36);cout<< nama[0];
		gotoxy(1,37);cout<<"Kelas \t: ";
		gotoxy(11,37);cout<< kelas[0];
		gotoxy(1,38);cout<<"No.HP \t: ";
		gotoxy(11,38);cout<< no[0];
		
		gotoxy(1,40);cout<<"Mengikuti TST pada : ";
		
		gotoxy(1,41);cout<<"Ruangan : ";
		gotoxy(11,41);cout<< ruangan[0];
		gotoxy(1,42);cout<<"Mapel \t : ";
		gotoxy(11,42);cout<< oMapel[0];
		gotoxy(1,43);cout<<"Pukul \t : ";
		gotoxy(11,43);cout<< oJam[0];
		gotoxy(1,44);cout<<"Hari \t : ";
		gotoxy(11,44);cout<< oHari[0];
		gotoxy(1,45);cout<<"Tanggal : ";
		gotoxy(11,45);cout<< tanggal[0];
	gotoxy(1,46);cout<<"------------------------------------------------------------------------------------------------";
	gotoxy(1,47);cout<<"------------------------------------------------------------------------------------------------";
		
		
}
	
	

int main(){
	gotoxy(35,0);cout<<"Tutorial Service Time (TST)";
	gotoxy(0,1);cout<<"Layanan konsul PR, tugas sekolah, menyelesaikan soal-soal sulit, dan lainnya secara gratis dan bisa request.";
	
	jadwal();
	input();
	output();
	
//	return 0;
	system("pause>0");
	
}
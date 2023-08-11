#include <iostream>
#include <iomanip>
#include <windows.h>

using namespace std;

void gotoxy(int x, int y)
{
//    HANDLE hConsoleOutput;
//    COORD dwCursorPosition;
//    cout.flush();
//    dwCursorPosition.X = x;
//    dwCursorPosition.Y = y;
//    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD coord;
    coord.X = x;
    coord.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


	int jmlAnak[10] = {2,6,7,8,9,4,4,4,8,1};
	string nip[10] = {"MI102", "MI302", "MI220", "MI203", "MI205", "MI103", "MI303", "MI230", "MI204", "MI206"};
	string nama[10] = {"Kevin Januari", "Noval Rais", "Muflih Hilmi", "Arina Saffanah", "Deby Stevani", "Kevin Nabil", "Irgi Fahreza", "Febriyanti", "Kelly Felicia", "Shiska Riani"};
	string status[10] = {"Kawin", "Duda", "Single", "Kawin", "Janda", "Kawin", "Duda", "Kawin", "Janda", "Single"};
	string jabatan[10] = {"Direktur", "Wakil Direktur", "Manajer", "Supervisor", "Karyawan", "Direktur", "Wakil Direktur", "Manajer", "Supervisor", "Karyawan"};
	string jenKel[10] = {"lk", "lk", "lk", "pr", "pr", "lk", "lk", "pr", "pr", "pr"};
	double gaji[10] = {40000000, 3000000, 20000000, 9000000, 5000000, 70000000, 30000000, 20000000, 9000000, 8000000};double tunjIstri[10], tunjAnak[10], gajiBersih[10] ;
	
void output(){
gotoxy(1,3);cout<<"HALAMAN 1";
	
	gotoxy(1,4);cout<<"-------------------------------------------------------------------------------------------------------------------=";
	gotoxy(1,5);cout<<"| NO |  NIP  |     NAMA     | STATUS |    JABATAN     |   GAJI   | TUNJ ISTRI |   TUNJ ANAK   |     GAJI BERSIH    | ";
	gotoxy(1,6);cout<<"-------------------------------------------------------------------------------------------------------------------=";

	gotoxy(1,12);cout<<"====================================================================================================================";
}

void data(){
	
	double totGaji = 0, totTunjIstri = 0, totTunjAnak = 0, totGajiBersih = 0;
	
	for (int i = 0; i < 4; i++){
		
		gotoxy(3,7+i);cout<<i;
		gotoxy(8,7+i);cout << nip[i];
		gotoxy(15,7+i);cout << nama[i];
		gotoxy(31,7+i);cout << status[i];
		gotoxy(40,7+i);cout << jabatan[i];
		gotoxy(57,7+i);cout << setprecision(10) << gaji[i];
		
		
		if(status[i]=="Duda" || status[i]=="Janda"){
			tunjIstri[i] = 0;
			tunjAnak[i] = (gaji[i] * 0.65) * jmlAnak[i] ;
		} else if (status[i]=="Kawin" && jenKel[i]=="lk"){
			tunjIstri[i] = 0.4;
			tunjAnak[i] = (gaji[i] * 0.35) * jmlAnak[i] ;
		} else if (status[i]=="Kawin" && jenKel[i]=="pr"){
			tunjIstri[i] = 0;
			tunjAnak[i] = (gaji[i] * 0.35) * jmlAnak[i] ;
		} else {
			tunjIstri[i] = 0;
			tunjAnak[i] = 0 ;
		} 
		
		gotoxy(71,7+i);cout << tunjIstri[i];
		gotoxy(81,7+i);cout << tunjAnak[i];
		
		gajiBersih[i] = tunjIstri[i] + tunjAnak[i] + gaji[i];
		gotoxy(97,7+i);cout << gajiBersih[i];
		
		totGaji = totGaji + gaji[i];
		gotoxy(1,13);cout << " gaji: " << totGaji;
		
		totTunjIstri = totTunjIstri + tunjIstri[i];
		gotoxy(1,14);cout << " tunj istri:" << totTunjIstri;
		
		totTunjAnak = totTunjAnak + tunjAnak[i];
		gotoxy(1,15);cout << " tunj istri:" << totTunjAnak;
		
		totGajiBersih = totGajiBersih + gajiBersih[i];
		gotoxy(1,16);cout << " gaber:" << totGajiBersih;
		
	}
	
}

int main(){
	output();
	data();
}
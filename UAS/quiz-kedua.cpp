#include <iostream>
#include <iomanip>
#include <conio.h>
#include <windows.h>
#include <string.h>

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


	//deklarasi di global scope
	int jmlAnak[10] = {2,1,0,4,2,1,2,1,3,8};
	string nip[10] = {"MI102", "MI302", "MI220", "MI203", "MI205", "MI103", "MI303", "MI230", "MI204", "MI206"};
	string nama[10] = {"Kevin Januari", "Noval Rais", "Muflih Hilmi", "Arina Saffanah", "Deby Stevani", "Kevin Nabil", "Irgi Fahreza", "Febriyanti", "Kelly Felicia", "Shiska Riani"};
	string status[10] = {"Kawin", "Duda", "Single", "Kawin", "Janda", "Kawin", "Duda", "Kawin", "Janda", "Single"};
	string jabatan[10] = {"Direktur", "Wakil Direktur", "Manajer", "Supervisor", "Karyawan", "Direktur", "Wakil Direktur", "Manajer", "Supervisor", "Karyawan"};
	string jenKel[10] = {"lk", "lk", "lk", "pr", "pr", "lk", "lk", "pr", "pr", "pr"};
	double gaji[10] = {20000000, 15000000, 10000000, 7000000, 4000000, 20000000, 15000000, 10000000, 7000000, 4000000};
	double tunjIstri[10], tunjAnak[10], gajiBersih[10] ;
	//double totGaji = 0, totTunjIstri = 0, totTunjAnak = 0, totGajiBersih = 0;

void tabel1(){
	
	gotoxy(31,0);cout<<"LAPORAN BONUS AKHIR TAHUN KARYAWAN PT.HUTAMA KARYA";
	
	gotoxy(1,3);cout<<"HALAMAN 1";
	
	gotoxy(1,4);cout<<"====================================================================================================================";
	gotoxy(1,5);cout<<"| NO |  NIP  |     NAMA     | STATUS |    JABATAN     |   GAJI   | TUNJ ISTRI |   TUNJ ANAK   |     GAJI BERSIH    | ";
	gotoxy(1,6);cout<<"====================================================================================================================";

	for(int i = 1; i <= 5; i++)
	{	
		gotoxy(1,6+i);
		cout<<"|    |       |              |        |                |          |            |               |                    | ";
	}
	gotoxy(1,12);cout<<"====================================================================================================================";
	gotoxy(1,13);cout<<"|                                                                              TOTAL GAJI|                         | ";
	gotoxy(1,14);cout<<"|                                                                   TOTAL TUNJANGAN ISTRI|                         | ";
	gotoxy(1,15);cout<<"|                                                                    TOTAL TUNJANGAN ANAK|                         | ";
	gotoxy(1,16);cout<<"|                                                                       TOTAL GAJI BERSIH|                         | ";
	gotoxy(1,17);cout<<"====================================================================================================================";
	
}

void tabel2(){
	
	gotoxy(1,20);cout<<"HALAMAN 2";
	
	gotoxy(1,21);cout<<"====================================================================================================================";
	gotoxy(1,22);cout<<"| NO |  NIP  |     NAMA     | STATUS |    JABATAN     |   GAJI   | TUNJ ISTRI |   TUNJ ANAK   |     GAJI BERSIH    | ";
	gotoxy(1,23);cout<<"====================================================================================================================";

	for(int i = 1; i <= 5; i++)
	{	
		gotoxy(1,23+i);
		cout<<"|    |       |              |        |                |          |            |               |                    | ";
	}
	gotoxy(1,29);cout<<"====================================================================================================================";
	gotoxy(1,30);cout<<"|                                                                              TOTAL GAJI|                         | ";
	gotoxy(1,31);cout<<"|                                                                   TOTAL TUNJANGAN ISTRI|                         | ";
	gotoxy(1,32);cout<<"|                                                                    TOTAL TUNJANGAN ANAK|                         | ";
	gotoxy(1,33);cout<<"|                                                                       TOTAL GAJI BERSIH|                         | ";
	gotoxy(1,34);cout<<"====================================================================================================================";
	
}

void input1(){
	
	double totGaji = 0, totTunjIstri = 0, totTunjAnak = 0, totGajiBersih = 0;
	
	for (int i = 0; i <5; i++){
		
		gotoxy(3,7+i);cout<<i+1;
		gotoxy(8,7+i);cout << nip[i];
		gotoxy(15,7+i);cout << nama[i];
		gotoxy(31,7+i);cout << status[i];
		gotoxy(40,7+i);cout << jabatan[i];
		gotoxy(57,7+i);cout << setprecision(10) << gaji[i];
		
		
		if(status[i]=="Duda" || status[i]=="Janda"){
			tunjIstri[i] = 0 * gaji[i];
			tunjAnak[i] = (gaji[i] * 0.65) * jmlAnak[i] ;
		} else if (status[i]=="Kawin" && jenKel[i]=="lk"){
			tunjIstri[i] = 0.4 * gaji[i];
			tunjAnak[i] = (gaji[i] * 0.35) * jmlAnak[i] ;
		} else if (status[i]=="Kawin" && jenKel[i]=="pr"){
			tunjIstri[i] = 0 * gaji[i];
			tunjAnak[i] = (gaji[i] * 0.35) * jmlAnak[i] ;
		} else {
			tunjIstri[i] = 0* gaji[i];
			tunjAnak[i] = 0 ;
		} 
		
		gotoxy(71,7+i);cout << tunjIstri[i];
		gotoxy(81,7+i);cout << tunjAnak[i];
		
		gajiBersih[i] = tunjIstri[i] + tunjAnak[i] + gaji[i];
		gotoxy(97,7+i);cout << gajiBersih[i];
		
		totGaji = totGaji + gaji[i];
		gotoxy(94,13);cout << setw (11) << totGaji;
		
		totTunjIstri = totTunjIstri + tunjIstri[i];
		gotoxy(94,14);cout << setw (11) << totTunjIstri;
		
		totTunjAnak = totTunjAnak + tunjAnak[i];
		gotoxy(94,15);cout << setw (11) << totTunjAnak;
		
		totGajiBersih = totGajiBersih + gajiBersih[i];
		gotoxy(94,16);cout << setw (11) << totGajiBersih;
		
	}
	
}

void input2(){
	double totGaji = 0, totTunjIstri = 0, totTunjAnak = 0, totGajiBersih = 0;
	
	for (int j = 5; j < 10 ; j++){
		
		gotoxy(3,19+j);cout<<j-4;
		gotoxy(8,19+j);cout << nip[j];
		gotoxy(15,19+j);cout << nama[j];
		gotoxy(31,19+j);cout << status[j];
		gotoxy(40,19+j);cout << jabatan[j];
		gotoxy(57,19+j);cout << setprecision(10) << gaji[j];
		
		
		if(status[j]=="Duda" || status[j]=="Janda"){
			tunjIstri[j] = 0 * gaji[j];
			tunjAnak[j] = (gaji[j] * 0.65) * jmlAnak[j] ;
		} else if (status[j]=="Kawin" && jenKel[j]=="lk"){
			tunjIstri[j] = 0.4 * gaji[j];
			tunjAnak[j] = (gaji[j] * 0.35) * jmlAnak[j] ;
		} else if (status[j]=="Kawin" && jenKel[j]=="pr"){
			tunjIstri[j] = 0 * gaji[j];
			tunjAnak[j] = (gaji[j] * 0.35) * jmlAnak[j] ;
		} else {
			tunjIstri[j] = 0* gaji[j];
			tunjAnak[j] = 0 ;
		} 
		
		gotoxy(71,19+j);cout << tunjIstri[j];
		gotoxy(81,19+j);cout << tunjAnak[j];
		
		gajiBersih[j] = tunjIstri[j] + tunjAnak[j] + gaji[j];
		gotoxy(97,19+j);cout << gajiBersih[j];
		
		totGaji = totGaji + gaji[j];
		gotoxy(94,30);cout << setw (11) << totGaji;
		
		totTunjIstri = totTunjIstri + tunjIstri[j];
		gotoxy(94,31);cout << setw (11) << totTunjIstri;
		
		totTunjAnak = totTunjAnak + tunjAnak[j];
		gotoxy(94,32);cout << setw (11) << totTunjAnak;
		
		totGajiBersih = totGajiBersih + gajiBersih[j];
		gotoxy(94,33);cout << setw (11) << totGajiBersih;
		
	}
	
}

void total(){
	
	double totGaji = 0, totTunjIstri = 0, totTunjAnak = 0, totGajiBersih = 0;
	
	for (int k = 0; k <10 ; k++){
		
		totGaji = totGaji + gaji[k];
		
		totTunjIstri = totTunjIstri + tunjIstri[k];
		totTunjAnak = totTunjAnak + tunjAnak[k];
		totGajiBersih = totGajiBersih + gajiBersih[k];
		
		gotoxy(1,37);cout << "Total keseluruhan ";
		gotoxy(1,39);cout <<  "Halaman \t\t: 001 s/d 002";
		gotoxy(1,40);cout <<  "Total Gaji \t\t: " << setw (11) <<totGaji;
		gotoxy(1,41);cout << "Total Tunjangan Istri \t: " << setw (11) << totTunjIstri;
		gotoxy(1,42);cout << "Total Tunjangan Anak \t: " << setw (11) << totTunjAnak;
		gotoxy(1,43);cout << "Total Gaji Bersih \t: " << setw (11) << totGajiBersih;
	}
	
	gotoxy(81, 37);cout<<"------- QUIZ ALGORITMA KE-2 --------";
	gotoxy(81, 38);cout<<"| NAMA   : ARINA SAFFANAH ZAKIYYAH |";
	gotoxy(81, 39);cout<<"| NIM    : 20220801189             |";
	gotoxy(81, 40);cout<<"------------------------------------";
	
}

int main (){
	tabel1();
	tabel2();
	input1();
	input2();
	total();
	system("pause>0");
	return 0;
}
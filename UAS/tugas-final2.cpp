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

int main (){
	
	gotoxy(40,0);cout<<"Rekapitulasi Bonus AkhirTahun Karyawan PT.AnginRibut";
	
	gotoxy(1,8);cout<<"[JABATAN : DIREKTUR]";
	gotoxy(108,8);cout<<"HALAMAN 1";
	gotoxy(1,9);cout<<"====================================================================================================================";
	gotoxy(1,10);cout<<"| NO |  NIP  |     NAMA     | STATUS | JML ANAK | JABATAN |    GAJI    | BONUS Akh-TAHUN | TUNJ ANAK | GAJI BERSIH | ";
	gotoxy(1,11);cout<<"====================================================================================================================";

	for(int i = 1; i <= 5; i++)
	{	
		gotoxy(1,11+i);
		cout<<"|    |       |              |        |          |         |            |                 |           |             | ";
	}
	gotoxy(1,17);cout<<"====================================================================================================================";
	gotoxy(1,18);cout<<"|                                                                              TOTAL GAJI|                         | ";
	gotoxy(1,19);cout<<"|                                                                             TOTAL BONUS|                         | ";
	gotoxy(1,20);cout<<"|                                                                    TOTAL TUNJANGAN ANAK|                         | ";
	gotoxy(1,21);cout<<"|                                                                       TOTAL GAJI BERSIH|                         | ";
	gotoxy(1,22);cout<<"====================================================================================================================";
	int i = 1, jmlAnak[5];
	string jwb, nip[5], nama[5], status[5];
	string jabatan[5] = {"Direktur", "Direktur", "Direktur", "Direktur", "Direktur"};
	float bonus[5], tunjAnak[5], gajiBersih [5];
	float gaji[5] = {20000000, 20000000, 20000000, 20000000, 20000000};
	string gajiTabel[5] = {"20000000", "20000000", "20000000", "20000000", "20000000"};
	do {
		
		gotoxy(3,11+i);cout<<i;
		
		gotoxy(1,2);cout<<"Masukkan NIP \t\t\t= ";
		cin >> nip[i];
		gotoxy(7,11+i);cout << nip[i];
		
		gotoxy(1,3);cout<<"Masukkan nama \t\t\t= ";
		cin >> nama[i];
		gotoxy(15,11+i);cout << nama[i];
		
		gotoxy(1,4);cout<<"Masukkan status (SM/BM) \t= ";
		cin >> status[i];
		gotoxy(30,11+i);cout << status[i];
		
		gotoxy(1,5);cout<<"Masukkan jumlah anak \t\t= ";
		cin >> jmlAnak[i];
		gotoxy(43,11+i);cout << jmlAnak[i];
		
		gotoxy(50,11+i);cout << jabatan[i];
		
		gotoxy(60,11+i);cout << gajiTabel[i];
		
//		gotoxy(1,2);cout<<"Masukkan NIP : ";
//		cin >> jwb;
//		
//		gotoxy(1,2);cout<<"Masukkan nama : ";
//		cin >> jwb;
//		
//		gotoxy(1,2);cout<<"Masukkan status : ";
//		cin >> jwb;
//		
//		gotoxy(1,2);cout<<"Masukkan jumlah anak : ";
//		cin >> jwb;
		
		gotoxy(1,6);cout<<"Isi data lagi? [Y/T] \t\t= ";
		cin >> jwb;
		i++;
		
	} while((jwb=="y" || jwb=="Y") & i <= 5 );



system("pause>0");
}

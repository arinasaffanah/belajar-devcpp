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
	gotoxy(1,2);cout<<"[JABATAN : DIREKTUR]";
	gotoxy(108,2);cout<<"HALAMAN 1";
	gotoxy(1,3);cout<<"====================================================================================================================";
	gotoxy(1,4);cout<<"| NO |  NIP  |     NAMA     | STATUS | JML ANAK | JABATAN |    GAJI    | BONUS Akh-TAHUN | TUNJ ANAK | GAJI BERSIH | ";
	gotoxy(1,5);cout<<"====================================================================================================================";

	for(int i = 1; i <= 5; i++)
	{	
		gotoxy(1,5+i);
		cout<<"|    |       |              |        |          |         |            |                 |           |             | ";
	}
	gotoxy(1,11);cout<<"====================================================================================================================";
	gotoxy(1,12);cout<<"|                                                                              TOTAL GAJI|                         | ";
	gotoxy(1,13);cout<<"|                                                                             TOTAL BONUS|                         | ";
	gotoxy(1,14);cout<<"|                                                                    TOTAL TUNJANGAN ANAK|                         | ";
	gotoxy(1,15);cout<<"|                                                                       TOTAL GAJI BERSIH|                         | ";
	gotoxy(1,16);cout<<"====================================================================================================================";
	int i = ;
	do {
		
	} while(jwb=="y" || jwb=="Y")



system("pause>0");
}

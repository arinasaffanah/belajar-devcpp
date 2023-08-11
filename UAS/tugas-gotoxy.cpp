#include <iostream>
#include <conio.h>
#include <string>
#include <windows.h>
#include <sstream>
using namespace std;

void gotoxy(int x, int y)
{
    HANDLE hConsoleOutput;
    COORD dwCursorPosition;
    cout.flush();
    dwCursorPosition.X = x;
    dwCursorPosition.Y = y;
    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsoleOutput,dwCursorPosition);
}

void tabel(int kolom,int posisi, string nip[][5], string nama[][5], string status[][5], int jmlAnak[][5], string jabatan[][5], float gaji[][5], string bonuaAkhir[][5], float tunjAnak[][5], double gajiBersih[][5]){
	//HEADER
	int baris = 2;
	gotoxy (baris, posisi);
	cout<<"--------------------------------------------";
	
}

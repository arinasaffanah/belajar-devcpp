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
    
    //(x,y), (kolom, baris)
}

void tabel1(){
	gotoxy(0,0);cout<<"Hello world";
	gotoxy(0,0);cout<<"apaya";
	
	gotoxy(1,4);cout<<"====================================================================================================================";
}

int main(){
	tabel1();
}
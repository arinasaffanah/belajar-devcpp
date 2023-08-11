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

void tabel(string data[][3],int kolom,int posisi){
    int baris;
    bool status;
    //mebuat header tabel
    baris = 4;
        gotoxy(baris,posisi);cout<<"-------------------------------------------------------------";
        for (int l=0;l<3;l++){
        gotoxy(baris,posisi+1);cout<<"| "<<data[0][l];
        baris = baris+20;
        }
        gotoxy(baris,posisi+1);
        cout<<"|"<<endl;
        baris=4;
        gotoxy(baris,posisi+2);cout<<"-------------------------------------------------------------";

        // membuat isi tabel
    for (int i =1; i<kolom;i++){
        baris=4;
        for(int j =0; j<3;j++){
            if(data[i][j]!=""){
            gotoxy(baris,posisi+(i+2));cout<<"| "<<data[i][j];
            baris =baris+20;
            status = true;
            } else
                status = false;
        }
        if(status==true){
            gotoxy(baris,posisi+(i+2));
            cout<<"|"<<endl;
        }
    }
}

string toString ( int Number )
{
    stringstream ss;
    ss << Number;
    return ss.str();
}

int main(){
    system("cls");
    string barang[100][3]={{"Nomor","Barang","Merk"}};
    int jumlah;
    cout<<"Berapa Barang yang diinput?(Maks 90) : "; cin>>jumlah;

    for(int i = 1; i<=jumlah; i++){
        cout<<"Nomor "<<i<<endl;
        barang[i][0]=toString(i);
        cout<<"Masukkan Nama Barang : "; cin>>barang[i][1];
        cout<<"Masukkan Merk Barang : "; cin>>barang[i][2];
        system("cls");
    }
    system("cls");
    tabel(barang,jumlah+1, 2);
    return 0;
}

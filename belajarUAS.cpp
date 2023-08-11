#include <iostream>
#include <windows.h>
using namespace std;
COORD coordinate;
void gotoxy(int x,int y){
coordinate.X=x; coordinate.Y=y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinate);
}
void tabel(){
 //JUDUL
 gotoxy(4,2);cout<<" Daftar nama kelompok ";
 gotoxy(4,3);cout<<"|------------------------------------------------|";
 gotoxy(4,4);cout<<"| NO. NAMA NILAI KETERANGAN |";
 gotoxy(4,5);cout<<"|------------------------------------------------|";
}
void data(){
 string nh[12], nama[12]={"Joko D","Jojon ","Doyok ","Ester Tobing","Parto","Eko P","Fatimah","Zainab","Syarah","RoyMarten ","Weka Ria","XXX"};
 int brs=6,i,nilai[12]={70,72,83,81,80,82,73,71,60,72,90,000}; 
for (i=0;i<=10;i++)
{ if (nilai[i]>=80)
 nh[i]="Lulus";
 else if (nilai[i] >=70)
 nh[i]="Cadangan";
 else 
 nh[i]="Ditolak";
 
 gotoxy(7,brs);cout<<i;
 gotoxy(12,brs);cout<<nama[i];
 gotoxy(34,brs);cout<<nilai[i];
 gotoxy(41,brs);cout<<nh[i];
 brs++;
}
 gotoxy(4,brs+1);cout<<"|------------------------------------------------|";
 gotoxy(4,brs+2);cout<<"!Keterangan";cout<<"\n\n\n";
}
int main(){
 tabel();
 data();
}


#include <iostream>
#include <windows.h>
using namespace std;
COORD coordinate;

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

int i;
 	string nama[10]={"Kelly Felicia","Deby Stevani","Arina Grande","Ester Tobing","Parto Lato","Lala Luna","Nana James","Lenny Carol","Harris Joe","Gary Lary"};
 	string jenis[10]={"perempuan","perempuan","laki-laki","laki-laki","perempuan","perempuan","perempuan","perempuan","laki-laki","laki-laki"};
 	string status[10]={"Single","Janda","Duda","Kawin","Single","Janda","Single","Kawin","Duda","Kawin"};
 	string jabatan[5]={"Direktur","Supervisor","Supervisor","Manager","Karyawan"};
 	int gaji[10]={13000000,13000000,13000000,13000000,13000000,10000000,10000000,10000000,10000000,10000000};
 	int anak[10]={0,1,4,1,0,1,0,2,3,1};
 	long long tunjistri[10], tunjanak[10], gajiber[10];
 	long long totgajiber=0, tottunjistri=0, totgaji=0, tottunjanak=0;

void tabel(){
   	gotoxy(0,3);cout<<"					  LAPORAN GAJI KARYAWAN PT. XYZ";
 	gotoxy(0,4);cout<<" hal:01                                                                                                  Golongan I"<<endl;
	gotoxy(0,5);cout<<"|======================================================================================================================|"<<endl;
 	gotoxy(0,6);cout<<"| NO. |        NAMA          | JENIS KELAMIN | STATUS | JML ANAK | TUNJ ISTRI |  TUNJ ANAK  | GAJI POKOK | GAJI BERSIH |"<<endl;
 	gotoxy(0,7);cout<<"|======================================================================================================================|";
 	for (i=1;i<=5;i++){
 	gotoxy(0,7+i);cout<<"|     |                      |               |        |          |            |             |            |             |";}
 	
 }
 
 void tabel2(){
   	gotoxy(0,22);cout<<"					  LAPORAN GAJI KARYAWAN PT. XYZ";
 	gotoxy(0,23);cout<<" hal:02                                                                                                  Golongan II"<<endl;
	gotoxy(0,24);cout<<"|======================================================================================================================|"<<endl;
 	gotoxy(0,25);cout<<"| NO. |        NAMA          | JENIS KELAMIN | STATUS | JML ANAK | TUNJ ISTRI |  TUNJ ANAK  | GAJI POKOK | GAJI BERSIH |"<<endl;
 	gotoxy(0,26);cout<<"|======================================================================================================================|";
 	for (i=1;i<=5;i++){
 	gotoxy(0,26+i);cout<<"|     |                      |               |        |          |            |             |            |             |";}
 	
 }
 

 void data(){
int brs=8;
	for (i=0;i<5;i++)	
	{ 
	
	
	if (status[i]=="Duda"||status[i]=="Janda"){
 		tunjistri[i]=0;
 		tunjanak[i]=gaji[i]*0.65*anak[i];
 	}
 		
 	else if (status[i]=="Kawin" && jenis[i]=="laki-laki"){
 		tunjistri[i]=0.4*gaji[i];
 		tunjanak[i]=gaji[i]*anak[i]*0.35;
 	}
 		
 	else if (status[i]=="Kawin" && jenis[i]=="perempuan"){
 		tunjistri[i]=0;
 		tunjanak[i]=gaji[i]*anak[i]*0.35;
 	}
 		
 	else{
 		tunjistri[i]=0;
 		tunjanak[i]=0;
 	}
 	gajiber[i]=gaji[i]+tunjanak[i]+tunjistri[i];
 	gotoxy(3,brs);cout<<i+1;
 	gotoxy(12,brs);cout<<nama[i];
 	gotoxy(33,brs); cout<< jenis[i];
	gotoxy(46,brs);cout<<status[i];
 	gotoxy(60,brs);cout<<anak[i];
 	gotoxy(70,brs);cout<<tunjistri[i];
 	gotoxy(82,brs);cout<<tunjanak[i];
 	gotoxy(95,brs);cout<<gaji[i];
 	gotoxy(110,brs);cout<<gajiber[i];
	brs++;
	
	gotoxy(0,13);cout<<"------------------------------------------------------------------------------------------------------------------------";
	gotoxy(0,14);cout<<"|                                                                                  |";
	gotoxy(0,15);cout<<"|                                                                                             	 |";
	gotoxy(0,16);cout<<"|                                                                                                        |";
	
	totgajiber= totgajiber+gajiber[i];
	gotoxy(70,14);cout<<"TOTAL GAJI BERSIH 	:"<<totgajiber;
	tottunjanak=tottunjanak+tunjanak[i];
	gotoxy(70,15);cout<<"TOTAL TUNJANGAN ANAK	:"<<tottunjanak;
	tottunjistri=tottunjistri+tunjistri[i];
	gotoxy(70,16);cout<<"TOTAL TUNJANGAN ISTRI	:"<<tottunjistri;
	totgaji=totgaji+gaji[i];
	gotoxy(70,17);cout<<"TOTAL GAJI POKOK		:"<<totgaji;
	
}
 }
 
 void data2(){
 	int brs=27;
	for (i=5;i<10;i++)	
	{ 
	
	
	if (status[i]=="Duda"||status[i]=="Janda"){
 		tunjistri[i]=0;
 		tunjanak[i]=gaji[i]*0.65*anak[i];
 	}
 		
 	else if (status[i]=="Kawin" && jenis[i]=="laki-laki"){
 		tunjistri[i]=0.4*gaji[i];
 		tunjanak[i]=gaji[i]*anak[i]*0.35;
 	}
 		
 	else if (status[i]=="Kawin" && jenis[i]=="perempuan"){
 		tunjistri[i]=0;
 		tunjanak[i]=gaji[i]*anak[i]*0.35;
 	}
 		
 	else{
 		tunjistri[i]=0;
 		tunjanak[i]=0;
 	}
 	gajiber[i]=gaji[i]+tunjanak[i]+tunjistri[i];
 	gotoxy(3,brs);cout<<i+1;
 	gotoxy(12,brs);cout<<nama[i];
 	gotoxy(33,brs); cout<< jenis[i];
	gotoxy(46,brs);cout<<status[i];
 	gotoxy(60,brs);cout<<anak[i];
 	gotoxy(70,brs);cout<<tunjistri[i];
 	gotoxy(82,brs);cout<<tunjanak[i];
 	gotoxy(95,brs);cout<<gaji[i];
 	gotoxy(110,brs);cout<<gajiber[i];
	brs++;
	
	gotoxy(0,13);cout<<"------------------------------------------------------------------------------------------------------------------------";
	gotoxy(0,14);cout<<"|                                                                                  |";
	gotoxy(0,15);cout<<"|                                                                                             	 |";
	gotoxy(0,16);cout<<"|                                                                                                        |";
	
	totgajiber= totgajiber+gajiber[i];
	gotoxy(70,35);cout<<"TOTAL GAJI BERSIH 	:"<<totgajiber;
	tottunjanak=tottunjanak+tunjanak[i];
	gotoxy(70,36);cout<<"TOTAL TUNJANGAN ANAK	:"<<tottunjanak;
	tottunjistri=tottunjistri+tunjistri[i];
	gotoxy(70,37);cout<<"TOTAL TUNJANGAN ISTRI	:"<<tottunjistri;
	totgaji=totgaji+gaji[i];
	gotoxy(70,38);cout<<"TOTAL GAJI POKOK		:"<<totgaji;
	
	gotoxy(0,39);cout<<"------------------------------------------------------------------------------------------------------------------------";
	
	
}
}
void total(){
	
	long long totgaji = 0, tottunjistri = 0, tottunjanak = 0, totgajiber = 0;
	
	for (int i = 0; i <10 ; i++){
		
		totgaji = totgaji + gaji[i];
		
		tottunjistri = tottunjistri + tunjistri[i];
		tottunjanak = tottunjanak + tunjanak[i];
		totgajiber = totgajiber + gajiber[i];
		
		gotoxy(70,41);cout << "Total keseluruhan ";
		gotoxy(70,42);cout <<  "Halaman \t\t: 001 s/d 002";
		gotoxy(70,43);cout <<  "Total Gaji \t\t: " <<totgaji;
		gotoxy(70,44);cout << "Total Tunjangan Istri \t: " << tottunjistri;
		gotoxy(70,45);cout << "Total Tunjangan Anak \t: " << tottunjanak;
		gotoxy(70,46);cout << "Total Gaji Bersih \t: " << totgajiber;
		}
}
//format: QUIZ 2

int main(){
	tabel();
	tabel2();
	data();
	data2();
	total();
system("pause>0");	
return 0;	
}
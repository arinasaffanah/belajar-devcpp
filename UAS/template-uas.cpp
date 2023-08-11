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

//		menikah 
//		Belum Menikah

//		Perempuan
//		Laki-laki

//		IT Manajer
//		IT Analis
//		IT Programmer
//		IT Jaringan
//		IT Adm Database

//		>=20	Singapura & Malaysia
//		>=15	WakaTobi & Raja Ampat
//		>=10	Lembah Arraw & Pulau Mandeh
//		>=5		Bali, PulauDewata
//		else	PutriDuyung Ancol

//		Single
		
//		{">=20 thn",">=15 thn",">=10 thn",">=5 thn","",   ">=20 thn",">=15 thn",">=10 thn",">=5 thn","",   ">=20 thn",">=15 thn",">=10 thn",">=5thn","",}

	//data input
	string nama[15] = {"Arina","Deby","Rais","Hilmi","Kevin",   "Sandy","Lidya","Lienando","Nabil","Devilla",   "Rafi","Jody","Starly","Kelly","Hadasa"};
	string jenkel[15] = {"Perempuan","Perempuan","Laki-laki","Laki-laki","Laki-laki",   "Laki-laki","Perempuan","Laki-laki","Laki-laki","Perempuan",   "Laki-laki","Laki-laki","Perempuan","Perempuan","Perempuan"};
	string status[15] = {"Menikah","Single","Menikah","Menikah","Single",   "Single","Menikah","Menikah","Menikah","Single",   "Menikah","Single","Single","Menikah","Menikah"};
	string jabatan[15] = {"IT Manajer","IT Analis","IT Programmer","IT Jaringan","IT Adm Database",   "IT Manajer","IT Programmer","IT Analis","IT Adm Database","IT Jaringan",   "IT Manajer","IT Analis","IT Jaringan","IT Adm Database","IT Programmer"};
	double jmlAnak[15] = {2,0,4,7,0,   0,5,1,2,0,   3,0,0,2,6};
//	double masaKerja[15] = {23,18,13,8,4,   22, 17,12,7,3,   21,16,11,6,2};
//	double jmlAnak[15]= {2,0,4,7,0,   0,5,1,2,0,   3,0,0,2,6}
	
	//data rumus
	double gapok[15], tunjAnak[15], tunjIstri[15];
	string bonusAkhir[15], tunjJabatanTabel[15], bonusAkhirSn[15];
	double totBonus[15], gaber[15], budgetAkhir[15];
	
	int tahunSekarang = 2023;
	int tahunMasuk[15] = {2000,2005,2010,2015,2019, 2001,2006,2011,2016,2020, 2002,2007,2012,2017,2021}; 
	int masaKerja[15];
	
	double tambahanTunjAnak[15], tunjJabatan[15];
	
	
void tabel1(){
	
	gotoxy(40,0);cout<<"Laporan Rekapitulasi Bonus dan Bajet akhir tahun PT.ABC";
	
	gotoxy(1,2);cout<<"HALAMAN : 1";
	gotoxy(1,3);cout<<"====================================================================================================================";
	gotoxy(1,4);cout<<"|NO| NAMA |JNS KELMN| STATUS |JML ANAK|GAJI POKOK|TUN JABATAN|MASA KERJA|   BNS AKH-TAHUN    |TOT BNS    |  GABER  |";
	gotoxy(1,5);cout<<"====================================================================================================================";

	for(int i = 1; i <= 5; i++)
	{	
		gotoxy(1,5+i);
		cout<<"|  |      |         |        |        |          |           |          |                    |           |         |";
	}
	gotoxy(1,11);cout<<"====================================================================================================================";
	gotoxy(1,12);cout<<"Jumlah karyawan yang mendapat Bonus Akhir thn `Singapura & Malaysia` \t\t\t: ";
	gotoxy(1,13);cout<<"Jumlah karyawan yang mendapat Bonus Akhir thn `Malaysia WakaTobi & Raja Ampat` \t:";
	gotoxy(1,14);cout<<"Jumlah karyawan yang mendapat Bonus Akhir thn `Lembah Arraw & Pulau Mandeh` \t\t:";
	gotoxy(1,15);cout<<"Jumlah karyawan yang mendapat Bonus Akhir thn `Bali, PulauDewata` \t\t\t:";
	gotoxy(1,16);cout<<"Jumlah karyawan yang mendapat Bonus Akhir thn `PutriDuyung Park Ancol` \t\t: ";
	
}

void input1(){
	for (int i = 0; i < 5; i++){
		
		gotoxy(2,6+i);cout<<i+1;
		
		gotoxy(5,6+i);cout << nama[i];
		
		gotoxy(12,6+i);cout << jenkel[i];
		
		gotoxy(22,6+i);cout << status[i];
		
		gotoxy(34,6+i);cout << jmlAnak[i];
		
		if(jabatan[i]=="IT Manajer"){
			gapok[i]=15000000;
			tunjJabatan[i]=0.35 * gapok[i];
			tunjJabatanTabel[i]="35%";
			if(status[i]=="Menikah" && jenkel[i]=="Laki-laki"){
				tunjAnak[i] = (0.3 * gapok[i]) *jmlAnak[i];
				tunjIstri[i] = (0.25 * gapok[i]);
			} else if (status[i]=="Single" && jenkel[i]=="Laki-laki"){
				tunjAnak[i] = 0;
				tunjIstri[i] = 0;
			} else if (status[i]=="Menikah" && jenkel[i]=="Perempuan"){
				tunjAnak[i] = (0.35 * gapok[i]) *jmlAnak[i];
				tunjIstri[i] = 0;
			} else if (status[i]=="Single" && jenkel[i]=="Perempuan"){
				tunjAnak[i] = 0;
				tunjIstri[i] = 0;
			}
		} else if (jabatan[i]=="IT Analis"){
			gapok[i]=12000000;
			tunjJabatan[i]=0.3 * gapok[i];
			tunjJabatanTabel[i]="30%";
			if(status[i]=="Menikah" && jenkel[i]=="Laki-laki"){
				tunjAnak[i] = (0.25 * gapok[i]) *jmlAnak[i];
				tunjIstri[i] = (0.2 * gapok[i]);
			} else if (status[i]=="Single" && jenkel[i]=="Laki-laki"){
				tunjAnak[i] = 0;
				tunjIstri[i] = 0;
			} else if (status[i]=="Menikah" && jenkel[i]=="Perempuan"){
				tunjAnak[i] = (0.3 * gapok[i]) *jmlAnak[i];
				tunjIstri[i] = 0;
			} else if (status[i]=="Single" && jenkel[i]=="Perempuan"){
				tunjAnak[i] = 0;
				tunjIstri[i] = 0;
			}
		} else if (jabatan[i]=="IT Programmer"){
			gapok[i]=10000000;
			tunjJabatan[i]=0.25 * gapok[i];
			tunjJabatanTabel[i]="25%";
			if(status[i]=="Menikah" && jenkel[i]=="Laki-laki"){
				tunjAnak[i] = (0.2 * gapok[i]) *jmlAnak[i];
				tunjIstri[i] = (0.15 * gapok[i]);
			} else if (status[i]=="Single" && jenkel[i]=="Laki-laki"){
				tunjAnak[i] = 0;
				tunjIstri[i] = 0;
			} else if (status[i]=="Menikah" && jenkel[i]=="Perempuan"){
				tunjAnak[i] = (0.2 * gapok[i]) *jmlAnak[i];
				tunjIstri[i] = 0;
			} else if (status[i]=="Single" && jenkel[i]=="Perempuan"){
				tunjAnak[i] = 0;
				tunjIstri[i] = 0;
			}
		} else if (jabatan[i]=="IT Jaringan"){
			gapok[i]=8000000;
			tunjJabatan[i]=0.2 * gapok[i];
			tunjJabatanTabel[i]="20%";
			if(status[i]=="Menikah" && jenkel[i]=="Laki-laki"){
				tunjAnak[i] = (0.15 * gapok[i]) *jmlAnak[i];
				tunjIstri[i] = (0.1 * gapok[i]);
			} else if (status[i]=="Single" && jenkel[i]=="Laki-laki"){
				tunjAnak[i] = 0;
				tunjIstri[i] = 0;
			} else if (status[i]=="Menikah" && jenkel[i]=="Perempuan"){
				tunjAnak[i] = (0.18 * gapok[i]) *jmlAnak[i];
				tunjIstri[i] = 0;
			} else if (status[i]=="Single" && jenkel[i]=="Perempuan"){
				tunjAnak[i] = 0;
				tunjIstri[i] = 0;
			}
		} else if (jabatan[i]=="IT Adm Database"){
			gapok[i]=6000000;
			tunjJabatan[i]=0.15 * gapok[i];
			tunjJabatanTabel[i]="15%";
			if(status[i]=="Menikah" && jenkel[i]=="Laki-laki"){
				tunjAnak[i] = (0.1 * gapok[i]) *jmlAnak[i];
				tunjIstri[i] = (0.05 * gapok[i]);
			} else if (status[i]=="Single" && jenkel[i]=="Laki-laki"){
				tunjAnak[i] = 0;
				tunjIstri[i] = 0;
			} else if (status[i]=="Menikah" && jenkel[i]=="Perempuan"){
				tunjAnak[i] = (0.15 * gapok[i]) *jmlAnak[i];
				tunjIstri[i] = 0;
			} else if (status[i]=="Single" && jenkel[i]=="Laki-laki"){
				tunjAnak[i] = 0;
				tunjIstri[i] = 0;
			}
		}
		
		masaKerja[i] = tahunSekarang - tahunMasuk[i];
		
		gotoxy(40,6+i);cout << setprecision(10) << gapok[i];
		gotoxy(55,6+i);cout << tunjJabatanTabel[i];
		gotoxy(64,6+i);cout << masaKerja[i] << " tahun";
		
		if(masaKerja[i]>=20){
			bonusAkhir[i] = "Singapura & Malaysia";
			bonusAkhirSn[i] = "S&M";
			budgetAkhir[i] = 0.45 * gapok[i];
		} else if (masaKerja[i]>=15){
			bonusAkhir[i] = "WakaTobi & RajaAmpat";
			bonusAkhirSn[i] = "WT&RA";
			budgetAkhir[i] = 0.4 * gapok[i];
		} else if(masaKerja[i]>=10){
			bonusAkhir[i] = "LembahArraw&P.Mandeh";
			bonusAkhirSn[i] = "LA&PM";
			budgetAkhir[i] = 0.35 * gapok[i];
		} else if(masaKerja[i]>=5){
			bonusAkhir[i] = "Bali, P.Dewata";
			bonusAkhirSn[i] = "Bali";
			budgetAkhir[i] = 0.30 * gapok[i];
		} else {
			bonusAkhir[i] = "PutriDuyung Ancol";
			bonusAkhirSn[i] = "Ancol";
			budgetAkhir[i] = 0.25 * gapok[i];
		}
		
		gotoxy(74,6+i);cout << bonusAkhir[i];
		
		totBonus[i] = budgetAkhir[i] + tunjJabatan[i] + tunjIstri[i] + tunjAnak[i];
		gaber[i] = totBonus[i] + gapok[i];
		
		gotoxy(95,6+i);cout <<totBonus[i];
		gotoxy(107,6+i);cout << gaber[i];
		
}
}
	
int main(){
	tabel1();
	input1();
	//return 0;
system("pause>0");
}
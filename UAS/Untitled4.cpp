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

	//data input
	string nama[15] = {"Arina","Deby","Rais","Hilmi","Kevin","Sandy","Lidya","Irgi","Nabil","Chika","Rafi","Jody","Starly","Kelly","Hadasa"};
	string jenkel[15] = {"Perempuan","Perempuan","Laki-laki","Laki-laki","Laki-laki","Laki-laki","Perempuan","Laki-laki","Laki-laki","Perempuan","Laki-laki","Laki-laki","Perempuan","Perempuan","Perempuan"};
	string status[15] = {"Menikah","Single","Menikah","Menikah","Single","Single","Menikah","Menikah","Menikah","Single","Menikah","Single","Single","Menikah","Menikah"};
	string jabatan[15] = {"IT Manajer","IT Analis","IT Programmer","IT Jaringan","IT Adm Database","IT Manajer","IT Programmer","IT Analis","IT Adm Database","IT Jaringan","IT Manajer","IT Analis","IT Jaringan","IT Adm Database","IT Programmer"};
	double jmlAnak[15] = {2,0,4,7,0,0,5,1,2,0,3,0,0,2,6};

	//data rumus
	double gapok[15], tunjAnak[15], tunjIstri[15];
	string bonusAkhir[15], tunjJabatanTabel[15];
	double totBonus[15], gaber[15], budgetAkhir[15];
	
	int tahunSekarang = 2023;
	int tahunMasuk[15] = {2000,2005,2010,2015,2019, 2001,2006,2011,2016,2020, 2002,2007,2012,2017,2021}; 
	int masaKerja[15], jmlOrg1[3]={1,1,1}, jmlOrg2[3]={1,1,1}, jmlOrg3[3]={1,1,1}, jmlOrg4[3]={1,1,1}, jmlOrg5[3]={1,1,1};

	double tunjJabatan[15], totJmlOrg1=0, totJmlOrg2=0, totJmlOrg3=0, totJmlOrg4=0, totJmlOrg5=0; 
	
	
void tabel1(){
	
	gotoxy(33,0);cout<<"Laporan Rekapitulasi Bonus dan Bajet akhir tahun PT.ABC";
	
	gotoxy(1,2);cout<<"HALAMAN : 1";
	gotoxy(1,3);cout<<"====================================================================================================================";
	gotoxy(1,4);cout<<"|NO| NAMA |JNS KELMN| STATUS |JML ANAK|GAJI POKOK|TUN JABATAN|MASA KERJA|   BNS AKH-TAHUN    |TOT BNS    |  GABER  |";
	gotoxy(1,5);cout<<"====================================================================================================================";

	for(int i = 0; i < 5; i++)
	{	
		gotoxy(1,6+i);
		cout<<"|  |      |         |        |        |          |           |          |                    |           |         |";
	}
	gotoxy(1,11);cout<<"====================================================================================================================";
	gotoxy(1,13);cout<<"Jumlah karyawan yang mendapat Bonus Akhir thn `Singapura & Malaysia` \t\t\t: ";
	gotoxy(1,14);cout<<"Jumlah karyawan yang mendapat Bonus Akhir thn `Malaysia WakaTobi & Raja Ampat` \t:";
	gotoxy(1,15);cout<<"Jumlah karyawan yang mendapat Bonus Akhir thn `Lembah Arraw & Pulau Mandeh` \t\t:";
	gotoxy(1,16);cout<<"Jumlah karyawan yang mendapat Bonus Akhir thn `Bali, PulauDewata` \t\t\t:";
	gotoxy(1,17);cout<<"Jumlah karyawan yang mendapat Bonus Akhir thn `PutriDuyung Park Ancol` \t\t: ";
	
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
			budgetAkhir[i] = 0.45 * gapok[i];
		} else if (masaKerja[i]>=15){
			bonusAkhir[i] = "WakaTobi & RajaAmpat";
			budgetAkhir[i] = 0.4 * gapok[i];
		} else if(masaKerja[i]>=10){
			bonusAkhir[i] = "LembahArraw&P.Mandeh";
			budgetAkhir[i] = 0.35 * gapok[i];
		} else if(masaKerja[i]>=5){
			bonusAkhir[i] = "Bali, P.Dewata";
			budgetAkhir[i] = 0.30 * gapok[i];
		} else {
			bonusAkhir[i] = "PutriDuyung Ancol";
			budgetAkhir[i] = 0.25 * gapok[i];
		}
		
		gotoxy(74,6+i);cout << bonusAkhir[i];
		
		totBonus[i] = budgetAkhir[i] + tunjJabatan[i] + tunjIstri[i] + tunjAnak[i];
		gaber[i] = totBonus[i] + gapok[i];
		
		gotoxy(95,6+i);cout <<totBonus[i];
		gotoxy(107,6+i);cout << gaber[i];
		
		gotoxy(90,13);cout<<jmlOrg1[0]<< " orang";
		gotoxy(90,14);cout<<jmlOrg2[0]<< " orang";
		gotoxy(90,15);cout<<jmlOrg3[0]<< " orang";
		gotoxy(90,16);cout<<jmlOrg4[0]<< " orang";
		gotoxy(90,17);cout<<jmlOrg5[0]<< " orang";
		
	}
}

void tabel2(){
	
	gotoxy(33,20);cout<<"Laporan Rekapitulasi Bonus dan Bajet akhir tahun PT.ABC";
	
	gotoxy(1,22);cout<<"HALAMAN : 2";
	gotoxy(1,23);cout<<"====================================================================================================================";
	gotoxy(1,24);cout<<"|NO| NAMA |JNS KELMN| STATUS |JML ANAK|GAJI POKOK|TUN JABATAN|MASA KERJA|   BNS AKH-TAHUN    |TOT BNS    |  GABER  |";
	gotoxy(1,25);cout<<"====================================================================================================================";

	for(int i = 5; i < 10; i++)
	{	
		gotoxy(1,21+i);
		cout<<"|  |      |         |        |        |          |           |          |                    |           |         |";
	}
	gotoxy(1,31);cout<<"====================================================================================================================";
	gotoxy(1,33);cout<<"Jumlah karyawan yang mendapat Bonus Akhir thn `Singapura & Malaysia` \t\t\t: ";
	gotoxy(1,34);cout<<"Jumlah karyawan yang mendapat Bonus Akhir thn `Malaysia WakaTobi & Raja Ampat` \t:";
	gotoxy(1,35);cout<<"Jumlah karyawan yang mendapat Bonus Akhir thn `Lembah Arraw & Pulau Mandeh` \t\t:";
	gotoxy(1,36);cout<<"Jumlah karyawan yang mendapat Bonus Akhir thn `Bali, PulauDewata` \t\t\t:";
	gotoxy(1,37);cout<<"Jumlah karyawan yang mendapat Bonus Akhir thn `PutriDuyung Park Ancol` \t\t: ";
	
}

void input2(){
	for (int i =5; i < 10; i++){
		
		gotoxy(2,21+i);cout<<i-4;
		gotoxy(5,21+i);cout << nama[i];
		gotoxy(12,21+i);cout << jenkel[i];
		gotoxy(22,21+i);cout << status[i];
		gotoxy(34,21+i);cout << jmlAnak[i];
		
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
		
		gotoxy(40,21+i);cout << setprecision(10) << gapok[i];
		gotoxy(55,21+i);cout << tunjJabatanTabel[i];
		gotoxy(64,21+i);cout << masaKerja[i] << " tahun";
		
		if(masaKerja[i]>=20){
			bonusAkhir[i] = "Singapura & Malaysia";
			budgetAkhir[i] = 0.45 * gapok[i];
		} else if (masaKerja[i]>=15){
			bonusAkhir[i] = "WakaTobi & RajaAmpat";
			budgetAkhir[i] = 0.4 * gapok[i];
		} else if(masaKerja[i]>=10){
			bonusAkhir[i] = "LembahArraw&P.Mandeh";
			budgetAkhir[i] = 0.35 * gapok[i];
		} else if(masaKerja[i]>=5){
			bonusAkhir[i] = "Bali, P.Dewata";
			budgetAkhir[i] = 0.30 * gapok[i];
		} else {
			bonusAkhir[i] = "PutriDuyung Ancol";
			budgetAkhir[i] = 0.25 * gapok[i];
		}
		
		gotoxy(74,21+i);cout << bonusAkhir[i];
		
		totBonus[i] = budgetAkhir[i] + tunjJabatan[i] + tunjIstri[i] + tunjAnak[i];
		gaber[i] = totBonus[i] + gapok[i];
		
		gotoxy(95,21+i);cout <<totBonus[i];
		gotoxy(107,21+i);cout << gaber[i];
		
		gotoxy(90,33);cout<<jmlOrg1[1]<< " orang";
		gotoxy(90,34);cout<<jmlOrg2[1]<< " orang";
		gotoxy(90,35);cout<<jmlOrg3[1]<< " orang";
		gotoxy(90,36);cout<<jmlOrg4[1]<< " orang";
		gotoxy(90,37);cout<<jmlOrg5[1]<< " orang";
	}
}

void tabel3(){
	
	gotoxy(33,40);cout<<"Laporan Rekapitulasi Bonus dan Bajet akhir tahun PT.ABC";
	
	gotoxy(1,42);cout<<"HALAMAN : 3";
	gotoxy(1,43);cout<<"====================================================================================================================";
	gotoxy(1,44);cout<<"|NO| NAMA |JNS KELMN| STATUS |JML ANAK|GAJI POKOK|TUN JABATAN|MASA KERJA|   BNS AKH-TAHUN    |TOT BNS    |  GABER  |";
	gotoxy(1,45);cout<<"====================================================================================================================";

	for(int i = 10; i < 15; i++)
	{	
		gotoxy(1,36+i);
		cout<<"|  |      |         |        |        |          |           |          |                    |           |         |";
	}
	gotoxy(1,51);cout<<"====================================================================================================================";
	gotoxy(1,53);cout<<"Jumlah karyawan yang mendapat Bonus Akhir thn `Singapura & Malaysia` \t\t\t: ";
	gotoxy(1,54);cout<<"Jumlah karyawan yang mendapat Bonus Akhir thn `Malaysia WakaTobi & Raja Ampat` \t:";
	gotoxy(1,55);cout<<"Jumlah karyawan yang mendapat Bonus Akhir thn `Lembah Arraw & Pulau Mandeh` \t\t:";
	gotoxy(1,56);cout<<"Jumlah karyawan yang mendapat Bonus Akhir thn `Bali, PulauDewata` \t\t\t:";
	gotoxy(1,57);cout<<"Jumlah karyawan yang mendapat Bonus Akhir thn `PutriDuyung Park Ancol` \t\t: ";
	
}

void input3(){
	for (int i = 10; i < 15; i++){
		
		gotoxy(2,36+i);cout<<i-9;
		gotoxy(5,36+i);cout << nama[i];
		gotoxy(12,36+i);cout << jenkel[i];
		gotoxy(22,36+i);cout << status[i];
		gotoxy(34,36+i);cout << jmlAnak[i];
		
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
		
		gotoxy(40,36+i);cout << setprecision(10) << gapok[i];
		gotoxy(55,36+i);cout << tunjJabatanTabel[i];
		gotoxy(64,36+i);cout << masaKerja[i] << " tahun";
		
		if(masaKerja[i]>=20){
			bonusAkhir[i] = "Singapura & Malaysia";
			budgetAkhir[i] = 0.45 * gapok[i];
		} else if (masaKerja[i]>=15){
			bonusAkhir[i] = "WakaTobi & RajaAmpat";
			budgetAkhir[i] = 0.4 * gapok[i];
		} else if(masaKerja[i]>=10){
			bonusAkhir[i] = "LembahArraw&P.Mandeh";
			budgetAkhir[i] = 0.35 * gapok[i];
		} else if(masaKerja[i]>=5){
			bonusAkhir[i] = "Bali, P.Dewata";
			budgetAkhir[i] = 0.30 * gapok[i];
		} else {
			bonusAkhir[i] = "PutriDuyung Ancol";
			budgetAkhir[i] = 0.25 * gapok[i];
		}
		
		gotoxy(74,36+i);cout << bonusAkhir[i];
		
		totBonus[i] = budgetAkhir[i] + tunjJabatan[i] + tunjIstri[i] + tunjAnak[i];
		gaber[i] = totBonus[i] + gapok[i];
		
		gotoxy(95,36+i);cout <<totBonus[i];
		gotoxy(107,36+i);cout << gaber[i];
		
		gotoxy(90,53);cout<<jmlOrg1[2]<< " orang";
		gotoxy(90,54);cout<<jmlOrg2[2]<< " orang";
		gotoxy(90,55);cout<<jmlOrg3[2]<< " orang";
		gotoxy(90,56);cout<<jmlOrg4[2]<< " orang";
		gotoxy(90,57);cout<<jmlOrg5[2]<< " orang";
		
	}
}

void total(){
	for(int i=0; i<3 ; i++){
		totJmlOrg1 = totJmlOrg1 + jmlOrg1[i];
		totJmlOrg2 = totJmlOrg2 + jmlOrg2[i];
		totJmlOrg3 = totJmlOrg3 + jmlOrg3[i];
		totJmlOrg4 = totJmlOrg4 + jmlOrg4[i];
		totJmlOrg5 = totJmlOrg5 + jmlOrg5[i];
		
		gotoxy(1,60);cout<<"Total Akhir [Seluruhnya] dari \t: ";
		
		gotoxy(1,62);cout<<"Jumlah seluruh karyawan yang mendapat Bonus Akhir thn `Singapura & Malaysia` \t\t: ";
		gotoxy(1,63);cout<<"Jumlah seluruh karyawan yang mendapat Bonus Akhir thn `Malaysia WakaTobi & Raja Ampat` :";
		gotoxy(1,64);cout<<"Jumlah seluruh karyawan yang mendapat Bonus Akhir thn `Lembah Arraw & Pulau Mandeh` \t:";
		gotoxy(1,65);cout<<"Jumlah seluruh karyawan yang mendapat Bonus Akhir thn `Bali, PulauDewata` \t\t:";
		gotoxy(1,66);cout<<"Jumlah seluruh karyawan yang mendapat Bonus Akhir thn `PutriDuyung Park Ancol` \t: ";
	
		gotoxy(90,62);cout<<totJmlOrg1<< " orang";
		gotoxy(90,63);cout<<totJmlOrg2<< " orang";
		gotoxy(90,64);cout<<totJmlOrg3<< " orang";
		gotoxy(90,65);cout<<totJmlOrg4<< " orang";
		gotoxy(90,66);cout<<totJmlOrg5<< " orang";
	}
}
	
int main(){
	
	tabel1();
	input1();
	tabel2();
	input2();
	tabel3();
	input3();
	total();
	cout<<endl;
	//return 0;
	system("pause>0");
	
}
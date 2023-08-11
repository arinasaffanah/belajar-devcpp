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

/*
	to do :
	1. ganti var globe, ke masing2 void saja
	2. ganti rumus perhitungan (alias gaji)

*/


//deklarasi w/ global scope

	int i = 1, j=1, k = 1, jmlAnak[6];
	double masaKerja[6], sanksi[6],mkTabel[6], sanksiTabel[6];
	string jwb, nip[6], nama[6], status[6];
	string jabatan[6] = {"Direktur", "Direktur", "Direktur", "Direktur", "Direktur", "Direktur"};
	double bonus[6], tunjAnak[6], gajiBersih [6];
	double gaji[6] = {20000000, 20000000, 20000000, 20000000, 20000000, 20000000};
	string gajiTabel[6] = {"20000000", "20000000", "20000000", "20000000", "20000000", "20000000"};
	string bonusString[6], tunjAnakString[6], gajiBersihString [6];
	double totGaji = 0, totBonus = 0, totTunjAnak = 0, totGajiBersih = 0;
	
	//potongan gaji karyawan u/ menghitung gaji bersih
	//hanya potongan iuran BPJS
	double ijk = 0.05,  ijkk = 0.00174, ijkm = 0.003, ijht = 0.057, ijp = 0.03;
	double jk[6], jkk[6], jkm[6], jht[6], jp[6];
	


void tabel1(){
	gotoxy(40,0);cout<<"Rekapitulasi Bonus AkhirTahun Karyawan PT.AnginRibut";
	
	gotoxy(1,21);cout<<"[JABATAN : DIREKTUR]";
	gotoxy(108,21);cout<<"HALAMAN 1";
	gotoxy(1,22);cout<<"====================================================================================================================";
	gotoxy(1,23);cout<<"| NO |  NIP  |     NAMA     | STATUS | JML ANAK | JABATAN |    GAJI    | BONUS Akh-TAHUN | TUNJ ANAK | GAJI BERSIH | ";
	gotoxy(1,24);cout<<"====================================================================================================================";

	for(int i = 1; i <= 5; i++)
	{	
		gotoxy(1,24+i);
		cout<<"|    |       |              |        |          |         |            |                 |           |             | ";
	}
	gotoxy(1,30);cout<<"====================================================================================================================";
	gotoxy(1,31);cout<<"|                                                                              TOTAL GAJI|                         | ";
	gotoxy(1,32);cout<<"|                                                                   TOTAL TUNJANGAN ISTRI|                         | ";
	gotoxy(1,33);cout<<"|                                                                    TOTAL TUNJANGAN ANAK|                         | ";
	gotoxy(1,34);cout<<"|                                                                       TOTAL GAJI BERSIH|                         | ";
	gotoxy(1,35);cout<<"====================================================================================================================";
}

void tabel2(){
	
	gotoxy(1,39);cout<<"[JABATAN : WAKIL DIREKTUR]";
	gotoxy(108,39);cout<<"HALAMAN 2";
	gotoxy(1,40);cout<<"====================================================================================================================";
	gotoxy(1,41);cout<<"| NO |  NIP  |     NAMA     | STATUS | JML ANAK | JABATAN |    GAJI    | BONUS Akh-TAHUN | TUNJ ANAK | GAJI BERSIH | ";
	gotoxy(1,42);cout<<"====================================================================================================================";

	for(int i = 1; i <= 5; i++)
	{	
		gotoxy(1,42+i);
		cout<<"|    |       |              |        |          |         |            |                 |           |             | ";
	}
	gotoxy(1,48);cout<<"====================================================================================================================";
	gotoxy(1,49);cout<<"|                                                                              TOTAL GAJI|                         | ";
	gotoxy(1,50);cout<<"|                                                                             TOTAL BONUS|                         | ";
	gotoxy(1,51);cout<<"|                                                                    TOTAL TUNJANGAN ANAK|                         | ";
	gotoxy(1,52);cout<<"|                                                                       TOTAL GAJI BERSIH|                         | ";
	gotoxy(1,53);cout<<"====================================================================================================================";
}

void tabel3(){
	
	gotoxy(1,57);cout<<"[JABATAN : MANAJER]";
	gotoxy(108,57);cout<<"HALAMAN 3";
	gotoxy(1,58);cout<<"====================================================================================================================";
	gotoxy(1,59);cout<<"| NO |  NIP  |     NAMA     | STATUS | JML ANAK | JABATAN |    GAJI    | BONUS Akh-TAHUN | TUNJ ANAK | GAJI BERSIH | ";
	gotoxy(1,60);cout<<"====================================================================================================================";

	for(int i = 1; i <= 5; i++)
	{	
		gotoxy(1,60+i);
		cout<<"|    |       |              |        |          |         |            |                 |           |             | ";
	}
	gotoxy(1,66);cout<<"====================================================================================================================";
	gotoxy(1,67);cout<<"|                                                                              TOTAL GAJI|                         | ";
	gotoxy(1,68);cout<<"|                                                                             TOTAL BONUS|                         | ";
	gotoxy(1,69);cout<<"|                                                                    TOTAL TUNJANGAN ANAK|                         | ";
	gotoxy(1,70);cout<<"|                                                                       TOTAL GAJI BERSIH|                         | ";
	gotoxy(1,71);cout<<"====================================================================================================================";
}

void input1(){
	
	do {
		
		gotoxy(3,24+i);cout<<i;
		
		gotoxy(1,2);cout<<"Masukkan NIP \t\t\t= ";
		cin >> nip[i];
		gotoxy(7,24+i);cout << nip[i];
		
		gotoxy(1,3);cout<<"Masukkan nama \t\t\t= ";
		cin >> nama[i];
		gotoxy(15,24+i);cout << nama[i];
		
		gotoxy(1,4);cout<<"Masukkan status (SM/BM) \t= ";
		cin >> status[i];
		gotoxy(33,24+i);cout << status[i];
		
		gotoxy(1,5);cout<<"Masukkan jumlah anak \t\t= ";
		cin >> jmlAnak[i];
		gotoxy(43,24+i);cout << jmlAnak[i];
		
		
		gotoxy(1,6);cout<<"Masa kerja : 	\t\t1. < 1 tahun\n\t\t\t\t2. 1-4 tahun\n\t\t\t\t3. 5-9 tahun\n\t\t\t\t4. >= 10 tahun";
		gotoxy(1,10);cout<<"Pilih angka yang sesuai \t= ";
		cin >> masaKerja[i];
		if (masaKerja[i]==1){
			mkTabel[i] = 0.8;
		} else if (masaKerja[i]==2){
			mkTabel[i] = 0.9;
		} else if (masaKerja[i]==3){
			mkTabel[i] = 1;
		} else if (masaKerja[i]==4){
			mkTabel[i] = 1.2;
		} else {
		}
		
		gotoxy(1,11);cout<<"sanksi surat peringatan :	1. tanpa sanksi\n\t\t\t\t2. SP I\n\t\t\t\t3. SP II\n\t\t\t\t4. SP III";
		gotoxy(1,15);cout<<"Pilih angka yang sesuai \t= ";
		cin >> sanksi[i];
		if (sanksi[i]==1){
			sanksiTabel[i] = 1;
		} else if (sanksi[i]==2){
			sanksiTabel[i] = 0.9;
		} else if (sanksi[i]==3){
			sanksiTabel[i] = 0.8;
		} else if (sanksi[i]==4){
			sanksiTabel[i] = 0.7;
		} else {
		}
		
		
		gotoxy(50,24+i);cout << jabatan[i];
		
		gotoxy(60,24+i);cout << setprecision(10) << gaji[i] ;
		
		bonus[i] = (mkTabel[i] * 1.2 * 1 * gaji[i]) * sanksiTabel[i];
		//bonusString[i] = to_string(bonus[i]);
		
		gotoxy(73,24+i);cout << bonus[i];
		
		
		tunjAnak[i] = (gaji[i] * 0.02) * jmlAnak[i];
		//tunjAnakString[i] = to_string(tunjAnak[i]);
		
		gotoxy(91,24+i);cout << tunjAnak[i];
		
		
		jk[i] = ijk * gaji[i];
		jkk[i] = ijkk * gaji[i];
		jkm[i] = ijkm * gaji[i];
		jht[i] = ijht * gaji[i];
		jp[i] = ijp * gaji[i];
		gajiBersih[i] = (gaji[i] + bonus[i] + tunjAnak[i]) - (jk[i] + jkk[i] + jkm[i] + jht[i] + jp[i]);

		gotoxy(103,24+i);cout << gajiBersih[i];
		
		totGaji = totGaji + gaji[i];
		gotoxy(100,31);cout << totGaji;
		
		totBonus = totBonus + bonus[i];
		gotoxy(100,32);cout << totBonus;
		
		totTunjAnak = totTunjAnak + tunjAnak[i];
		gotoxy(100,33);cout << totTunjAnak;
		
		totGajiBersih = totGajiBersih + gajiBersih[i];
		gotoxy(100,34);cout << totGajiBersih;

		
		gotoxy(1,17);cout<<"Isi data lagi? [Y/T] \t\t= ";
		cin >> jwb;
		i++;

		gotoxy(34,2);cout<<"                     ";
		gotoxy(34,3);cout<<"                     ";
		gotoxy(34,4);cout<<"                     ";
		gotoxy(34,5);cout<<"                     ";
		gotoxy(34,10);cout<<"                     ";
		gotoxy(34,15);cout<<"                     ";
		gotoxy(34,17);cout<<"                     ";
 	
		} while((jwb=="y" || jwb=="Y") & i <= 5 );
}

void input2(){
	
	double totGaji2 = 0, totBonus2 = 0, totTunjAnak2 = 0, totGajiBersih2 = 0;
	
	do {
		
		gotoxy(3,42+j);cout<<j;
		
		gotoxy(1,2);cout<<"Masukkan NIP \t\t\t= ";
		cin >> nip[j];
		gotoxy(7,42+j);cout << nip[j];
		
		gotoxy(1,3);cout<<"Masukkan nama \t\t\t= ";
		cin >> nama[j];
		gotoxy(15,42+j);cout << nama[j];
		
		gotoxy(1,4);cout<<"Masukkan status (SM/BM) \t= ";
		cin >> status[j];
		gotoxy(33,42+j);cout << status[j];
		
		gotoxy(1,5);cout<<"Masukkan jumlah anak \t\t= ";
		cin >> jmlAnak[j];
		gotoxy(43,42+j);cout << jmlAnak[j];
		
		
		gotoxy(1,6);cout<<"Masa kerja : 	\t\t1. < 1 tahun\n\t\t\t\t2. 1-4 tahun\n\t\t\t\t3. 5-9 tahun\n\t\t\t\t4. >= 10 tahun";
		gotoxy(1,10);cout<<"Pilih angka yang sesuai \t= ";
		cin >> masaKerja[j];
		if (masaKerja[j]==1){
			mkTabel[j] = 0.8;
		} else if (masaKerja[i]==2){
			mkTabel[j] = 0.9;
		} else if (masaKerja[i]==3){
			mkTabel[j] = 1;
		} else if (masaKerja[i]==4){
			mkTabel[j] = 1.2;
		} else {
		}
		
		gotoxy(1,11);cout<<"sanksi surat peringatan :	1. tanpa sanksi\n\t\t\t\t2. SP I\n\t\t\t\t3. SP II\n\t\t\t\t4. SP III";
		gotoxy(1,15);cout<<"Pilih angka yang sesuai \t= ";
		cin >> sanksi[j];
		if (sanksi[j]==1){
			sanksiTabel[j] = 1;
		} else if (sanksi[j]==2){
			sanksiTabel[j] = 0.9;
		} else if (sanksi[j]==3){
			sanksiTabel[j] = 0.8;
		} else if (sanksi[j]==4){
			sanksiTabel[j] = 0.7;
		} else {
		}
		
		
		gotoxy(50,42+j);cout << jabatan[j];
		
		gotoxy(60,42+j);cout << setprecision(10) << gaji[j] ;
		
		bonus[j] = (mkTabel[j] * 1.2 * 1 * gaji[j]) * sanksiTabel[j];
		//bonusString[i] = to_string(bonus[i]);
		
		gotoxy(73,42+j);cout << bonus[j];
		
		
		tunjAnak[j] = (gaji[j] * 0.02) * jmlAnak[j];
		//tunjAnakString[i] = to_string(tunjAnak[i]);
		
		gotoxy(91,42+j);cout << tunjAnak[j];
		
		
		jk[j] = ijk * gaji[j];
		jkk[j] = ijkk * gaji[j];
		jkm[j] = ijkm * gaji[j];
		jht[j] = ijht * gaji[j];
		jp[j] = ijp * gaji[j];
		gajiBersih[j] = (gaji[j] + bonus[j] + tunjAnak[j]) - (jk[j] + jkk[j] + jkm[j] + jht[j] + jp[j]);

		gotoxy(103,42+j);cout << gajiBersih[j];
		
		totGaji2 = totGaji2 + gaji[j];
		gotoxy(100,49);cout << totGaji2;
		
		totBonus2 = totBonus2 + bonus[j];
		gotoxy(100,50);cout << totBonus2;
		
		totTunjAnak2 = totTunjAnak2 + tunjAnak[j];
		gotoxy(100,51);cout << totTunjAnak2;
		
		totGajiBersih2 = totGajiBersih2 + gajiBersih[j];
		gotoxy(100,52);cout << totGajiBersih2;

		
		gotoxy(1,17);cout<<"Isi data lagi? [Y/T] \t\t= ";
		cin >> jwb;
		j++;

		gotoxy(34,2);cout<<"                     ";
		gotoxy(34,3);cout<<"                     ";
		gotoxy(34,4);cout<<"                     ";
		gotoxy(34,5);cout<<"                     ";
		gotoxy(34,10);cout<<"                     ";
		gotoxy(34,15);cout<<"                     ";
		gotoxy(34,17);cout<<"                     ";
 	
		} while((jwb=="y" || jwb=="Y") & j <= 5 );
}

void input3(){
	
	double totGaji3 = 0, totBonus3 = 0, totTunjAnak3 = 0, totGajiBersih3 = 0;
	
	do {
		
		gotoxy(3,60+k);cout<<k;
		
		gotoxy(1,2);cout<<"Masukkan NIP \t\t\t= ";
		cin >> nip[k];
		gotoxy(7,60+k);cout << nip[k];
		
		gotoxy(1,3);cout<<"Masukkan nama \t\t\t= ";
		cin >> nama[k];
		gotoxy(15,60+k);cout << nama[k];
		
		gotoxy(1,4);cout<<"Masukkan status (SM/BM) \t= ";
		cin >> status[k];
		gotoxy(33,60+k);cout << status[k];
		
		gotoxy(1,5);cout<<"Masukkan jumlah anak \t\t= ";
		cin >> jmlAnak[k];
		gotoxy(43,60+k);cout << jmlAnak[k];
		
		
		gotoxy(1,6);cout<<"Masa kerja : 	\t\t1. < 1 tahun\n\t\t\t\t2. 1-4 tahun\n\t\t\t\t3. 5-9 tahun\n\t\t\t\t4. >= 10 tahun";
		gotoxy(1,10);cout<<"Pilih angka yang sesuai \t= ";
		cin >> masaKerja[k];
		if (masaKerja[k]==1){
			mkTabel[k] = 0.8;
		} else if (masaKerja[i]==2){
			mkTabel[k] = 0.9;
		} else if (masaKerja[i]==3){
			mkTabel[k] = 1;
		} else if (masaKerja[i]==4){
			mkTabel[k] = 1.2;
		} else {
		}
		
		gotoxy(1,11);cout<<"sanksi surat peringatan :	1. tanpa sanksi\n\t\t\t\t2. SP I\n\t\t\t\t3. SP II\n\t\t\t\t4. SP III";
		gotoxy(1,15);cout<<"Pilih angka yang sesuai \t= ";
		cin >> sanksi[k];
		if (sanksi[k]==1){
			sanksiTabel[k] = 1;
		} else if (sanksi[k]==2){
			sanksiTabel[k] = 0.9;
		} else if (sanksi[k]==3){
			sanksiTabel[k] = 0.8;
		} else if (sanksi[j]==4){
			sanksiTabel[k] = 0.7;
		} else {
		}
		
		
		gotoxy(50,60+k);cout << jabatan[k];
		
		gotoxy(60,60+k);cout << setprecision(10) << gaji[k] ;
		
		bonus[k] = (mkTabel[k] * 1.2 * 1 * gaji[k]) * sanksiTabel[k];
		//bonusString[i] = to_string(bonus[i]);
		
		gotoxy(73,60+k);cout << bonus[k];
		
		
		tunjAnak[k] = (gaji[k] * 0.02) * jmlAnak[k];
		//tunjAnakString[i] = to_string(tunjAnak[i]);
		
		gotoxy(91,60+k);cout << tunjAnak[k];
		
		
		jk[k] = ijk * gaji[k];
		jkk[k] = ijkk * gaji[k];
		jkm[k] = ijkm * gaji[k];
		jht[k] = ijht * gaji[k];
		jp[k] = ijp * gaji[k];
		gajiBersih[k] = (gaji[k] + bonus[k] + tunjAnak[k]) - (jk[k] + jkk[k] + jkm[k] + jht[k] + jp[k]);

		gotoxy(103,60+k);cout << gajiBersih[k];
		
		totGaji3 = totGaji3 + gaji[k];
		gotoxy(100,49);cout << totGaji3;
		
		totBonus3 = totBonus3 + bonus[k];
		gotoxy(100,50);cout << totBonus3;
		
		totTunjAnak3 = totTunjAnak3 + tunjAnak[k];
		gotoxy(100,51);cout << totTunjAnak3;
		
		totGajiBersih3 = totGajiBersih3 + gajiBersih[k];
		gotoxy(100,52);cout << totGajiBersih3;

		
		gotoxy(1,17);cout<<"Isi data lagi? [Y/T] \t\t= ";
		cin >> jwb;
		k++;

		gotoxy(34,2);cout<<"                     ";
		gotoxy(34,3);cout<<"                     ";
		gotoxy(34,4);cout<<"                     ";
		gotoxy(34,5);cout<<"                     ";
		gotoxy(34,10);cout<<"                     ";
		gotoxy(34,15);cout<<"                     ";
		gotoxy(34,17);cout<<"                     ";
 	
		} while((jwb=="y" || jwb=="Y") & k <= 5 );
}

void total(){
	double totGaji3 = 0, totBonus3 = 0, totTunjAnak3 = 0, totGajiBersih3 = 0;
	for (int k = 0; k <10 ; k++){
		
		totGaji = totGaji + gaji[k];
		
		totBonus = totBonus + bonus[k];
		totTunjAnak = totTunjAnak + tunjAnak[k];
		totGajiBersih = totGajiBersih + gajiBersih[k];
		
		gotoxy(1,74);cout << "Total keseluruhan ";
		gotoxy(1,75);cout <<  "Halaman \t\t: 001 s/d 002";
		gotoxy(1,76);cout <<  "Total Gaji \t\t: " << setw (11) <<totGaji;
		gotoxy(1,77);cout << "Total Tunjangan Istri \t: " << setw (11) << totBonus;
		gotoxy(1,78);cout << "Total Tunjangan Anak \t: " << setw (11) << totTunjAnak;
		gotoxy(1,79);cout << "Total Gaji Bersih \t: " << setw (11) << totGajiBersih;
	}
}



int main (){
	
	gotoxy(40,0);cout<<"Rekapitulasi Bonus AkhirTahun Karyawan PT.AnginRibut";
	
	tabel1();
	tabel2();
	tabel3();
	input1();
	input2();
	input3();
	total();

	

	
return 0;
system("pause>0");
}

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

	//deklarasi menggunakan global scope
	int i = 1, j=1, k = 1, jmlAnak[15] = {4,2,3,0,6, 2,4,0,5,0, 0,8,0,4,2};
	double masaKerja[15] = {3,3,2,2,4, 2,3,2,3,1, 2,3,1,3,3}, sanksi[15] = {2,1,2,1,3, 2,3,1,2,1, 2,1,1,3,2}, mkTabel[15], sanksiTabel[15];;
	string nip[15] = {"DR101","DR102","DR103","DR104","DR105", "MJ201","MJ202","MJ203","MJ204","MJ205", "KY325", "KY326", "KY327", "KY328", "KY329"}, nama[15] = {"Kevin","Rais","Reza","Yoga","Hilmi","Arina","Deby","Nabil","Irgi","Sharly","Andita","Azzahrah","Helmeira","Alfan","Glenn"}, status[15] = {"SM","SM","SM","BM","SM", "SM","SM","BM","SM","BM", "BM","SM","BM","SM","SM"};
	string jabatan[15] = {"Direktur", "Direktur", "Direktur", "Direktur", "Direktur", "Manajer","Manajer","Manajer","Manajer","Manajer","Karyawan","Karyawan","Karyawan","Karyawan","Karyawan"};
	double bonus[15], tunjAnak[15], gajiBersih [15];
	double gaji[15] = {20000000, 20000000, 20000000, 20000000, 20000000, 15000000, 15000000, 15000000, 15000000, 15000000, 7000000, 7000000, 7000000, 7000000, 7000000};
	double totGaji = 0, totBonus = 0, totTunjAnak = 0, totGajiBersih = 0;
	
	//potongan gaji karyawan untuk menghitung gaji bersih
	//potongan iuran BPJS
	double ijk = 0.05,  ijkk = 0.00174, ijkm = 0.003, ijht = 0.057, ijp = 0.03;
	double jk[15], jkk[15], jkm[15], jht[15], jp[15];
	
	//total perjabatan di halaman terakhir
	double tgp1 = 0, tgp2 = 0, tgp3 = 0, tbp1 = 0, tbp2 = 0, tbp3 = 0, ttp1 = 0, ttp2 = 0, ttp3 = 0, tgbp1 = 0, tgbp2 = 0, tgbp3 = 0;
	
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
	gotoxy(1,32);cout<<"|                                                                             TOTAL BONUS|                         | ";
	gotoxy(1,33);cout<<"|                                                                    TOTAL TUNJANGAN ANAK|                         | ";
	gotoxy(1,34);cout<<"|                                                                       TOTAL GAJI BERSIH|                         | ";
	gotoxy(1,35);cout<<"====================================================================================================================";
}

void tabel2(){
	
	gotoxy(1,39);cout<<"[JABATAN : MANAJER]";
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
	
	gotoxy(1,57);cout<<"[JABATAN : KARYAWAN]";
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
	
	double totGaji = 0, totBonus = 0, totTunjAnak = 0, totGajiBersih = 0;
	
	for (int i = 0; i < 5; i++){
		
		gotoxy(3,25+i);cout<<i+1;
		
		gotoxy(1,2);cout<<"Masukkan NIP \t\t\t= ";
		//cin >> nip[i];
		gotoxy(7,25+i);cout << nip[i];
		
		gotoxy(1,3);cout<<"Masukkan nama \t\t\t= ";
		//cin >> nama[i];
		gotoxy(15,25+i);cout << nama[i];
		
		gotoxy(1,4);cout<<"Masukkan status (SM/BM) \t= ";
		//cin >> status[i];
		gotoxy(33,25+i);cout << status[i];
		
		gotoxy(1,5);cout<<"Masukkan jumlah anak \t\t= ";
		//cin >> jmlAnak[i];
		gotoxy(43,25+i);cout << jmlAnak[i];
		
		
		gotoxy(1,6);cout<<"Masa kerja : 	\t\t1. < 1 tahun\n\t\t\t\t2. 1-4 tahun\n\t\t\t\t3. 5-9 tahun\n\t\t\t\t4. >= 10 tahun";
		gotoxy(1,10);cout<<"Pilih angka yang sesuai \t= ";
		//cin >> masaKerja[i];
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
		//cin >> sanksi[i];
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
		
		
		gotoxy(50,25+i);cout << jabatan[i];	
		gotoxy(60,25+i);cout << setprecision(10) << gaji[i] ;
		
		bonus[i] = (mkTabel[i] * 1.2 * 1 * gaji[i]) * sanksiTabel[i];
		gotoxy(73,25+i);cout << bonus[i];
		
		tunjAnak[i] = (gaji[i] * 0.02) * jmlAnak[i];
		gotoxy(91,25+i);cout << tunjAnak[i];
		
		jk[i] = ijk * gaji[i];
		jkk[i] = ijkk * gaji[i];
		jkm[i] = ijkm * gaji[i];
		jht[i] = ijht * gaji[i];
		jp[i] = ijp * gaji[i];
		gajiBersih[i] = (gaji[i] + bonus[i] + tunjAnak[i]) - (jk[i] + jkk[i] + jkm[i] + jht[i] + jp[i]);

		gotoxy(103,25+i);cout << gajiBersih[i];
		
		totGaji = totGaji + gaji[i];
		gotoxy(100,31);cout << totGaji;
		
		tgp1 = totGaji;
		
		totBonus = totBonus + bonus[i];
		gotoxy(100,32);cout << totBonus;
		
		tbp1 = totBonus;
		
		totTunjAnak = totTunjAnak + tunjAnak[i];
		gotoxy(100,33);cout << totTunjAnak;
		
		ttp1 = totTunjAnak;
		
		totGajiBersih = totGajiBersih + gajiBersih[i];
		gotoxy(100,34);cout << totGajiBersih;
		
		tgbp1 =  totGajiBersih;

		gotoxy(34,2);cout<<"                     ";
		gotoxy(34,3);cout<<"                     ";
		gotoxy(34,4);cout<<"                     ";
		gotoxy(34,5);cout<<"                     ";
		gotoxy(34,10);cout<<"                     ";
		gotoxy(34,15);cout<<"                     ";
		gotoxy(34,17);cout<<"                     ";
		
	}
	
}

void input2(){
	
	double totGaji = 0, totBonus = 0, totTunjAnak = 0, totGajiBersih = 0;
	
	for (int j = 5  ; j < 10 ; j++){
		
		gotoxy(3,38+j);cout<<j-4;
		
		gotoxy(1,2);cout<<"Masukkan NIP \t\t\t= ";
		//cin >> nip[j];
		gotoxy(7,38+j);cout << nip[j];
		
		gotoxy(1,3);cout<<"Masukkan nama \t\t\t= ";
		//cin >> nama[j];
		gotoxy(15,38+j);cout << nama[j];
		
		gotoxy(1,4);cout<<"Masukkan status (SM/BM) \t= ";
		//cin >> status[j];
		gotoxy(33,38+j);cout << status[j];
		
		gotoxy(1,5);cout<<"Masukkan jumlah anak \t\t= ";
		//cin >> jmlAnak[j];
		gotoxy(43,38+j);cout << jmlAnak[j];
		
		
		gotoxy(1,6);cout<<"Masa kerja : 	\t\t1. < 1 tahun\n\t\t\t\t2. 1-4 tahun\n\t\t\t\t3. 5-9 tahun\n\t\t\t\t4. >= 10 tahun";
		gotoxy(1,10);cout<<"Pilih angka yang sesuai \t= ";
		//cin >> masaKerja[j];
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
		//cin >> sanksi[j];
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
		
		
		gotoxy(50,38+j);cout << jabatan[j];
		gotoxy(60,38+j);cout << setprecision(10) << gaji[j] ;
		
		bonus[j] = (mkTabel[j] * 1 * 1 * gaji[j]) * sanksiTabel[j];
		gotoxy(73,38+j);cout << bonus[j];
		
		
		tunjAnak[j] = (gaji[j] * 0.02) * jmlAnak[j];	
		gotoxy(91,38+j);cout << tunjAnak[j];
		
		
		jk[j] = ijk * gaji[j];
		jkk[j] = ijkk * gaji[j];
		jkm[j] = ijkm * gaji[j];
		jht[j] = ijht * gaji[j];
		jp[j] = ijp * gaji[j];
		gajiBersih[j] = (gaji[j] + bonus[j] + tunjAnak[j]) - (jk[j] + jkk[j] + jkm[j] + jht[j] + jp[j]);

		gotoxy(103,38+j);cout << gajiBersih[j];
		
		totGaji = totGaji + gaji[j];
		gotoxy(100,49);cout << totGaji;
		
		tgp2 = totGaji;
		
		totBonus = totBonus + bonus[j];
		gotoxy(100,50);cout << totBonus;
		
		tbp2 = totBonus;
		
		totTunjAnak = totTunjAnak + tunjAnak[j];
		gotoxy(100,51);cout << totTunjAnak;
		
		ttp2 = totTunjAnak;
		
		totGajiBersih = totGajiBersih + gajiBersih[j];
		gotoxy(100,52);cout << totGajiBersih;
		
		tgbp2 = totGajiBersih;
		
		gotoxy(34,2);cout<<"                     ";
		gotoxy(34,3);cout<<"                     ";
		gotoxy(34,4);cout<<"                     ";
		gotoxy(34,5);cout<<"                     ";
		gotoxy(34,10);cout<<"                     ";
		gotoxy(34,15);cout<<"                     ";
		gotoxy(34,17);cout<<"                     ";
 	
	}
	
}

void input3(){
	
	double totGaji = 0, totBonus = 0, totTunjAnak = 0, totGajiBersih = 0;
	
	for (int k = 10  ; k < 15 ; k++){
	
		gotoxy(3,51+k);cout<<k-9;
		
		gotoxy(1,2);cout<<"Masukkan NIP \t\t\t= ";
	//cin >> nip[k];
		gotoxy(7,51+k);cout << nip[k];
		
		gotoxy(1,3);cout<<"Masukkan nama \t\t\t= ";
		//cin >> nama[k];
		gotoxy(15,51+k);cout << nama[k];
		
		gotoxy(1,4);cout<<"Masukkan status (SM/BM) \t= ";
		//cin >> status[k];
		gotoxy(33,51+k);cout << status[k];
		
		gotoxy(1,5);cout<<"Masukkan jumlah anak \t\t= ";
	//	cin >> jmlAnak[k];
		gotoxy(43,51+k);cout << jmlAnak[k];
		
		
		gotoxy(1,6);cout<<"Masa kerja : 	\t\t1. < 1 tahun\n\t\t\t\t2. 1-4 tahun\n\t\t\t\t3. 5-9 tahun\n\t\t\t\t4. >= 10 tahun";
		gotoxy(1,10);cout<<"Pilih angka yang sesuai \t= ";
		//cin >> masaKerja[k];
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
	//	cin >> sanksi[k];
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
		
		
		gotoxy(50,51+k);cout << jabatan[k];
		gotoxy(60,51+k);cout << setprecision(10) << gaji[k] ;
		
		bonus[k] = (mkTabel[k] * 0.8 * 1 * gaji[k]) * sanksiTabel[k];
		gotoxy(73,51+k);cout << bonus[k];
		
		tunjAnak[k] = (gaji[k] * 0.02) * jmlAnak[k];
		gotoxy(91,51+k);cout << tunjAnak[k];
		
		
		jk[k] = ijk * gaji[k];
		jkk[k] = ijkk * gaji[k];
		jkm[k] = ijkm * gaji[k];
		jht[k] = ijht * gaji[k];
		jp[k] = ijp * gaji[k];
		gajiBersih[k] = (gaji[k] + bonus[k] + tunjAnak[k]) - (jk[k] + jkk[k] + jkm[k] + jht[k] + jp[k]);

		gotoxy(103,51+k);cout << gajiBersih[k];
		
		totGaji = totGaji + gaji[k];
		gotoxy(100,67);cout << totGaji;
		
		tgp3 = totGaji;
		
		totBonus = totBonus + bonus[k];
		gotoxy(100,68);cout << totBonus;
		
		tbp3 = totBonus;
		
		totTunjAnak = totTunjAnak + tunjAnak[k];
		gotoxy(100,69);cout << totTunjAnak;
		
		ttp3 = totTunjAnak;
		
		totGajiBersih = totGajiBersih + gajiBersih[k];
		gotoxy(100,70);cout << totGajiBersih;
		
		tgbp3 = totGajiBersih;

		gotoxy(34,2);cout<<"                     ";
		gotoxy(34,3);cout<<"                     ";
		gotoxy(34,4);cout<<"                     ";
		gotoxy(34,5);cout<<"                     ";
		gotoxy(34,10);cout<<"                     ";
		gotoxy(34,15);cout<<"                     ";
		gotoxy(34,17);cout<<"                     ";
	
	}
	
}

void total(){
	double totGaji = 0, totBonus = 0, totTunjAnak = 0, totGajiBersih = 0;
	for (int l = 0; l < 15 ; l++){
		
		totGaji = totGaji + gaji[l];
		
		totBonus = totBonus + bonus[l];
		totTunjAnak = totTunjAnak + tunjAnak[l];
		totGajiBersih = totGajiBersih + gajiBersih[l];
		
		
		gotoxy(1,74);cout << "Total gaji perjabatan          : [DIREKTUR] --> " << setw (11) << tgp1;
		gotoxy(1,75);cout << "Total gaji perjabatan          : [MANAJER]  --> " << setw (11) << tgp2;
		gotoxy(1,76);cout << "Total gaji perjabatan          : [KARYAWAN] --> " << setw (11) << tgp3;
		
		gotoxy(1,78);cout << "Total bonus perjabatan         : [DIREKTUR] --> " << setw (11) << tbp1;
		gotoxy(1,79);cout << "Total bonus perjabatan         : [MANAJER]  --> " << setw (11) << tbp2;
		gotoxy(1,80);cout << "Total bonus perjabatan         : [KARYAWAN] --> " << setw (11) << tbp3;
		
		gotoxy(1,82);cout << "Total tunjangan perjabatan     : [DIREKTUR] --> " << setw (11) << ttp1;
		gotoxy(1,83);cout << "Total tunjangan perjabatan     : [MANAJER]  --> " << setw (11) << ttp2;
		gotoxy(1,84);cout << "Total tunjangan perjabatan     : [KARYAWAN] --> " << setw (11) << ttp3;
		
		gotoxy(1,86);cout << "Total gaji bersih perjabatan   : [DIREKTUR] --> " << setw (11) << tgbp1;
		gotoxy(1,87);cout << "Total gaji bersih perjabatan   : [MANAJER]  --> " << setw (11) << tgbp2;
		gotoxy(1,88);cout << "Total gaji bersih perjabatan   : [KARYAWAN] --> " << setw (11) << tgbp3;	
		
		gotoxy(1,91);cout << "Total keseluruhan ";
		gotoxy(1,92);cout << "Halaman \t\t\t: 001 s/d 003";
		gotoxy(1,93);cout << "Total Gaji \t\t\t: " << setw (11) << totGaji;
		gotoxy(1,94);cout << "Total Bonus \t\t\t: " << setw (11) << totBonus;
		gotoxy(1,95);cout << "Total Tunjangan Anak \t\t: " << setw (11) << totTunjAnak;
		gotoxy(1,96);cout << "Total Gaji Bersih \t\t: " << setw (11) << totGajiBersih;
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
	cout<<endl;

return 0;
system("pause>0");
}

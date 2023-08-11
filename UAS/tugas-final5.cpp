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



int main (){
	
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
	int i = 1, jmlAnak[6];
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
			//mkTabel[i] = "< 1 tahun";
			mkTabel[i] = 0.8;
		} else if (masaKerja[i]==2){
			//mkTabel[i] = "1-4 tahun";
			mkTabel[i] = 0.9;
		} else if (masaKerja[i]==3){
			//mkTabel[i] = "5-9 tahun";
			mkTabel[i] = 1;
		} else if (masaKerja[i]==4){
			//mkTabel[i] = ">= 10 tahun";
			mkTabel[i] = 1.2;
		} else {
		}
		
		gotoxy(1,11);cout<<"sanksi surat peringatan :	1. tanpa sanksi\n\t\t\t\t2. SP I\n\t\t\t\t3. SP II\n\t\t\t\t4. SP III";
		gotoxy(1,15);cout<<"Pilih angka yang sesuai \t= ";
		cin >> sanksi[i];
		if (sanksi[i]==1){
			//mkTabel[i] = "< 1 tahun";
			sanksiTabel[i] = 1;
		} else if (sanksi[i]==2){
			//mkTabel[i] = "1-4 tahun";
			sanksiTabel[i] = 0.9;
		} else if (sanksi[i]==3){
			//mkTabel[i] = "5-9 tahun";
			sanksiTabel[i] = 0.8;
		} else if (sanksi[i]==4){
			//mkTabel[i] = ">= 10 tahun";
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
		//gajiBersihString[i] = to_string(gajiBersih[i]);
		//gajiBersih[i] = (gaji[i] + bonus[i] + tunjAnak[i]) /*- (jk[i] + jkk[i] + jkm[i] + jht[i] + jp[i])*/;
		
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
//		gotoxy(1,21);cin >> nip[i];
//		gotoxy(1,22);cin >> nama[i];
//		gotoxy(1,28);cin >> status[i];
//		gotoxy(1,27);cin >> jmlAnak[i];

		gotoxy(34,2);cout<<"                     ";
		gotoxy(34,3);cout<<"                     ";
		gotoxy(34,4);cout<<"                     ";
		gotoxy(34,5);cout<<"                     ";
		gotoxy(34,10);cout<<"                     ";
		gotoxy(34,15);cout<<"                     ";
		gotoxy(34,17);cout<<"                     ";
 	
		} while((jwb=="y" || jwb=="Y") & i <= 5 );

	
	(0.35 * gapok[i]) *jmlAnak[i]
	
	/		gotoxy(90,63);cout<<sizeof(bonusAkhir[i])/sizeof(totSize[1])+2<< " orang";
//		gotoxy(90,64);cout<<sizeof(bonusAkhir[i])/sizeof(totSize[2])+2<< " orang";
//		gotoxy(90,65);cout<<sizeof(bonusAkhir[i])/sizeof(totSize[3])+2<< " orang";
//		gotoxy(90,66);cout<<sizeof(bonusAkhir[i])/sizeof(totSize[4])+2<< " orang";

//		gotoxy(90,60);cout<<length<< " orang";
//		gotoxy(90,61);cout<<length2<< " orang";
//		gotoxy(90,62);cout<<sizeof(bonusAkhir[i])/sizeof(totSize[2])<< " orang";
//		gotoxy(90,63);cout<<sizeof(bonusAkhir[i])/sizeof(totSize[3])<< " orang";
//		gotoxy(90,64);cout<<sizeof(bonusAkhir[i])/sizeof(totSize[4])<< " orang";
	
	
return 0;
system("pause>0");
}

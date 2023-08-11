#include <iostream>
using namespace std;
int main (){
	//MEMBUAT PROGRAM MENGHITUNG LUAS LINGKARAN
	
	cout<<"==========================================="<<endl;	
	cout<<"## Program C++ Menghitung Luas Lingkaran ##"<<endl;
	cout<<"-------------OLEH KELOMPOK 10--------------"<<endl;
	cout<<"==========================================="<<endl;
	cout<<endl;
	
	
	float  phi, luas, jari_jari, r2, r3, luas1;
	
	cout<< "Masukkan jari-jari lingkaran (r) = ";
	cin>>jari_jari;
	cout<<"-------------------------------------------"<<endl;
	
	cout<<"\nJari-jari (r) \t\t\t = "<<jari_jari<<" cm "<<endl;
	cout<<"-------------------------------------------"<<endl;
	
	phi = 3.14;
	r2 = jari_jari*jari_jari;
	luas = phi * (jari_jari*jari_jari);
	
	cout<<"\nLuas lingkaran = "<<endl;
	cout<<"L = phi x (jari-jari x jari-jari)"<<endl;
	cout<<"L = phi x (r x r)"<<endl;
	cout<<"L = 3,14 x ("<<jari_jari<<" x "<<jari_jari<<")"<<endl;
	cout<<"L = 3,14 x ("<<r2<<") "<<endl;
	cout<<"L = "<<luas<<endl;
	
	cout<<"\nLuas lingkaran tersebut adalah "<<luas<<" cm2 "<<endl;
	//PROGRAM MENGHITUNG LUAS LINGKARAN SELESAI
	
	
	//MEMBUAT PROGRAM MENGHITUNG VOLUME ISI BOLA
	cout<<"\n============================================="<<endl;	
	cout<<"## Program C++ Menghitung Volume Isi bola ##"<<endl;
	cout<<"---------------OLEH KELOMPOK 10--------------"<<endl;
	cout<<"============================================="<<endl;
	cout<<endl;
	
	cout<< "Masukkan jari-jari bola (r) \t= ";
	cin>>jari_jari;
	cout<<"---------------------------------------------"<<endl;
	
	cout<<"\nJari-jari (r) \t\t\t= "<<jari_jari<<" cm "<<endl;
	cout<<"---------------------------------------------"<<endl;
	
	phi = 3.14;
	r3 = jari_jari*jari_jari*jari_jari;
	luas1 = (4 * phi * (jari_jari*jari_jari*jari_jari));
	luas = (4 * phi * (jari_jari*jari_jari*jari_jari))/3;
	
	cout<<"\nVolume isi bola = "<<endl;
	cout<<"L = 4/3 x phi x (jari-jari x jari-jari x jari-jari)"<<endl;
	cout<<"L = 4/3 x phi x (r x r x r)"<<endl;
	cout<<"L = 4/3 x 3,14 x ("<<jari_jari<<" x "<<jari_jari<<" x "<<jari_jari<<")"<<endl;
	cout<<"L = 4/3 x 3,14 x ("<<r3<<") "<<endl;
	cout<<"L = ("<<luas1<<")/3 "<<endl;
	cout<<"L = "<<luas<<endl;
	
	cout<<"\nVolume isi bola tersebut adalah "<<luas<<" cm3 "<<endl;
	//PROGRAM MENGHITUNG VOLUME ISI BOLA SELESAI
	return 0;
}

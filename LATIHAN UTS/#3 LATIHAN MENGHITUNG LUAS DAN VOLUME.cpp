#include<iostream>
using namespace std;

int main(){
	
	cout<<"==================================="<<endl;
	cout<<"#2 LATIHAN MENGHITUNG LUAS SEGITIGA"<<endl;
	cout<<"==================================="<<endl;
	
	double alas3, tinggi3, luas3, at3;
	
	// luas segitiga = (alas x tinggi) / 2
	
	cout<<"Masukkan alas segitiga = ";
	cin>>alas3;
	cout<<"Masukkan tinggi segitiga = ";
	cin>>tinggi3;
	cout<<endl;
	
	at3 = alas3*tinggi3;
	luas3 = (alas3*tinggi3)/2;
	
	cout<<"L = ("<<alas3<<" x "<<tinggi3<<") / 2"<<endl;
	cout<<"L = ("<<at3<<") / 2"<<endl;
	cout<<"L = "<<luas3<<endl;
	
	cout<<"Maka, luas dari segitiga tersebut adalah "<<luas3<<" cm2. "<<endl;
	
	cout<<"\n================================"<<endl;
	cout<<"#2 LATIHAN MENGHITUNG LUAS KUBUS"<<endl;
	cout<<"================================"<<endl;
	
	double sisikubus, sisi2kubus, luaskubus;
	
	cout<<"Masukkan panjang sisi kubus = ";
	cin>>sisikubus;
	cout<<endl;
	
	//luas kubus = 6 (sisi x sisi)
	
	sisi2kubus = sisikubus*sisikubus;
	luaskubus = 6 * (sisikubus*sisikubus);
	
	cout<<"L = 6 x ("<<sisikubus<<" x "<<sisikubus<<")"<<endl;
	cout<<"L = 6 x ("<<sisi2kubus<<") "<<endl;
	cout<<"L = "<<luaskubus<<endl;
	
	cout<<"Maka, luas dari kubus tersebut adalah "<<luaskubus<<" cm2. "<<endl;
	
	cout<<"===================================="<<endl;
	cout<<"#2 LATIHAN MENGHITUNG LUAS LINGKARAN"<<endl;
	cout<<"===================================="<<endl;
	
	double phi, r, r2, luasling;
	
	// luas lingkaran = phi . r2
	
	cout<<"\nMasukkan jari-jari lingkaran = ";
	cin>>r;
	cout<<endl;
	
	luasling = 3.14 * (r*r);
	r2 = r*r;
	
	cout<<"L = phi x (r x r)"<<endl;
	cout<<"L = 3,14 x ("<<r<<" x "<<r<<")"<<endl;
	cout<<"L = 3,14 x ("<<r2<<")"<<endl;
	cout<<"L = "<<luasling<<endl;
	
	cout<<"Maka, luas dari lingkran tersebut adalah "<<luasling<<" cm2. "<<endl;
	
	
	cout<<"====================================="<<endl;
	cout<<"#2 LATIHAN MENGHITUNG VOLUME ISI BOLA"<<endl;
	cout<<"====================================="<<endl;
	
	double r3, volumeling;
	
	// luas lingkaran = phi . r2
	
	cout<<"\nMasukkan jari-jari lingkaran = ";
	cin>>r;
	cout<<endl;
	
	volumeling = (4 * 3.14 * (r*r*r))/3;
	r3 = r*r*r;
	
	cout<<"L = 4/3 x phi x (r x r x r) "<<endl;
	cout<<"L = 4/3 x 3,14 x ("<<r<<" x "<<r<<" x "<<r<<")"<<endl;
	cout<<"L = 4/3 x 3,14 x ("<<r3<<")"<<endl;
	cout<<"L = "<<volumeling<<endl;
	
	cout<<"Maka, luas dari lingkran tersebut adalah "<<volumeling<<" cm3. "<<endl;
}

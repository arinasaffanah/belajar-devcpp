#include<iostream>
using namespace std;

struct partnertype{
	string look;
	string tinggi;
	string karakter;
	string pendidikan;
	
};

int main(){
	partnertype arina;
	partnertype saffa;
	
	arina.look = "Manis dan berwibawa";
	arina.tinggi = "di atas 168";
	arina.karakter = "Humoris dan pintar mtk";
	arina.pendidikan = "Anak Teknik Jaya Jaya Jaya!!!";
	
	
	cout<<"TIPE ARINA : "<<endl;
	cout<<"Tipe Penampilan \t= "<<arina.look<<endl;
	cout<<"Tipe Tinggi \t\t= "<<arina.tinggi<<endl;
	cout<<"Tipe Karakter \t\t= "<<arina.karakter<<endl;
	cout<<"Tipe Pendidikan \t= "<<arina.pendidikan<<endl;
	
	cout<<endl;
	
	cout<<"TIPE SAFFA :"<<endl;
	saffa.look = "Ganteng dan arogan";
	saffa.tinggi = "di atas 175";
	saffa.karakter = "Dingin tapi bucin";
	saffa.pendidikan = "Anak Hukum!!!";
	
	cout<<"Tipe Penampilan \t= "<<saffa.look<<endl;
	cout<<"Tipe Tinggi \t\t= "<<saffa.tinggi<<endl;
	cout<<"Tipe Karakter \t\t= "<<saffa.karakter<<endl;
	cout<<"Tipe Pendidikan \t= "<<saffa.pendidikan<<endl;
}

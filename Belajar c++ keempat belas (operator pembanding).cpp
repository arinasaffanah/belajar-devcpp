#include<iostream>
using namespace std;

int main(){
	//operator pembanding
	
	int x, y;
	bool kondisi;
	string hasil;
	
	x = 10;
	y = 10;
	
	kondisi = x == y;
	hasil = kondisi == 1 ? "sama dengan" : "tidak sama dengan";
	cout<<"variabel x "<<hasil<<" variabel y"<<endl;
	
	//operator !=
	kondisi = x != y;
	hasil = kondisi == 1 ? "tidak sama dengan" : "sama dengan";
	cout<<"variabel x "<<hasil<<" variabel y"<<endl;
	
	//operator >
	kondisi = x > y;
	hasil = kondisi == 1 ? "lebih dari" : "tidak lebih dari";
	cout<<"variabel x "<<hasil<<" variabel y"<<endl;
	
	//operator <
	kondisi = x < y;
	hasil = kondisi == 1 ? "kurang dari" : "tidak kurang dari";
	cout<<"variabel x "<<hasil<<" variabel y"<<endl;
	
	//operator >=
	kondisi = x >= y;
	hasil = kondisi == 1 ? "lebih dari atau sama dengan" : "tidak lebih dari atau sama dengan";
	cout<<"variabel x "<<hasil<<" variabel y"<<endl;
	
	//operator <=
	kondisi = x <= y;
	hasil = kondisi == 1 ? "kurang dari atau sama dengan" : "tidak kurang dari atau sama dengan";
	cout<<"variabel x "<<hasil<<" variabel y"<<endl;
	
	
	
}

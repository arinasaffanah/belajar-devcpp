#include<iostream>
using namespace std;

int main(){
	/*
	OPERATOR LOGIKA
	- pakai tipe data boolean -> true or false
	
	1. not -> kebalikan atau negasi
	2. and -> true, ketika semua benar
	3. or -> false, ketika semua salah
	*/
	
	bool output;
	
	output = 2 == 2;
	
	//not -> kebalikan
	output = !(2 == 2);//0 false
	output = !(2 == 4);//1 true
	output = !(2 > 1);//0 false
	output = !(6 < 4);//1 true
	
	//and -> true, ketika semua benar -> ibaratkan perkalian, dimana ketika dikali 0 maka hasilnya pasti 0
	output = (2 < 6) and (2 < 4);//1 and 1 = 1 true 
	output = (2 < 6) and (4 < 1);//1 and 0 = 0 false
	output = (2 < 1) and (3 > 2);//0 and 1 = 0 false
	output = (2 < 1) and (3 < 2);//0 and 0 = 0 false
	
	//or -> false, ketika semua salah -> ibaratkan penjumlahan
	output = (2 < 6) or (2 < 4);//1 or 1 = 1 true 
	output = (2 < 6) or (4 < 1);//1 or 0 = 1 true
	output = (2 < 1) or (3 > 2);//0 or 1 = 1 true
	output = (2 < 1) or (3 < 2);//0 or 0 = 0 false
	
	cout<<output;
	
}

#include<iostream>
using namespace std;

int main(){
	
	//MEMBUAT PROGRAM DERET PRIMA
	
	int batas, mod, hasil, suku, x, y;
	
	cout<<"Masukkan batas dari deret bilangan prima : ";
	cin>>batas;
	
	for(int a = 2 ; a <= batas ; a++){
		mod = 0;
		suku = 0;
		
		for(int b = batas ; b >0 ; b--){
			hasil = a % b;
			if (hasil == 0){
			mod++;
			
		} 
		}
		
		if (mod == 2){
			cout<<a;
			suku+=mod;
			x = a != batas;
			y = a != (batas-suku);
			if (x&&y){
				cout<<", ";
			}
		}
	}
}

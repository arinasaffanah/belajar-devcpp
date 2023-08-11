#include<iostream>
using namespace std;

int main(){
	cout<<"======================"<<endl;
	cout<<"#2 LATIHAN DERET KUBIK"<<endl;
	cout<<"======================"<<endl;
	
	double n, suku, total = 0, rata;
	
	cout<<"Masukkan jumlah deret bilangan kubik = ";
	cin>>n;
	
	cout<<"Deret kubik : ";
	for(int a = 1; a <= n; a++){
		suku = a*a*a;
		total+=suku;
		cout<<suku;
		if (a != n){
			cout<<", ";
		}
		
	}
	rata = total/n;
	cout<<"\nTotal deret tersebut = "<<total<<endl;
	cout<<"Rata-Rata deret tersebut = "<<rata<<endl;
	
	cout<<"\n\n=========================="<<endl;
	cout<<"#2 LATIHAN DERET FIBONACCI"<<endl;
	cout<<"=========================="<<endl;
	
	double x, total2, rata2;
	int f1 = 0;
	int f2 = 1;
	int temp;
	
	
	cout<<"Masukkan jumlah deret bilangan fibonacci = ";
	cin>>x;
	cout<<"Deret Fibonacci : ";
	total2 = f1+f2;
	
	cout<<f1<<", ";
	cout<<f2<<", ";
	for(int a = 3; a <= x; a++){
		temp = f1 + f2;
		f1 = f2;
		f2 = temp;
		total2 += temp;
		cout<<temp;
		if(a != x){
			cout<<", ";
		}
	}
	
	rata2 = total2/x;
	cout<<"\nTotal deret tersebut = "<<total2<<endl;
	cout<<"Rata-Rata deret tersebut = "<<rata2<<endl;
	
	
	cout<<"\n\n=========================="<<endl;
	cout<<"#2 LATIHAN DERET FAKTORIAL"<<endl;
	cout<<"=========================="<<endl;
	
	int nfak, hasilfak;
	
	cout<<"Masukkan bilangan yang ingin di-faktorialkan = ";
	cin>>nfak;
	
	hasilfak=1;
	cout<<nfak<<"! = ";
	for(int a=nfak ; a>=1 ; a--){
		hasilfak *= a;
		cout<<a;
		if(a != 1){
			cout<<" * ";
		}
	}
	
	cout<<" = "<<hasilfak<<endl;
	cout<<"Hasil dari faktorial tersebut adalah "<<hasilfak<<endl;
	
	cout<<"\n\n======================"<<endl;
	cout<<"#2 LATIHAN DERET PRIMA"<<endl;
	cout<<"======================"<<endl;
	
	int nprima, bil;
	
	cout<<"Masukkan batas deret bilangan prima = ";
	cin>>nprima;
	
	for(int a = 1 ; a <= nprima ; a++){
		//prima hanya punya 2 faktor. 1 dan bilangan itu sendiri.
		bil = 0;
		for(int b = 1; b <= a ; b++){
			if (a % b == 0){
				bil++;
			} 
		} if (bil == 2){
			cout<<a<<" ";
		}
	}
	return 0;
}

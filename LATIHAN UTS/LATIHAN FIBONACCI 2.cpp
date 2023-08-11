#include<iostream>
using namespace std;

int main(){
	//membuat program fibonacci
	int n, temp = 0;
	int f1 = 0;
	int f2 = 1;
	float total, rata;
	
	cout<<"Masukkan jumlah bilangan = ";
	cin>>n;
	
	cout<<f1<<", ";
	cout<<f2<<", ";
	
	total= f1+f2;
	for(int a = 3; a <= n; a++){
		temp = f1 + f2;
		f1 = f2;
		f2 = temp;
		cout<<temp;
		if(a != n){
			cout<<", ";
		}
		total += temp;
	}
	cout<<endl;
	cout<<"Total = "<<total<<endl;
	rata = total/n;
	cout<<"Rata-rata = "<<rata<<endl;
	
}

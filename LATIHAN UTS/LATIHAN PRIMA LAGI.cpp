#include<iostream>
using namespace std;

int main(){
	//membuat program prima
	
	int n, mod;
	cout<<"Masukkan batas bilangan prima = ";
	cin>>n;
	cout<<endl;
	
	for(int a=2 ; a <= n; a++){
		mod=0;
		
		for(int b=1 ; b <= a; b++){
		
		if (a % b == 0){
			mod++;
		}
	}
		if (mod == 2){
			cout<<a<<" ";
		}
		}
		return 0;
}


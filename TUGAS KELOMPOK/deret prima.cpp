#include <iostream>
using namespace std;

int main(){
	int bil,n;
	cout<<"Menampilkan Deret Bilangan Prima = ";
	cin>>n;

	for(int i=1;i<=n;i++){
		bil=0;
		for(int j=1;j<=i;j++){
			if(i%j==0){
				bil=bil+1;
			}
		}
		if (bil==2)
		cout<<i<<" ";
	}
}

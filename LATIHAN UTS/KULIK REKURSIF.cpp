#include<iostream>
using namespace std;

/*void rekursif(int x){
	if(x > 0){
	cout<<"Hello World!"<<endl;
	x--;
	rekursif(x);

	}
}

int main(){
	rekursif(5);
}*/

int faktorial(int x){
	if (x == 1){
		cout<<x<<" = ";
		return x;
	} else {
		cout<<x<<" * ";
		return x * faktorial(x-1);
	}
}

int main(){
	int n;
	cout<<"Pilih bilangan yang ingin difaktorialkan = ";
	cin>>n;
	cout<<n<<"! = ";
	cout<<faktorial(n);
	
	return 0;
}

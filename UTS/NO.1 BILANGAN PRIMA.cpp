#include<iostream>
using namespace std;

int main(){
	//MEMBUAT PROGRAM DERET BILANGAN ARITMATIKA
	cout<<"==================================="<<endl;
	cout<<"   PROGRAM DERET BILANGAN PRIMA   "<<endl;
	cout<<"ARINA SAFFANAH ZAKIYYAH-20220801189"<<endl;
	cout<<"==================================="<<endl;
	
	float bil, total = 0, rerata;
	
	cout<<"50 Deret bilangan prima : \n";
	cout<<endl;
	
	for(int a = 1 ; a <= 230 ; a++){
		//prima hanya punya 2 faktor. 1 dan bilangan itu sendiri.
		//JADI ANGKA 1 TIDAK MASUK KE BILANGAN PRIMA
		bil = 0;
		for(int b = 1; b <= a ; b++){
			if (a % b == 0){
				bil++;
			} 
		} if (bil == 2){
			cout<<a<<" ";
			total += a;
		} 	rerata = total/50;
	}
 
	cout<<"\n\nTotal deret \t\t= "<<total<<endl;
	cout<<"Rata-rata deret \t= "<<rerata<<endl;
	return 0;
}

#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

int main(){
	string nameAll[9][20] ={"Zainab", "Yunarso", "Jojon", "Tinatun", "Qinanti", "Mintarso", "Janah", "Jonathan", "Junaidi"};
	string datacari = "na";
	//char hasil;
	//char tiga = 'n';
	//char empat = 'a';
	//int length = sizeof(nama)/sizeof(*nama);
	int temp;
	char nameOne[20];
	int i, j;
	
	
	cout<<"Index : ";
	for(int i = 0 ; i < 9 ; i++){
		cout<<i<<" \t";
	}
	cout<<"\nNama  : ";
	for(int b = 0 ; b < 9 ; b++){
	cout<<nameAll[b]<<" ";
	}
	
	for(i=1; i<5; i++)
    {
        for(j=1; j<5; j++)
        {
            if(strcmp(nameAll[j-1], nameAll[j])>0)
            {
                strcpy(nameOne, nameAll[j-1]);
                strcpy(nameAll[j-1], nameAll[j]);
                strcpy(nameAll[j], nameOne);
            }
        }
    }
    cout<<"\nStrings (Names) in Alphabetical order:\n";
    for(i=0; i<5; i++)
        cout<<nameAll[i]<<endl;
    cout<<endl;
    return 0;
}

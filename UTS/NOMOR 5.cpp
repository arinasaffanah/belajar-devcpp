#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

void print(string nama[], int n){
 cout<<"Isi Data Array\t:\n"
 <<"Index \t: ";
 for (int i = 0; i < 9; i++) {
 cout<<setw(10)<<i;
 }
 cout<<"\nNama \t: ";
 for (int i = 0; i < n; i++) {
 cout<<setw(10)<<nama[i];
 }
 cout<<"\n\n";
}
void a(string nama[], int n){
 int idx[n], nFound=0;
 cout<<"Data yang dicari Huruf huruf ke 3 dan 4 adalah : \n";
 for (int i = 0; i < n; i++) {
 if(nama[i].substr(2, 2)=="na"){
 idx[nFound++] = i;
 cout<<nama[i]<<" ";
 }
 }
 cout<<"\nData ditemukan pada index ke ";
 for (int i = 0; i < nFound; i++) {
 if(i==nFound-1){
 cout<<"dan "<<idx[i];
 }else{
 cout<<idx[i]<<", ";
 }
 }
 cout<<"\n\n";
}
void asc(string nm[],int n){
 string nama[n];
 for (int i = 0; i < n; i++) {
 nama[i] = nm[i];
 }
 cout<<"Data sebelum disort :\n";
 cout<<"Nama : ";
 for (int i = 0; i < n; i++) {
 cout<<setw(10)<<nama[i];
 }
 cout<<"\n";

 for (int i = 0; i < n-1; i++) {
 int min=i;
 for (int j = i+1; j < n; j++) {
 if(nama[min].compare(nama[j])<0){
 min = j;
 }
 }
 string temp = nama[min];
 nama[min] = nama[i];
 nama[i] = temp;
 }
 cout<<"Data setelah disort secara Ascending :\n";
 cout<<"Nama : ";
 for (int i = 0; i < n; i++) {
 cout<<setw(10)<<nama[i];
 }
 cout<<"\n\n";
}
void desc(string nm[],int n){
 string nama[n];
 for (int i = 0; i < n; i++) {
 nama[i] = nm[i];
 }
 cout<<"Data sebelum disort :\n";
 cout<<"Nama : ";
 for (int i = 0; i < n; i++) {
 cout<<setw(10)<<nama[i];
 }
 cout<<"\n";
 for (int i = 0; i < n-1; i++) {
 int min=i;
 for (int j = i+1; j < n; j++) {
 if(nama[min].compare(nama[j])>0){
 min = j;
 }
 }
 string temp = nama[min];
 nama[min] = nama[i];
 nama[i] = temp;
 }
 cout<<"Data setelah disort secara Descending :\n";
 cout<<"Nama : ";
 for (int i = 0; i < n; i++) {
 cout<<setw(10)<<nama[i];
 }
 cout<<"\n\n";
}
int main()
{
 int n = 9;
 string nama[n] = {
 "Zainab",
 "Yunarso",
 "Jojon",
 "Tinatun",
 "Qinanti",
 "Mintarso",
 "Janah",
 "Jonathan",
 "Junaidi"
 };
 print(nama,n);
 cout<<"Jawaban a:\n";
 a(nama,n);
 cout<<"Jawaban b:\n";
 asc(nama,n);
 cout<<"Jawaban c:\n";
 desc(nama,n);
 return 0;
}

#include <iostream>
using namespace std;

// menggunakan prosedur dan fungsi
// prosedur untuk menampilkan di method main
// fungsi untuk mengeksekusi nilai
// prosedur isinya hanya coout,tidak ada cin

double menghitungLuas(double s)
{
    double L;
    L = s * s;
    return L;
}

void menampilkanLuas(double s)
{
    double L = menghitungLuas(s);
    cout << "Luas \t= s x s" << endl;
    cout << "L \t= " << s << " x " << s << endl;
    cout << "L \t= " << L << endl;
}

int main()
{
    double s;
    cout << "Masukkan sisi persegi : ";
    cin >> s;
    menampilkanLuas(s);
    return 0;
}

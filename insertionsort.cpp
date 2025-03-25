#include <iostream>
using namespace std;

int arr[20]; // Membuat Array dengan panjang data 20
int n; // Membuat Variable inputan n

void input()
{ // Procedure Input
while (true)
{
cout << "masukkan jumlah data pada array : "; // membuat inputan jumlah elememt array
cin >> n; // memanggil variable inputan n

if (n <= 20)
{ // membuat kondisi n tidak lebih dari 20
break;
}
else
{
cout << "\nArray yang anda masukkan maksimal 20 Elemen.\n"; // menampilkan pesan jika data lebih dari 20
}
}
cout << endl; // Membuat jarak perbaris program
cout << "======================" << endl; // Membuat tampilan susunan data elemnt array
cout << "Masukkan Element Array" << endl;
cout << "======================" << endl;

for (int i = 0; i < n; i++) // menggunakan perulangan for untuk menyimpan data pada array
{
cout << "Data ke-" << (i + i) << ": "; // Memasukkan atau menginputkan nilai data n
cin >> arr[i]; // Menyimpan nilaidata n kedalam array arr
}
}
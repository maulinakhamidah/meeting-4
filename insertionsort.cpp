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

void insertionsort()
{ // Procedure Insertionsort

int temp; // Membuat variable data temporer atau penyimpanan sementara
int j, i; // Membuat variable j sebagai penaanda

for (i = i; i <= n - 1; i++)
{ // Step 1

 temp = arr[i]; // Step 2

 j = i - 1; // Step 3

 while (j >= 0 && arr[j] > temp) // Step 4
{
arr[j + 1] = arr[j]; // Step 5
}
}


}
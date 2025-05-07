#include <iostream>
#include <string>
using namespace std;

int arr[10]; // Deklarasi Variable Global array dengan panjang 20
int n;       // Deklarasi Variable Global n untuk menyimpan elemen pada array
int x;      // Deklarasi Variable global x untuk menyimpan elemen yang akan dicari pada array

void input() // Procedure input
{
    int d;
    while (true)
    {
        cout << "Masukkan banyaknya elemen pada array : ";
        cin >> n;
        if (n <= 10)
        {
            break;
        }
        else
        {
            cout << "Array maksimal adalah 10" << endl;
        }
    }
}
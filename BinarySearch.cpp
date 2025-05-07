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
    cout << endl;
    cout << "==========================" << endl;
    cout << "Masukkan elemen pada array" << endl;
    cout << "==========================" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "Data ke-" << (i + 1) << " = ";
        cin >> arr[i];
    }
}
    

void bubble_SortArray()
{
    int pass = 1; // Step 1
    do
    {
        for (int j = 0; j <= n - 1 - pass; j++) // Step 2
        {
            if (arr[j] > arr[j + 1]) // Step 3
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
        pass++; // Step 4
    } while (pass <= n - 1); // Step 5
}

void display()
{
    cout << endl;
    cout << "=================================" << endl;
    cout << "Element Array setelah diurutkan (Asc) " << endl;
    cout << "=================================" << endl;
    cout << endl;
    for (int j = 0; j < n; j++)
    {
        cout << arr[j];
        if (j < n - 1)
        {
            cout << " --> ";
        }
    }
}


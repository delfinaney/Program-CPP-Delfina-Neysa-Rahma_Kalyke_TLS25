#include <iostream>
using namespace std;

// Fungsi untuk membalik array integer yang merepresentasikan ASCII char
void reverseArray(int arr[], int length)
{
    for (int i = 0; i < length / 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[length - 1 - i];
        arr[length - 1 - i] = temp;
    }
}

int main()
{
    int n;
    cin >> n; // panjang kata atau kalimat dalam jumlah karakter
    int asciiArr[n];

    // Input ASCII kode karakter satu per satu
    for (int i = 0; i < n; i++)
    {
        cin >> asciiArr[i];
    }

    // Balikkan array ASCII
    reverseArray(asciiArr, n);

    // Cetak karakter setelah dibalik
    for (int i = 0; i < n; i++)
    {
        cout << (char)asciiArr[i];
    }

    return 0;
}
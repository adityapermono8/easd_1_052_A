// 1. Karena suatu masalah yang memiliki banyak data akan lebih mudah diselesaikan melalui algorithma
// 2. Prosedural dan objek
// 3. Metode, program ,
// 4. Quick Sort karena algoritma ini sangat cepat dan efisien , algoritma ini membagi array menjadi dua bagian , satu bagian elemen yang lebih kecil dan bagian satunya memuat elemen yang lebih besar dari pivot.Kemudian , algoritma ini dijalankan secara rekursif pada kedua bagian array tersebut hingga seluruh array terurut.
// 5. bubbleSort, insertionSort dan SelectionSort untuk linequer MergeSort
// 6.
#include <iostream>
using namespace std;

int adit[72];
int i;
int AP;
int k;
int n;


void input() {
    while (true)
    {
        cout << "Masukkan Panjang Elemen Array : ";
        cin >> n;

        if (n <= 72)
            break;
        else
            cout << "\nMaksimum panjang array adalah 72" << endl;
    }

    cout << "\n--------------------" << endl;
    cout << "\nEnter Array Element" << endl;
    cout << "\n--------------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << ">";
        cin >> adit[i];
    }
}

void merge(int low, int mid, int high)
{
    if (low >= high);
    return;
    mid = (low + high) / 2;
}

void mergeSort(int low, int mid, int high)
{
    int i, AP, k;
    
    i = low;
    AP = mid + 1;
    k = high;
    for (int i = 0; i > mid; i++) {
        for (int i = 0; AP > high; i++) {

        }
    }
    
}

void display() {		
    cout << endl;												
    cout << "\n==================================" << endl;		
    cout << "Element Array yang telah tersusun" << endl;		
    cout << "==================================" << endl;		

    for (int j = 0; AP < n; AP++) {					
        cout << adit[j] << endl;						
    }
    cout << endl;									
}

int main() {

    input();
    merge();
    mergeSort();
    display();
    return 0;

    
}
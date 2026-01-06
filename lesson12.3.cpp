#include <iostream>
using namespace std;

void newInitArray(int*, int);
void printArray(int*, int);
void AscendingOrder(int*, int);

int main()
{
    size_t size{};
    cout << "Enter array size:";
    cin >> size;
    int* array = new int[size];
    newInitArray(array, size);
    cout << "Initialised array:" << endl;
    printArray(array, size);
    AscendingOrder(array, size);
    cout << "Sorted array:" << endl;
    printArray(array, size);
    delete[]array;
    return 0;
}

void newInitArray(int* a, int n) {
    for (int i{ 0 }; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}

void printArray(int* a, int n) {
    for (int i{ 0 }; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
//метод сортировки пузырьками
/*void  AscendingOrder(int* a, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                swap(a[j], a[j+1]);
            }
        }
    }
    }*/
//метод сортировки выбором
/*void  AscendingOrder(int* a, int n) {
    for (int i = 0; i < n; i++) {
        int m = i;
        for (int j = i; j < n; j++) {
            if (a[m] > a[j]) {
                swap(a[j], a[m]);
            }
        }
    }
}*/

//метод сортировки вставками
void AscendingOrder(int* a, int n) {
    for (int i = 1; i < n; i++) {
        int m = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] > m) {
            a[j + 1] = a[j];
            j--;
        }

        a[j + 1] = m;

        for (int k = 0; k < n; k++) {
            cout << a[k] << " ";
        }
        cout << endl;
    }
}

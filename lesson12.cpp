#include <iostream>
using namespace std;

void newInitArray(int*, int);
void printArray(int*, int);
double countDivisibleByFour(int*, int);

int main()
{
    size_t size{};
    cout << "Enter array size:";
    cin >> size;
    int* array = new int[size];
    newInitArray(array, size);
    cout << "Initialised array:\n";
    printArray(array, size);
    cout << "\nNumber of elements divisible by four =:" << countDivisibleByFour(array, size);
    delete[]array;
    return 0;  
}

void newInitArray(int *a, int n) {
    for (int i{ 0 }; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}

void printArray(int *a, int n) {
    for (int i{ 0 }; i < n; i++) {
        cout << a[i] << " ";
    }
}

double countDivisibleByFour(int *a, int n) {
    int count = 0;
    for (int i{ 0 }; i < n; i++) {
        if (a[i] % 4 == 0) {
            count++;
        }
    }
    return count;
}
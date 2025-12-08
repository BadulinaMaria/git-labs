#include <iostream>
using namespace std;

void initArray(int*, int);
void printArray(int*, int);
long long productOutsideRange(int*, int, int, int);

int main() {
    size_t size;
    int a, b;

    cout << "Enter array size: ";
    cin >> size;

    cout << "Enter range boundaries [a; b]:\n";
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;

    int* array = new int[size];

    initArray(array, size);
    cout << "Initialized array:\n";
    printArray(array, size);

    long long result = productOutsideRange(array, size, a, b);
    cout << "\nProduct of elements outside range ["
        << a << "; " << b << "] = " << result;

    delete[] array;
    return 0;
}

void initArray(int* a, int n) {
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }
}

void printArray(int* a, int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}

long long productOutsideRange(int* arr, int n, int a, int b) {
    long long product = 1;
    bool found = false;

    for (int i = 0; i < n; i++) {
        if (arr[i] < a || arr[i] > b) {
            product *= arr[i];
            found = true;
        }
    }
    if (!found) {
        return 0;
    }

    return product;
}
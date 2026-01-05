#include <iostream>
#include <cstring>
#include <algorithm>
#include "array_operations.h"

using namespace std;

// Из lesson12.cpp
void arrayDivisibleByFour() {
    size_t size;
    cout << "Введите размер массива: ";
    cin >> size;

    int* array = new int[size];
    cout << "Заполните массив:\n";
    for (size_t i = 0; i < size; i++) {
        cout << "array[" << i << "] = ";
        cin >> array[i];
    }

    cout << "Массив: ";
    for (size_t i = 0; i < size; i++) {
        cout << array[i] << " ";
    }

    int count = 0;
    for (size_t i = 0; i < size; i++) {
        if (array[i] % 4 == 0) {
            count++;
        }
    }

    cout << "\nКоличество элементов, делящихся на 4: " << count << endl;
    delete[] array;
}

// Из lesson12.2.cpp
void arrayProductOutsideRange() {
    size_t size;
    cout << "Введите размер массива: ";
    cin >> size;

    int* array = new int[size];
    cout << "Заполните массив:\n";
    for (size_t i = 0; i < size; i++) {
        cout << "array[" << i << "] = ";
        cin >> array[i];
    }

    int a, b;
    cout << "Введите границы диапазона [a, b]: ";
    cin >> a >> b;

    long long product = 1;
    bool found = false;

    for (size_t i = 0; i < size; i++) {
        if (array[i] < a || array[i] > b) {
            product *= array[i];
            found = true;
        }
    }

    if (!found) product = 0;
    cout << "Произведение элементов вне диапазона: " << product << endl;
    delete[] array;
}

// Из lesson12.3.cpp
void arraySorting() {
    size_t size;
    cout << "Введите размер массива: ";
    cin >> size;

    int* array = new int[size];
    cout << "Заполните массив:\n";
    for (size_t i = 0; i < size; i++) {
        cout << "array[" << i << "] = ";
        cin >> array[i];
    }

    cout << "Исходный массив: ";
    for (size_t i = 0; i < size; i++) cout << array[i] << " ";
    cout << endl;

    // Сортировка вставками (из lesson12.3.cpp)
    for (size_t i = 1; i < size; i++) {
        int key = array[i];
        int j = i - 1;

        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j--;
        }
        array[j + 1] = key;
    }

    cout << "Отсортированный массив: ";
    for (size_t i = 0; i < size; i++) cout << array[i] << " ";
    cout << endl;

    delete[] array;
}

// Из lesson9.cpp
void palindromeCheck() {
    const int MAX_SIZE = 100;
    char word[MAX_SIZE];

    cout << "Введите слово: ";
    cin >> word;

    int length = strlen(word);
    bool isPalindrome = true;

    for (int i = 0; i < length / 2; i++) {
        if (word[i] != word[length - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    cout << "Слово \"" << word << "\" ";
    if (isPalindrome) {
        cout << "является палиндромом\n";
    }
    else {
        cout << "не является палиндромом\n";
    }
}

// Из lesson10.cpp (упрощенная версия)
void stringToIntConversion() {
    const int SIZE = 20;
    char arr[SIZE];

    cout << "Введите число: ";
    cin >> arr;

    int num = 0;
    for (int i = 0; arr[i] != '\0'; i++) {
        if (arr[i] >= '0' && arr[i] <= '9') {
            num = num * 10 + (arr[i] - '0');
        }
    }

    cout << "Число: " << num << endl;
}
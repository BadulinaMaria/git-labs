#include <iostream>
#include <bitset>
#include <cstdlib>
#include "bit_operations.h"

using namespace std;

// Из lesson14.cpp
std::bitset<4> rotateLeft(const std::bitset<4>& bits) {
    return (bits << 1) | (bits >> 3);
}

void simpleBitDemo() {
    cout << "\n=== Простые битовые операции ===\n";
    bitset<4> val{ 0b0101 };
    cout << "Исходное: " << val << endl;
    cout << "Сдвиг влево: " << (val << 1) << endl;
    cout << "Сдвиг вправо: " << (val >> 1) << endl;
    cout << "Инверсия: " << (~val) << endl;

    bitset<4> b1("1000");
    bitset<4> b2 = rotateLeft(b1);
    cout << "Циклический сдвиг: " << b1 << " -> " << b2 << endl;
}

// Из lesson15.cpp (упрощенная версия)
void bitOperationsDemo() {
    cout << "\n=== Расширенные битовые операции ===\n";

    srand(time(nullptr));
    const int SIZE = 5;
    int array[SIZE];

    cout << "Массив (десятичный): ";
    for (int i = 0; i < SIZE; i++) {
        array[i] = rand() % 256;
        cout << array[i] << " ";
    }
    cout << endl;

    cout << "Массив (двоичный):   ";
    for (int i = 0; i < SIZE; i++) {
        cout << bitset<8>(array[i]) << " ";
    }
    cout << endl;

    // Подсчет единичных битов
    cout << "Количество единиц:   ";
    for (int i = 0; i < SIZE; i++) {
        int count = 0;
        int num = array[i];
        while (num) {
            count += num & 1;
            num >>= 1;
        }
        cout << count << " ";
    }
    cout << endl;

    // Проверка на степень двойки
    cout << "Степень двойки?:     ";
    for (int i = 0; i < SIZE; i++) {
        int num = array[i];
        bool isPowerOfTwo = (num != 0) && ((num & (num - 1)) == 0);
        cout << (isPowerOfTwo ? "да " : "нет ");
    }
    cout << endl;
}
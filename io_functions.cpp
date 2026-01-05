#include <iostream>
#include <iomanip>
#include <limits>
#include "io_functions.h"

using namespace std;

void dataTypesTable() {
    cout << setw(12) << "Тип" << setw(12) << "Размер"
        << setw(20) << "Минимум"
        << setw(20) << "Максимум" << endl;

    cout << setw(12) << "char" << setw(12) << sizeof(char)
        << setw(20) << static_cast<int>(numeric_limits<char>::min())
        << setw(20) << static_cast<int>(numeric_limits<char>::max()) << endl;

    cout << setw(12) << "int" << setw(12) << sizeof(int)
        << setw(20) << numeric_limits<int>::min()
        << setw(20) << numeric_limits<int>::max() << endl;

    cout << setw(12) << "unsigned" << setw(12) << sizeof(unsigned)
        << setw(20) << numeric_limits<unsigned>::min()
        << setw(20) << numeric_limits<unsigned>::max() << endl;

    cout << setw(12) << "float" << setw(12) << sizeof(float)
        << setw(20) << numeric_limits<float>::min()
        << setw(20) << numeric_limits<float>::max() << endl;

    cout << setw(12) << "double" << setw(12) << sizeof(double)
        << setw(20) << numeric_limits<double>::min()
        << setw(20) << numeric_limits<double>::max() << endl;
}

void printMyName() {
    cout << "Меня зовут: Бадулина Мария\n";
}

void printSquare(int n) {
    cout << "Квадрат числа " << n << " = " << n * n << endl;
}

void squareByReference(int& n) {
    n = n * n;
}

void basicLoops() {
    int choice;
    cout << "1. Сумма чисел от 1 до n\n";
    cout << "2. Шахматная доска\n";
    cout << "3. Сложение чисел (цикл while)\n";
    cout << "Выберите: ";
    cin >> choice;

    if (choice == 1) {
        int n, sum = 0;
        cout << "Введите n: ";
        cin >> n;
        for (int i = 1; i <= n; i++) {
            sum += i;
        }
        cout << "Сумма чисел от 1 до " << n << " = " << sum << endl;
    }
    else if (choice == 2) {
        int rows, cols;
        cout << "Введите количество строк: ";
        cin >> rows;
        cout << "Введите количество столбцов: ";
        cin >> cols;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if ((i + j) % 2 == 0) {
                    cout << "+ ";
                }
                else {
                    cout << "- ";
                }
            }
            cout << endl;
        }
    }
    else if (choice == 3) {
        char continueFlag = 'y';
        while (continueFlag == 'y') {
            int a, b;
            cout << "Введите два числа: ";
            cin >> a >> b;
            cout << "Сумма = " << (a + b) << endl;

            cout << "Продолжить? (y/n): ";
            cin >> continueFlag;
        }
        cout << "Конец программы.\n";
    }
    else {
        cout << "Неверный выбор!\n";
    }
}
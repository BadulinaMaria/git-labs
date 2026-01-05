#include <iostream>
#include <Windows.h>
#include "menu.h"
#include "io_functions.h"
#include "math_functions.h"
#include "array_operations.h"
#include "bit_operations.h"
#include "game_functions.h"
#include "recursion.h"

using namespace std;

void showMainMenu() {
    cout << "ОБЪЕДИНЕННАЯ ПРОГРАММА\n";
    cout << "1.  Типы данных (вывод таблицы)\n";
    cout << "2.  Операции с дробями\n";
    cout << "3.  Циклы и базовые алгоритмы\n";
    cout << "4.  Функции и ссылки\n";
    cout << "5.  Массивы и строки\n";
    cout << "6.  Рекурсивные функции\n";
    cout << "7.  Математические ряды\n";
    cout << "8.  Динамические массивы\n";
    cout << "9.  Битовые операции\n";
    cout << "10. Игра 'Пляж-Океан-Поле' (простая)\n";
    cout << "11. Игра 'Пляж-Океан-Поле' (полная)\n";
    cout << "0.  Выход\n";
    cout << "Выберите вариант: ";
}

void runLesson(int choice) {

    switch (choice) {
    case 1:
        cout << "ТИПЫ ДАННЫХ\n";
        dataTypesTable();
        break;

    case 2:
        cout << "ОПЕРАЦИИ С ДРОБЯМИ\n";
        fractionOperations();
        break;

    case 3:
        cout << "ЦИКЛЫ И БАЗОВЫЕ АЛГОРИТМЫ\n";
        basicLoops();
        break;

    case 4:
        cout << "ФУНКЦИИ И ССЫЛКИ\n";
        printMyName();
        {
            int n;
            cout << "Введите число для возведения в квадрат: ";
            cin >> n;
            printSquare(n);

            int a = 5;
            cout << "\nПример работы с ссылкой:\n";
            cout << "До squareByReference: a = " << a << endl;
            squareByReference(a);
            cout << "После squareByReference: a = " << a << endl;
        }
        break;

    case 5:
        cout << "МАССИВЫ И СТРОКИ\n";
        {
            int subchoice;
            cout << "1. Проверка слова на палиндром\n";
            cout << "2. Преобразование строки в число\n";
            cout << "Выберите: ";
            cin >> subchoice;

            if (subchoice == 1) {
                palindromeCheck();
            }
            else if (subchoice == 2) {
                stringToIntConversion();
            }
            else {
                cout << "Неверный выбор!\n";
            }
        }
        break;

    case 6:
        cout << "РЕКУРСИВНЫЕ ФУНКЦИИ\n";
        {
            size_t n;
            cout << "Введите n для рекурсивных функций: ";
            cin >> n;
            cout << "sum_n(" << n << ") = " << sum_n(n) << endl;
            cout << "fact_n(" << n << ") = " << fact_n(n) << endl;
            cout << "fank_3(" << n << ") = " << fank_3(n) << endl;
        }
        break;

    case 7:
        cout << "МАТЕМАТИЧЕСКИЕ РЯДЫ\n";
        {
            int subchoice;
            cout << "1. Вычисление cos(x) через ряд\n";
            cout << "2. Вычисление sqrt(1+x) через ряд\n";
            cout << "3. Предел последовательности 1\n";
            cout << "4. Предел последовательности 2\n";
            cout << "Выберите: ";
            cin >> subchoice;

            if (subchoice == 1) {
                double x, eps;
                cout << "Введите x и точность eps: ";
                cin >> x >> eps;
                cout << "cosUser(" << x << ") = " << cosUser(x, eps) << endl;
                cout << "cos(" << x << ") = " << cos(x) << endl;
            }
            else if (subchoice == 2) {
                double x, eps;
                cout << "Введите x (-1 <= x <= 1) и точность eps: ";
                cin >> x >> eps;
                cout << "sqrtUser(" << x << ") = " << sqrtUser(x, eps) << endl;
                cout << "sqrt(1+" << x << ") = " << sqrt(1 + x) << endl;
            }
            else if (subchoice == 3) {
                double eps;
                cout << "Введите точность eps: ";
                cin >> eps;
                cout << "Предел последовательности = " << iterativeCalculSequence1(eps) << endl;
            }
            else if (subchoice == 4) {
                double eps;
                cout << "Введите точность eps: ";
                cin >> eps;
                cout << "Предел последовательности = " << iterativeCalculSequence2(eps) << endl;
            }
            else {
                cout << "Неверный выбор!\n";
            }
        }
        break;

    case 8:
        cout << "ДИНАМИЧЕСКИЕ МАССИВЫ\n";
        {
            int subchoice;
            cout << "1. Подсчет чисел, делящихся на 4\n";
            cout << "2. Произведение элементов вне диапазона\n";
            cout << "3. Сортировка массива\n";
            cout << "Выберите: ";
            cin >> subchoice;

            if (subchoice == 1) {
                arrayDivisibleByFour();
            }
            else if (subchoice == 2) {
                arrayProductOutsideRange();
            }
            else if (subchoice == 3) {
                arraySorting();
            }
            else {
                cout << "Неверный выбор!\n";
            }
        }
        break;

    case 9:
        cout << "БИТОВЫЕ ОПЕРАЦИИ\n";
        simpleBitDemo();
        bitOperationsDemo();
        break;

    case 10:
        cout << "ИГРА 'ПЛЯЖ-ОКЕАН-ПОЛЕ' (ПРОСТАЯ)\n";
        runSimpleBeachGame();
        break;

    case 11:
        cout << "ИГРА 'ПЛЯЖ-ОКЕАН-ПОЛЕ' (ПОЛНАЯ)\n";
        runBeachGame();
        break;

    default:
        cout << "Неверный выбор! Попробуйте снова.\n";
    }
}

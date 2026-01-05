#include <iostream>
#include <cmath>
#include "math_functions.h"  

using namespace std;

// Из lesson11.cpp
double cosUser(double x, double eps) {
    double sum = 1.0;
    double term = 1.0;

    for (int i = 1; fabs(term) > eps; i++) {
        term = term * (-1) * x * x / ((2 * i - 1) * (2 * i));
        sum = sum + term;
    }
    return sum;
}

// Из lesson11.1.2.cpp
double sqrtUser(double x, double eps) {
    double sum = 1.0;
    double term = 0.5 * x;
    sum = sum + term;
    int n = 2;

    while (fabs(term) > eps) {
        term = term * x * (3 - 2 * n) / (2 * n);
        sum = sum + term;
        n++;
    }
    return sum;
}

// Из lesson11.2.1.cpp
double sequence1(unsigned n) {
    return (3.0 * n * n - 7.0 * n + 1.0) / (2.0 - 5.0 * n - 6.0 * n * n);
}

double iterativeCalculSequence1(double epsilon) {
    double current{}, next{};
    int i{};
    do {
        current = sequence1(i);
        next = sequence1(i + 1);
        i++;
    } while (fabs(current - next) > epsilon);
    return current;
}

// Из lesson11.2.2.cpp
double sequence2(unsigned n) {
    if (n == 0) return 0;
    return 2.0 / static_cast<double>(n);
}

double iterativeCalculSequence2(double epsilon) {
    double current{}, next{};
    int i{ 1 };
    do {
        current = sequence2(i);
        next = sequence2(i + 1);
        i++;
    } while (fabs(current - next) > epsilon && i < 1000);
    return current;
}

// Из lesson3.cpp и lesson4.cpp
void fractionOperations() {
    int choice;
    cout << "\n1. Операции с дробями (вещественный результат)\n";
    cout << "2. Операции с дробями (дробный результат)\n";
    cout << "Выберите: ";
    cin >> choice;

    if (choice == 1) {
        // Из lesson3.cpp
        int a, b, c, d;
        char dummy;
        cout << "Введите две дроби в формате a/b,c/d: ";
        cin >> a >> dummy >> b >> c >> dummy >> d;

        float n = static_cast<float>(a) / b;
        float f = static_cast<float>(c) / d;

        cout << "Выберите операцию (+, -, *, /): ";
        char ch;
        cin >> ch;

        float result = 0;
        switch (ch) {
        case '+': result = n + f; break;
        case '-': result = n - f; break;
        case '*': result = n * f; break;
        case '/': result = n / f; break;
        default: cout << "Неверная операция!\n"; return;
        }

        cout << "Результат: " << result << endl;
    }
    else {
        // Из lesson4.cpp
        int a, b, c, d;
        char dummy;
        cout << "Введите две дроби в формате a/b,c/d: ";
        cin >> a >> dummy >> b >> c >> dummy >> d;

        int n, f;
        cout << "Выберите операцию (+, -, *, /): ";
        char ch;
        cin >> ch;

        switch (ch) {
        case '+':
            n = a * d + c * b;
            f = b * d;
            break;
        case '-':
            n = a * d - c * b;
            f = b * d;
            break;
        case '*':
            n = a * c;
            f = b * d;
            break;
        case '/':
            n = a * d;
            f = b * c;
            break;
        default:
            cout << "Неверная операция!\n";
            return;
        }

        cout << "Результат: " << n << "/" << f << endl;
    }
}
#include <iostream>
#include <cmath>
#include "recursion.h"

using namespace std;

// Из lesson13.cpp
double sum_n(size_t n) {
    return n == 1 ? 1 : n + sum_n(n - 1);
}

double fact_n(size_t n) {
    return n == 1 ? 1 : n * fact_n(n - 1);
}

double sum_cos(size_t x, size_t n) {
    return n == 1 ? cos(pow(1 + x * x, 2)) : cos(pow(1 + n * x * x, 2)) + sum_cos(x, n - 1);
}

double sum_s(size_t x, size_t n) {
    return n == 1 ? (1 + x) : (n + x) + sum_s(x, n - 1);
}

double sum_sin(size_t x, size_t n) {
    return n == 1 ? sin(1 + x) : (n * n + x) + sum_sin(x, n - 1);
}

double fank_1(size_t n) {
    return n == 1 ? -1 : (n * fank_1(n - 1)) * (-1);
}

double fank_2(size_t n) {
    return n == 0 ? 2 : 2 * 2 * fank_2(n - 1);
}

double fank_3(size_t n) {
    return n <= 1 ? 1 : n * fank_3(n - 2);
}
#include <iostream>
#include <cmath>
using namespace std;

double sqrtUser(double, double);

int main(void) {
    double x, eps;

    while (true) {
        cout << "Enter x (from -1 to 1) and precision: ";
        cin >> x >> eps;
        if (x >= -1 && x <= 1 && fabs(eps) < 0.05 && fabs(eps) > 0) break;
        cout << "Invalid parameters. Please try again!\n";
        cout << "x must be in range [-1, 1] and eps > 0\n";
    }

    cout << "Iterative calculated value = " << sqrtUser(x, eps)
        << "\nBuilt-in function value = " << sqrt(1 + x);
    return 0;
}

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

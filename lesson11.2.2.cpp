#include <iostream>
#include <cmath>
using namespace std;

double iterativeCalcul(double epsilon);
double sequence(unsigned n);

int main(void) {
    double epsilon{};

    while (true) {
        cout << "Enter precision: ";
        cin >> epsilon;
        if (fabs(epsilon) < 0.05 && epsilon > 0) break;
        cout << "Precision entered incorrectly. Try again!\n";
    }

    cout << "Value of computed limit = " << iterativeCalcul(epsilon);
    return 0;
}

double iterativeCalcul(double epsilon) {
    double current{}, next{};
    int i{};
    do {
        current = sequence(i);
        next = sequence(i + 1);
        i++;
    } while (fabs(current - next) > epsilon);
    return current;
}

double sequence(unsigned n) {
    return 2 / static_cast<double>(n);
}

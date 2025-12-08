#include <iostream>
#include <cmath>

using namespace std;


double cosUser(double x, double eps) {
	double sum = 1.0;
	double term = 1.0;

	for (int i = 1; fabs(term) > eps; i++) {
		term = term * (-1) * x * x / ((2 * i - 1) * (2 * i));
		sum = sum + term;
	}
	return sum;
}

int main(void) {
	double x, eps;

		cout << "Enter x and precision: ";
		cin >> x >> eps;
		if (fabs(eps) < 0 && fabs(eps) > 0.05) {
			cout << "Invalid parameters. Please try again!\n";}
	cout << "Iterative calculated value = " << cosUser(x, eps)
		<< "\n Built-in function value = " << cos(x);
	return 0;
}

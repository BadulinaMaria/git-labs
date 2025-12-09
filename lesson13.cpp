#include <iostream>
#include <cmath>
using namespace std;
 

//sum of 1 ... n

double sum_n(size_t n)
{

	return n == 1 ? 1:n + sum_n(n - 1);

}

double fact_n(size_t n)
{

	return n == 1 ? 1 : n * fact_n(n - 1);

}

double sum_cos(size_t x, size_t n)
{

	return n == 1 ? cos(pow(1 + x * x,2)): cos(pow(1 + n * x * x, 2)) + sum_cos(x,n-1);

}
double sum_s(size_t x, size_t n)
{

	return n == 1 ?(1+x):(n+x) + sum_s(x, n - 1);

}
double sum_sin(size_t x, size_t n)
{

	return n == 1 ? sin(1 + x) : (n*n + x) + sum_sin(x, n - 1);


}

double fank_1( size_t n)
{

	return n == 1 ? -1 : (n * fank_1(n - 1)) * ( - 1);

}

double fank_2(size_t n)
{

	return n == 0 ? 2 : 2*2 * fank_2(n-1); 

}

double fank_3(size_t n)
{

	return n <= 1 ? 1 : n * fank_3(n - 2);

}
int main()
{
     /*
	//expr?expr_true:expr_false;

	int a{ 1 };
	int b{};
	b = (a == 1) ? 2 * a : 0;
	
	cout << "Sum of natural"
		<< " numbers up to and including 5 = "
		<< sum_n(5)
		<< "\nFactorial of the number 5 = "
		<< fact_n(5);
	*/
	//size_t x;
	size_t n;
	cout << "Enter numbers ";
	//cin >> x;
	cin >> n;
	//cout << "Cosinus:"<<sum_cos(x,n);
	//cout << "Sum:" << sum_s(x, n);
	//cout << "Sinus:" << sum_sin(x, n);
	//cout << "Function first:" << fank_1(n);
	//cout << "Function second:" << fank_2(n);
	cout << "Function third:" << fank_3(n);
	return 0;
}



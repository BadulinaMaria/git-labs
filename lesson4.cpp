#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;
int main()
{
/*  bool var=true;
 int a = 10; 
 char ch='a'
 if (a)
 {
	 std::cout << "a is not zero";
	 //return 0;
 }
 else if (a>7&&a<10)
 {
	 std::cout << "bbb";
 }
 else 
 {
	 std::cout << "ccc";
 }*/
	/*char ch = 'a';
	switch(ch)
	{
	case 'a':
		std::cout << 'a';
		break;
	case 'b':
		std::cout << 'b';
		break;
	default:
		std::cout << 'c';
	}*/


	/*int a = 4, b = 5;
	std::cout <<a<<' '<<b<< std::endl;
	if(a>b)
	{
		int temp = a;
		a = b;
		b = temp;
	}
	std::cout << a << ' ' << b << std::endl;
	*/



	/*int a, b, c;
	std::cout << "Enter a,b,c" << std::endl;
	std::cin >> a  >> b >> c;
	if (a>b)
	{
		int temp = a;
		a = b;
		b = temp;

	}
	 if (b>c) {
		int temp = b;
		b=c;
		c = temp;
	}
	 if (a > b)
	 {
		 int temp = a;
		 a = b;
		 b = temp;
	 }
	 std::cout << a << ' ' << b << ' ' << c << std::endl;
	 */




int a, b, c, d;
char dummy;
cout << "Enter a/b, c/d" << endl;
cin >> a >> dummy >> b >> c >> dummy >> d;

int n, f;
char ch;
cout << "Which operation? Enter +, -, *, /" << endl;
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
	cout << "Invalid operation" << endl;
	return 1;
}
cout << "Answer: " << n << "/" << f << endl;
return 0;
}

#include <iostream>
using namespace std;
int main()
{/*int a, b, c, d;
	char dummy;
	cout << "Enter a/b,c/d" << endl;
	cin >> a >> dummy >> b >> c >> dummy >> d;
	float n, f, t;
	n = static_cast<float>(a)/b;
	f = static_cast<float>(c)/d;
	t = n + f;
	cout << "answer:" << t << endl;
	return 0; */
	int a, b, c, d;
	char dummy;
	cout << "Enter a/b,c/d" << endl;
	cin >> a >> dummy >> b >> c >> dummy >> d;
	float n, f, t;
	n = static_cast<float>(a) / b;
	f = static_cast<float>(c) / d;
	cout << "Which operation? Enter +, -, *, /" << endl;
	//cin >> '+' >> '-' >> '*' >> '/';
	char ch;
	cin >> ch;
	if (ch == '+') {
		t = n + f;
	}
	else if (ch == '-') {
		t = n - f;
	}
	else if (ch == '*') {
		t = n * f;
	}
	else if (ch == '/') {
		t = n / f;
	}
	cout << "Answer: " << t << endl;
	return 0;
}
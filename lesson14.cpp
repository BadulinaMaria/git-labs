#include <iostream>
#include <bitset>


using namespace std;

bitset<4> rotateLeft(const bitset<4>& bits) {
	return (bits << 1) | (bits >> 3);
}

int main()
{   
	setlocale(LC_ALL, "RU");
	/*bitset<4> val{ 0b0101 };
	cout << val << endl;


	/*int n;
	cout << " enter n (from 0 to 3): ";
	cin >> n;*/


	/*
		enum cond
	{
		Sad, Mad, Sleep, Eating
	};cout << val.test(Sad) << endl;
	cout << val.set(Mad) << endl;
	cout << val.reset(Sleep) << endl;
	cout << val.flip(Eating) << endl;*/


	/*cout << val.size() << endl;
	cout << val.count() << endl;
	cout << val.all() << endl;
	cout << val.none() << endl;*/


	/*bitset<4> a{ val << 2};
	cout << a << endl;
	bitset<4> b{ val >> 1 };
	cout << b << endl;
	bitset<4> c{ ~val };
	cout << c << endl;
	bitset<4> d{ val & a };
	cout << d << endl;
	bitset<4> e{ val | a};
	cout << e << endl;
	bitset<4> j{ val ^ a };
	cout << j << endl;*/


	/*bitset<4> bits("1000");
	cout << "Исходное: " << bits << endl;
	bool M = bits.test(3); 
	bits <<= 1;
	bits.set(0, M); 
    cout << "После циклического сдвига: " << bits << endl;*/

	
	bitset<4> b1("1000");
	bitset<4> b2 = rotateLeft(b1);
	cout << "Исходное:  " << b1 << endl;
	cout << "Влево:     " << b2 <<endl;

	return 0;
}

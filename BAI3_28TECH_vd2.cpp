// BAI3_28TECH_vd2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	long long  a, b;
	cin >> a >> b;
	cout << a + b << endl;
	cout << a - b << endl;
	cout << a * b << endl;
	if (b != 0) {
		cout << fixed << setprecision(4) << double(a / b);
	}
	else {
		cout << "INVALID";
	}
	return 0;
}


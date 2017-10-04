#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	power(2, 2);

	return 0;
}

void power(int base, int exponent)
{
	int square;
	square = pow(base, exponent);

	cout << square << endl;
}
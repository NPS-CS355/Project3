#include <iostream>
using namespace std;

int greatestCommonDivisor(int a, int b){
	while(b != 0){
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int main()
{
	int a = 48, b = 18;
	int gcd;

	gcd = greatestCommonDivisor(a,b);

	cout << "The greatest common divisor is: " << gcd << endl;

	return 0;
}



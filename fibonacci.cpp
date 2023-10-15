#include <iostream>
using namespace std;

unsigned long long fibonacci(int n){
	if(n <= 1){
		return n;
	}
	return fibonacci(n-1) + fibonacci(n-2);
}

int main(){
	int n = 5; // You can change n to different values
	
	cout << "Fibonacci(" << n << ") = " << fibonacci(n) << endl;

	return 0;
}

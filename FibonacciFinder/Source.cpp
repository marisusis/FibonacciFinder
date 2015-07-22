#include <iostream>

using namespace std;

int fibonacci(int n);

int main() {

	fibonacci(4);

	return 0;

}

int fibonacci(int n) {
	int a = 0;
	int b = 1;
	for (i=0; i<n; i++) {
		cout << a << " + " << b << " = " << a + b << endl;
		a = a + b;
	}
}
#include <iostream>

using namespace std;

//int fibonacci(int n);

int main() {

	//cout << fibonacci(4) << endl;

	int a = 0;
	int b = 1;
	int c;
	for (int i=0; i<3; i++) {
		c = a + b;
		cout << a << " + " << b << " = " << c << endl;
		b = a;
		a = c;
		cout << "a = " << a << endl << "b = " << b << endl;
	}
	

	return 0;

}

/*int fibonacci(int n) {
	int a = 0;
	int b = 1;
	int num;
	for (int i=0; i<n; i++) {
		//cout << a << " + " << b << " = ";
		a = a + b;
		//cout << a << endl;
	}
	return a;
}*/
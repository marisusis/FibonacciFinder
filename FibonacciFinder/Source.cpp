#include <iostream>

using namespace std;

//int fibonacci(int n);

int main() {
	int usr;
	string apple;
	bool cont = true;
	while (cont)
	{
		cout << "Enter the number result in the fibonacci sequence to find, or type \'0\' to quit: ";
		cin >> usr;
		cout << endl;
		if (usr == 0) {
			cont = false;
			break;
		} else {
			cout << fibonacci(usr) << endl; 
		}
	}
	

	return 0;

}

int fibonacci(int n) {
	int a = 0;
	int b = 1;
	int num;
	int a = 0;
	int b = 1;
	int c;
	for (int i=0; i<n; i++) {
		c = a + b;
		//cout << a << " + " << b << " = " << c << endl;
		b = a;
		a = c;
		//cout << "a = " << a << endl << "b = " << b << endl;
	}
	return c;
}
#include <iostream>
using namespace std;

int add2(int num1, int num2) {
	int sum = num1 + num2;
	return sum;
}

int main2(void) {

	int a = 5;
	int b = 10;

	int c = add2(a, b);
	cout << c << endl;

	system("pause");
	return 0;
}
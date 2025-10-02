#include <iostream>
using namespace std;

int max3(int num1, int num2);

int main3(void) {

	int a = 5;
	int b = 10;

	int c = max3(a, b);
	cout << c << endl;

	system("pause");
	return 0;
}

int max3(int num1, int num2) {
	int max = num1 > num2 ? num1 : num2;
	return max;
}
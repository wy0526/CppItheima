#include <iostream>
using namespace std;

int main2(void) {
	short num1 = 10;
	int num2 = 10;
	long num3 = 10;
	long long num4 = 10;

	cout << "num1�Ĵ�С:" << sizeof(num1) << endl;
	cout << "short�Ĵ�С:" << sizeof(short) << endl;
	cout << "num2�Ĵ�С:" << sizeof(num2) << endl;
	cout << "num3�Ĵ�С:" << sizeof(num3) << endl;
	cout << "num4�Ĵ�С:" << sizeof(num4) << endl;
	return 0;
}
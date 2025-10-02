#include <iostream>
using namespace std;

int main5(void) {
	int a = 4;
	int b = 5;
	cout << (a == b) << endl; // 0
	cout << (a != b) << endl; // 1
	cout << (a > b) << endl; // 0
	cout << (a < b) << endl; // 1
	cout << (a >= b) << endl; // 0
	cout << (a <= b) << endl; // 1

	system("pause");
	return 0;
}
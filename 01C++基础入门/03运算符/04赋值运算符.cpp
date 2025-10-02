#include <iostream>
using namespace std;

int main4(void) {
	int a = 10;
	a += 2;
	cout << a << endl; //12

	a = 10;
	a -= 2;
	cout << a << endl; //8

	a = 10;
	a *= 2;
	cout << a << endl; //20

	a = 10;
	a /= 2;
	cout << a << endl; //5

	a = 10;
	a %= 2;
	cout << a << endl; //0


	system("pause");
	return 0;
}
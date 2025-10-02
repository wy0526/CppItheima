#include <iostream>
using namespace std;

int main1(void) {

	int a = 10;
	int& b = a;

	cout << "b = " << b << endl;
	cout << "a = " << a << endl;

	b = 100;
	cout << "b = " << b << endl;
	cout << "a = " << a << endl;

	system("pause");
	return 0;
}
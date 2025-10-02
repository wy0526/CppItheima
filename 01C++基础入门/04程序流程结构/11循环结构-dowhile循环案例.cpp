#include <iostream>
using namespace std;

int main11(void) {

	int num = 100;
	int a = 0;
	int b = 0;
	int c = 0;
	int add = 0;

	do {
		a = (num / 1) % 10;
		b = (num / 10) % 10;
		c = (num / 100) % 10;

		add = a * a * a + b * b * b + c * c * c;

		if (add == num) {
			cout << num << endl;
		}
		num++;
	} while (num <= 999);

	system("pause");
	return 0;
}
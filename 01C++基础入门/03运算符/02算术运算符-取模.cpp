#include <iostream>
using namespace std;

int main2(void) {

	int a = 10;
	int b = 3;
	cout << a % b << endl;

	int c = 0.1;
	int d = 0.2;
	//cout << c % d << endl; 不能对小数取模
	system("pause");
	return 0;
}
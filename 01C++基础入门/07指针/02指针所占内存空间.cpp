#include <iostream>
using namespace std;

int main2(void) {

	int a = 10;

	int * p;
	p = &a;

	cout << "sizeof(p) = " << sizeof(p) << endl;
	cout << "sizeof(int *) = " << sizeof(p) << endl;

	system("pause");
	return 0;
}
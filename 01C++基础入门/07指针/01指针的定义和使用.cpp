#include <iostream>
using namespace std;

int main1(void) {

	int a = 10;

	int * p;
	p = &a;

	cout << "p = " << (int)p << endl; 
	cout << "&a = " << (int) & a << endl;

	cout << "*p = " << *p << endl;
	cout << "a = " << a << endl;

	system("pause");
	return 0;
}
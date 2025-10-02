#include <iostream>
using namespace std;

int main(void) {
	int a = 10;
	cout << !a << endl; //0
	cout << !!a << endl; //1
	
	int b = 10;
	int c = 0;
	int d = 0;
	cout << (a && b) << endl; //1
	cout << (c && d) << endl; //0
	cout << (a && c) << endl; //0

	cout << (a || b) << endl; //1
	cout << (c || d) << endl; //0
	cout << (a || c) << endl; //1


	system("pause");
	return 0;
}
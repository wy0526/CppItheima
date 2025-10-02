#include <iostream>
using namespace std;

int main5(void) {

	int arr[] = { 1, 2, 3, 4, 5 };
	int* p = arr;

	cout << *p << endl;

	p++;

	cout << *p << endl;

	//cout << (sizeof(arr) / sizeof(int)) << endl;
	int* p2 = arr;
	for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
		cout << *p2 << ' ';
		p2++;
	}
	cout << endl;

	system("pause");
	return 0;
}
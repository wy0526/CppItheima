#include <iostream>
using namespace std;

int main13(void) {

	int num = 1;
	for (num; num <= 100; num++) {
		if (num % 10 == 7 || (num / 10) % 10 == 7 || num % 7 == 0) {
			cout << "ÇÃ×À×Ó£º" << num << endl;
		}
		else {
			cout << num << endl;
		}
	}
	system("pause");
	return 0;
}
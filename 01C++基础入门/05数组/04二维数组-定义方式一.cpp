#include <iostream>
using namespace std;

int main4(void) {

	int arr[2][3];

	arr[0][0] = 1;
	arr[0][1] = 2;
	arr[0][2] = 3;

	arr[1][0] = 5;
	arr[1][1] = 6;
	arr[1][2] = 7;

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr[i][j] << ' ';
		}
		cout << endl;
	}

	system("pause");
	return 0;
}
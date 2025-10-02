#include <iostream>
using namespace std;

int main3(void) {

	int arr[] = { 2, 4, 0, 5, 7, 1, 3, 8, 9 };
	int len = sizeof(arr) / sizeof(int);

	cout << "ÅÅÐòÇ°£º" << endl;
	for (int i = 0; i < len; i++) {
		cout << arr[i] << ' ';
	}
	cout << '\n';

	for (int j = 0; j < len - 1; j++) {
		for (int i = 0; i < len - j - 1; i++) {
			if (arr[i] > arr[i + 1]) {
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}

	cout << "ÅÅÐòºó£º" << endl;
	for (int i = 0; i < len; i++) {
		cout << arr[i] << ' ';
	}
	cout << '\n';

	system("pause");
	return 0;
}
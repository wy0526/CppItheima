#include <iostream>
using namespace std;

int main2(void) {

	int arr[] = { 1, 3, 2, 5, 4 };

	cout << "ԭʼ���飺" << endl;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {

		cout << arr[i] << ' ';
	}
	cout << '\n';

	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]) - 1;

	while (start < end) {
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		start++;
		end--;
	}

	cout << "��ת������飺" << endl;
	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		
		cout << arr[i] << ' ';
	}
	cout << '\n';

	system("pause");
	return 0;
}
#include <iostream>
using namespace std;

void bubbleSort(int* p, int len) {

	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - 1 - i; j++) {
			//方式一：数组下标访问并使用数组元素
			/*if (p[j] > p[j + 1]) {
				int temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}*/

			//方式二：指针访问并使用数组元素
			if (*(p + j) > *(p + j + 1)) {
				int temp = *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = temp;
			}
		}
	}

	cout << "冒泡排序后（函数内）：" << endl;
	for (int i = 0; i < len; i++) {
		cout << *p << ' ';
		p++;
	}
	cout << endl;
}

int main(void) {

	int arr[6] = { 6, 2, 4, 3, 5, 1 };
	int len = sizeof(arr) / sizeof(int);
	cout << "数组长度：" << len << endl;

	cout << "冒泡排序前：" << endl;
	for (int i = 0; i < len; i++) {
		cout << arr[i] << ' ' ;
	}
	cout << endl;

	bubbleSort(arr, len);

	cout << "冒泡排序后（函数外）：" << endl;
	for (int i = 0; i < len; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;


	system("pause");
	return 0;
}
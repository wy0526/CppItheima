#include <iostream>
using namespace std;

void bubbleSort(int* p, int len) {

	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - 1 - i; j++) {
			//��ʽһ�������±���ʲ�ʹ������Ԫ��
			/*if (p[j] > p[j + 1]) {
				int temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
			}*/

			//��ʽ����ָ����ʲ�ʹ������Ԫ��
			if (*(p + j) > *(p + j + 1)) {
				int temp = *(p + j);
				*(p + j) = *(p + j + 1);
				*(p + j + 1) = temp;
			}
		}
	}

	cout << "ð������󣨺����ڣ���" << endl;
	for (int i = 0; i < len; i++) {
		cout << *p << ' ';
		p++;
	}
	cout << endl;
}

int main(void) {

	int arr[6] = { 6, 2, 4, 3, 5, 1 };
	int len = sizeof(arr) / sizeof(int);
	cout << "���鳤�ȣ�" << len << endl;

	cout << "ð������ǰ��" << endl;
	for (int i = 0; i < len; i++) {
		cout << arr[i] << ' ' ;
	}
	cout << endl;

	bubbleSort(arr, len);

	cout << "ð������󣨺����⣩��" << endl;
	for (int i = 0; i < len; i++) {
		cout << arr[i] << ' ';
	}
	cout << endl;


	system("pause");
	return 0;
}
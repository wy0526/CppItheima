#include <iostream>
using namespace std;
#include <string>

int main(void) {

	int arr[3][3] = {
		{100, 100, 100},
		{90, 50, 100},
		{60, 70, 80}
	};

	string name[] = { "����" , "����", "����" };

	//cout << "���������ġ�������ܳɼ��ֱ��ǣ�" << endl;
	for (int i = 0; i < 3; i++) {
		int sum = 0;
		for (int j = 0; j < 3; j++) {
			sum = sum + arr[i][j];
		}
		cout << name[i] << "���ܳɼ��ǣ�" << sum << ' ' << endl;
	}
	cout << endl;

	system("pause");
	return 0;
}
#include <iostream>
using namespace std;

int main(void) {

	int select = 0;

	cout << "��ѡ���Ѷȼ���" << endl;
	cout << "1����ͨ" << endl;
	cout << "2���е�" << endl;
	cout << "3������" << endl;

	cin >> select;

	switch (select) {
	case 1:
		cout << "��ѡ�������ͨ�Ѷ�" << endl;
		break;
	case 2:
		cout << "��ѡ������е��Ѷ�" << endl;
		break;
	case 3:
		cout << "��ѡ����������Ѷ�" << endl;
		break;
	default:
		break;
	}

	system("pause");
	return 0;
}
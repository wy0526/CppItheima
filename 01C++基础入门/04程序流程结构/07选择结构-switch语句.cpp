#include <iostream>
using namespace std;

int main7(void) {

	int score = 0;
	cout << "��������Ӱ��֣�";
	cin >> score;
	switch (score) {
	case 10:
		cout << "����Ϊ�Ǿ����Ӱ��" << endl;
		break;
	case 9 :
		cout << "����Ϊ�ܺÿ�" << endl;
		break;
	case 8:
		cout << "����Ϊ������" << endl;
		break;
	case 7:
		cout << "����Ϊ����" << endl;
		break;
	default:
		cout << "����Ϊ����һ����Ƭ" << endl;
		break;
	}

	system("pause");
	return 0;
}
#include <iostream>
using namespace std;
#include <ctime>

int main9(void) {

	srand((unsigned int)time(NULL));
	int num = rand() % 100 + 1;
	int num2 = 0;
	
	while (num != num2) {
		cout << "��������һ��1-100���������";
		cin >> num2;
		if (num > num2) {
			cout << "��С�ˣ��ٲ£�" << endl;
		}
		else if (num < num2) {
			cout << "�´��ˣ��ٲ£�" << endl;
		}
		else {
			cout << "��ϲ��¶��ˣ�" << endl;
		}

	}

	/* 
	
		����ʹ��break����ѭ��
	
	while (1) {
		cout << "��������һ��1-100���������";
		cin >> num2;
		if (num > num2) {
			cout << "��С�ˣ��ٲ£�" << endl;
		}
		else if (num < num2) {
			cout << "�´��ˣ��ٲ£�" << endl;
		}
		else {
			cout << "��ϲ��¶��ˣ�" << endl;
			break;
		}

	}*/
	
	system("pause");
	return 0;
}
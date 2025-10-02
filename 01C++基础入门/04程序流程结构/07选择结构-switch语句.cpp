#include <iostream>
using namespace std;

int main7(void) {

	int score = 0;
	cout << "请您给电影打分：";
	cin >> score;
	switch (score) {
	case 10:
		cout << "您认为是经典电影！" << endl;
		break;
	case 9 :
		cout << "您认为很好看" << endl;
		break;
	case 8:
		cout << "您认为还不错" << endl;
		break;
	case 7:
		cout << "您认为将就" << endl;
		break;
	default:
		cout << "您认为这是一个烂片" << endl;
		break;
	}

	system("pause");
	return 0;
}
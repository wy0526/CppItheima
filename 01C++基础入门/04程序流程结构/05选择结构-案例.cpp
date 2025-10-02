#include <iostream>
using namespace std;

int main5(void) {
	float w1 = 0.0f;
	float w2 = 0.0f;
	float w3 = 0.0f;

	cout << "请输入第一只小猪的体重：";
	cin >> w1;

	cout << "请输入第二只小猪的体重：";
	cin >> w2;

	cout << "请输入第三只小猪的体重：";
	cin >> w3;

	if (w1 > w2) {
		if (w1 > w3) {
			cout << "第一只小猪最重，它的体重是：" << w1 << endl;
		}
		else {
			cout << "第三只小猪最重，它的体重是：" << w3 << endl;
		}
	}
	else if (w2 > w3) {
		cout << "第二只小猪最重，它的体重是：" << w2 << endl;
	}
	else {
		cout << "第三只小猪最重，它的体重是：" << w3 << endl;
	}

	system("pause");
	return 0;
}
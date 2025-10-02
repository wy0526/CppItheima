#include <iostream>
using namespace std;
#include <ctime>

int main9(void) {

	srand((unsigned int)time(NULL));
	int num = rand() % 100 + 1;
	int num2 = 0;
	
	while (num != num2) {
		cout << "请您输入一个1-100的随机数：";
		cin >> num2;
		if (num > num2) {
			cout << "猜小了，再猜！" << endl;
		}
		else if (num < num2) {
			cout << "猜大了，再猜！" << endl;
		}
		else {
			cout << "恭喜你猜对了！" << endl;
		}

	}

	/* 
	
		或者使用break跳出循环
	
	while (1) {
		cout << "请您输入一个1-100的随机数：";
		cin >> num2;
		if (num > num2) {
			cout << "猜小了，再猜！" << endl;
		}
		else if (num < num2) {
			cout << "猜大了，再猜！" << endl;
		}
		else {
			cout << "恭喜你猜对了！" << endl;
			break;
		}

	}*/
	
	system("pause");
	return 0;
}
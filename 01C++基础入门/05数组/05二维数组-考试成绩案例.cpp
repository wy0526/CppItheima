#include <iostream>
using namespace std;
#include <string>

int main(void) {

	int arr[3][3] = {
		{100, 100, 100},
		{90, 50, 100},
		{60, 70, 80}
	};

	string name[] = { "张三" , "李四", "王五" };

	//cout << "张三、李四、王五的总成绩分别是：" << endl;
	for (int i = 0; i < 3; i++) {
		int sum = 0;
		for (int j = 0; j < 3; j++) {
			sum = sum + arr[i][j];
		}
		cout << name[i] << "的总成绩是：" << sum << ' ' << endl;
	}
	cout << endl;

	system("pause");
	return 0;
}
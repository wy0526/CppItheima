#include <iostream>
using namespace std;
#include <string>

int main(void) {

	//整型
	int i = 0;
	cout << "请输入整型：";
	cin >> i;
	cout << "i的值为：" << i << endl;
	//浮点型
	float f = 0.0f;
	cout << "请输入浮点型：";
	cin >> f;
	cout << "f的值为：" << f << endl;
	//字符型
	char c = 'a';
	cout << "请输入字符型：";
	cin >> c;
	cout << "c的值为：" << c << endl;
	//字符串型
	string s = "aaa";
	cout << "请输入字符串：";
	cin >> s;
	cout << "s的值为：" << s << endl;
	//布尔型
	bool flag = true;
	cout << "请输入布尔值：";
	cin >> flag;
	cout << "flag的值为：" << flag << endl;
	system("pause");
	return 0;
}
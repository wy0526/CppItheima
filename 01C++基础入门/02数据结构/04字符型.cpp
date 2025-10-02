#include <iostream> 
using namespace std;

int main4(void) {
	char c = 'a';
	cout << "字符c是：" << c << endl;
	cout << "字符类型的字节数是：" << sizeof(char) << endl;
	cout << "a的ASCII编码是：" << (int)c << endl;

	return 0;
}
#include <iostream>
using namespace std;

class Calculate
{
public:
	int num1;
	int num2;
	virtual int getResult() //虚函数
	{
		return 0;
	}
};
class Add :public Calculate
{
	int getResult()
	{
		return num1 + num2;
	}
};
class Sub :public Calculate
{
	int getResult()
	{
		return num1 - num2;
	}
};
class Muti :public Calculate
{
	int getResult()
	{
		return num1 * num2;
	}
};

void test()
{
	Calculate *calc = new Add; //父类指针指向子类对象
	calc->num1 = 10;
	calc->num2 = 20;
	cout << calc->num1 << "+" << calc->num2 << "=" << calc->getResult() << endl;
	delete calc;  //new出来的对象，必须删除该对象的堆区数据

	calc = new Sub;
	calc->num1 = 10;
	calc->num2 = 20;
	cout << calc->num1 << "-" << calc->num2 << "=" << calc->getResult() << endl;
	delete calc;  //new出来的对象，必须删除该对象的堆区数据

	calc = new Muti;
	calc->num1 = 10;
	calc->num2 = 20;
	cout << calc->num1 << "*" << calc->num2 << "=" << calc->getResult() << endl;
	delete calc;  //new出来的对象，必须删除该对象的堆区数据
}
int main()
{
	test();
	return 0;
}
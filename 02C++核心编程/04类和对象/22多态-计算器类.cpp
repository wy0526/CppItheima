#include <iostream>
using namespace std;

class Calculate
{
public:
	int num1;
	int num2;
	virtual int getResult() //�麯��
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
	Calculate *calc = new Add; //����ָ��ָ���������
	calc->num1 = 10;
	calc->num2 = 20;
	cout << calc->num1 << "+" << calc->num2 << "=" << calc->getResult() << endl;
	delete calc;  //new�����Ķ��󣬱���ɾ���ö���Ķ�������

	calc = new Sub;
	calc->num1 = 10;
	calc->num2 = 20;
	cout << calc->num1 << "-" << calc->num2 << "=" << calc->getResult() << endl;
	delete calc;  //new�����Ķ��󣬱���ɾ���ö���Ķ�������

	calc = new Muti;
	calc->num1 = 10;
	calc->num2 = 20;
	cout << calc->num1 << "*" << calc->num2 << "=" << calc->getResult() << endl;
	delete calc;  //new�����Ķ��󣬱���ɾ���ö���Ķ�������
}
int main()
{
	test();
	return 0;
}
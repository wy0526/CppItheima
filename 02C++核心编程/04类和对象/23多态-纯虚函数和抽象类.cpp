#include <iostream>
using namespace std;

class Base
{
public:
	virtual void func() = 0;
};

class Son :public Base
{
public:
	void func()
	{
		cout << "��̬�Ĵ��麯���ͳ�����" << endl;
	}
};

void test()
{
	Son s;
	s.func();
}

int main()
{
	test();
	return 0;
}
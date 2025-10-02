#include <iostream>
using namespace std;

class Base
{
public:
	Base()
	{
		m_A = 1;
	}
public:
	int m_A;
	void func()
	{
		cout << "Base - func()" << endl;
	}
	void func(int a)
	{
		cout << "Base - func(int a)" << endl;
	}
	void baseFun(int a)
	{
		cout << "Base - baseFun(int a)" << endl;
	}
};

//�̳��﷨
class Son:public Base
{
public:
	Son()
	{
		m_A = 2;
	}
public:
	int m_A;
	void func()
	{
		cout << "Son - func()" << endl;
	}
};

void test()
{
	Son s;
	//ͬ����Ա����
	cout <<"ʹ������ͬ����Ա���ԣ�" << s.m_A << endl;
	cout <<"ʹ�ø���ͬ����Ա���ԣ�" << s.Base::m_A << endl;

	//ͬ����Ա����
	s.func();
	s.Base::func();
	s.baseFun(2);
	s.Base::func(2);
}

int main()
{
	test();
	return 0;
}
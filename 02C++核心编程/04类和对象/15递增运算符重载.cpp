#include <iostream>
using namespace std;

class myInt
{
	friend ostream& operator<<(ostream& cout, myInt myint);
public:
	myInt()
	{
		m_Num = 5;
	}

	//重载前置++运算符
	myInt& operator++()
	{
		m_Num++;

		return *this;
	}

	//重载后置++运算符
	myInt operator++(int)
	{
		myInt temp = *this;
		m_Num++;
		return temp;
	}
private:
	int m_Num;
public:
	int getNum()
	{
		return m_Num;
	}
};

ostream& operator<<(ostream& cout, myInt myint)
{
	cout << myint.m_Num;
	return cout;
}

void test15()
{
	myInt myint;
	cout << ++(++myint) << endl;

	myInt myint2;
	cout << myint2++ << endl;
	cout << myint2.getNum() << endl;
}

int main()
{
	test15();
	return 0;
}
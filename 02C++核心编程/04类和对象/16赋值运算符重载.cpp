#include <iostream>
using namespace std;

class Person
{
public:
	Person(int a)
	{
		age = new int(a);
	}
	//new出来需要手动释放
	~Person()
	{
		if (age != NULL)
		{
			delete age;
			age = NULL;
		}
	}
	//重载赋值运算符
	Person& operator=(Person& p)
	{
		if (age != NULL)
		{
			delete age;
			age = NULL;
		}
		
		age = new int(*p.age);
		return *this;
	}
private:
	int *age;
public:
	int getAge()
	{
		return *(this->age);
	}
};

void test16()
{
	Person p(16);
	cout << "p的年龄为：" << p.getAge() << endl;

	Person p2(18);
	cout << "p2的年龄为：" << p2.getAge() << endl;
	
	p2 = p;
	cout << "p2的年龄为：" << p2.getAge() << endl;

	Person p3(20);
	cout << "p3的年龄为：" << p3.getAge() << endl;

	p3 = p2 = p;
	cout << "p3的年龄为：" << p3.getAge() << endl;
}

int main()
{
	test16();
	return 0;
}
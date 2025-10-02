#include <iostream>
using namespace std;

class Person
{
public:
	Person(int a)
	{
		age = new int(a);
	}
	//new������Ҫ�ֶ��ͷ�
	~Person()
	{
		if (age != NULL)
		{
			delete age;
			age = NULL;
		}
	}
	//���ظ�ֵ�����
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
	cout << "p������Ϊ��" << p.getAge() << endl;

	Person p2(18);
	cout << "p2������Ϊ��" << p2.getAge() << endl;
	
	p2 = p;
	cout << "p2������Ϊ��" << p2.getAge() << endl;

	Person p3(20);
	cout << "p3������Ϊ��" << p3.getAge() << endl;

	p3 = p2 = p;
	cout << "p3������Ϊ��" << p3.getAge() << endl;
}

int main()
{
	test16();
	return 0;
}
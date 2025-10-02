#include <iostream>
using namespace std;

class Person
{
public:
	Person(string name, int age)
	{
		this->m_Age = age;
		this->m_Name = name;
	}

	bool operator== (Person & p)
	{
		if (this->m_Age == p.m_Age && this->m_Name == p.m_Name)
		{
			return true;
		}
		return false;
	}

	bool operator!= (Person& p)
	{
		if (this->m_Age != p.m_Age || this->m_Name != p.m_Name)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	string m_Name;
	int m_Age;
};

void test17()
{
	Person p("lili", 12);
	Person p2("lili", 12);

	if (p == p2)
	{
		cout << "p��p2��ȣ�" << endl;
	}
	else
	{
		cout << "p��p2�����" << endl;
	}

	if (p != p2)
	{
		cout << "�����" << endl;
	}
	else
	{
		cout << "���" << endl;
	}
}

int main()
{
	test17();
	return 0;
}
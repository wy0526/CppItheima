#include <iostream>
using namespace std;
#include <string>

template <class NameType, class AgeType>
class Person
{
public:
		
	Person(NameType name, AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

public:
	NameType m_Name;
	AgeType m_Age;

	void showPerson()
	{
		cout << "ĞÕÃû£º" << this->m_Name << ";ÄêÁä£º" << this->m_Age << endl;
	}
};

void test03()
{
	Person<string, int> p("ËïÎò¿Õ", 99);
	p.showPerson();
}

int main()
{
	test03();
	return 0;
}
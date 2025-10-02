#include <iostream>
using namespace std;

class Person
{
	friend void operator<<(ostream & cout, Person &p);
public:
	Person(int a, int b)
	{
		m_A = a;
		m_B = b;
	}
public:
	int m_A;
	int m_B;
};

ostream operator<<(ostream & out, Person &p)
{
	out << "m_A = " <<	p.m_A << "; m_B = " << p.m_B << endl;
	return out;
}

void main()
{
	Person p1(10, 10);
	cout << p1;

	return;
}
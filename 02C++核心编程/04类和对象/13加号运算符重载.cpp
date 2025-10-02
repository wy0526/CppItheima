#include <iostream>
using namespace std;

class Person
{
public:
	Person()
	{
		m_A = 1;
		m_B = 2;
	}
	Person(int a, int b)
	{
		m_A = a;
		m_B = b;
	}
private:
	int m_A;
	int m_B;
public:
	Person operator+(Person p)
	{
		Person temp;
		temp.m_A = this->m_A + p.m_A;
		temp.m_B = this->m_B + p.m_B;
		return temp;
	}
	//жиди
	Person operator+(int num)
	{
		Person temp;
		temp.m_A = this->m_A + num;
		temp.m_B = this->m_B + num;
		return temp;
	}
	int getA()
	{
		return this->m_A;
	}
	int getB()
	{
		return this->m_B;
	}
};

int main()
{
	Person p1(5, 5);
	/*p1.m_A = 5;
	p1.m_B = 5;*/
	Person p2(2, 2);
	/*p2.m_A = 2;
	p2.m_B = 2;*/
	//Person res = p1.PersonAdd(p2);
	Person res = p1 + p2;
	cout << "Add Result:" << res.getA() << endl;
	cout << "Add Result:" << res.getB() << endl;

	Person res2 = p1 + 10;
	cout << "Add Result:" << res2.getA() << endl;
	cout << "Add Result:" << res2.getB() << endl;
	system("pasue");
	return 0;
}
#include <iostream>
using namespace std;

class Calculate
{
public:
	int num1;
	int num2;
	int getResult(string calc)
	{
		if (calc == "+")
		{
			return num1 + num2;
		}
		else if (calc == "-")
		{
			return num1 - num2;
		}
		else if (calc == "*")
		{
			return num1 * num2;
		}
	}
};

void test()
{
	Calculate calculate;
	calculate.num1 = 10;
	calculate.num2 = 20;

	cout << calculate.num1 << "+" << calculate.num2 << "=" << calculate.getResult("+") << endl;
	cout << calculate.num1 << "*" << calculate.num2 << "=" << calculate.getResult("*") << endl;
	cout << calculate.num1 << "-" << calculate.num2 << "=" << calculate.getResult("-") << endl;
}

int main()
{
	test();
	return 0;
}
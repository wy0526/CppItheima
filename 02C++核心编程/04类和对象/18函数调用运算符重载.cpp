#include <iostream>
using namespace std;

class myPrint
{
public:
	void operator()(string test)
	{
		cout << test << endl;
	}
};

void test18()
{
	myPrint myprint;
	myprint("~~~///(^v^)\\\~~~");
}

int main()
{
	test18();
	return 0;
}
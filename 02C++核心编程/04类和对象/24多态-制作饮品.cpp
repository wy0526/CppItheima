#include <iostream>
using namespace std;

class makeJuice
{
public:
	virtual void boil() = 0;
	virtual void soak() = 0;
	virtual void toCup() = 0;
	virtual void addStg() = 0;

	void makeDrink()
	{
		boil();
		soak();
		toCup();
		addStg();
	}
};

class Coffee :public makeJuice
{
	virtual void boil()
	{
		cout << "��ˮ" << endl;
	}
	virtual void soak()
	{
		cout << "���ݿ���" << endl;
	}
	virtual void toCup()
	{
		cout << "���뱭��" << endl;
	};
	virtual void addStg()
	{
		cout << "���Ǻ�ţ��" << endl;
	}

};

class Tea :public makeJuice
{
	virtual void boil()
	{
		cout << "��ˮ" << endl;
	}
	virtual void soak()
	{
		cout << "���ݲ�Ҷ" << endl;
	}
	virtual void toCup()
	{
		cout << "���뱭��" << endl;
	};
	virtual void addStg()
	{
		cout << "������" << endl;
	}

};

void doWork(makeJuice* juice)
{
	juice->makeDrink();
}

void test() {
	/*makeJuice *coffee = new Coffee;
	coffee->boil();
	coffee->soak();
	coffee->toCup();
	coffee->addStg();

	makeJuice* tea = new Tea;
	tea->boil();
	tea->soak();
	tea->toCup();
	tea->addStg();*/

	/*makeJuice* juice = new Coffee();
	juice->makeDrink();

	juice = new Tea();
	juice->makeDrink();*/

	doWork(new Coffee);
	doWork(new Tea);
}


int main()
{
	test();
	return 0;
}
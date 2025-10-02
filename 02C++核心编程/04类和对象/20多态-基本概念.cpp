#include <iostream>
using namespace std;

class Animal
{
public:
	virtual void speak()
	{
		cout << "�����ڽ�" << endl;
	}
};
class Cat :public Animal
{
public:
	void speak()
	{
		cout << "Сè�ڽ�" << endl;
	}
};
class Dog:public Animal
{
public:
	void speak()
	{
		cout << "С���ڽ�" << endl;
	}
};

void letSpeak(Animal & animal)
{
	animal.speak();
}

int main()
{
	Dog dog;
	letSpeak(dog);
	return 0;
}
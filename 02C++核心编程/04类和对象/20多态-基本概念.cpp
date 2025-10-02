#include <iostream>
using namespace std;

class Animal
{
public:
	virtual void speak()
	{
		cout << "动物在叫" << endl;
	}
};
class Cat :public Animal
{
public:
	void speak()
	{
		cout << "小猫在叫" << endl;
	}
};
class Dog:public Animal
{
public:
	void speak()
	{
		cout << "小狗在叫" << endl;
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
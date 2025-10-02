#include <iostream>
using namespace std;

class CPU
{
public:
	virtual void calculate() = 0;
};

class VideoCard
{
public:
	virtual void display() = 0;
};

class Memory
{
public:
	virtual void storage() = 0;
};

class InterCPU :public CPU
{
public:
	void calculate()
	{
		cout << "inter厂商CPU开始计算了" << endl;
	}
};

class LenovoCPU :public CPU
{
public:
	void calculate()
	{
		cout << "lenovo厂商CPU开始计算了" << endl;
	}
};

class InterVideoCard :public VideoCard
{
public:
	void display()
	{
		cout << "Inter厂商显卡开始显示了" << endl;
	}
};

class LenovoVideoCard :public VideoCard
{
public:
	void display()
	{
		cout << "Lenovo厂商显卡开始显示了" << endl;
	}
};

class InterMemory :public Memory
{
public:
	void storage()
	{
		cout << "Inter厂商内存条开始存储了" << endl;
	}
};

class LenovoMemory :public Memory
{
public:
	void storage()
	{
		cout << "Lenovo厂商内存条开始存储了" << endl;
	}
};

class Computer
{
public:
	Computer() {};

	Computer(CPU* cpu, VideoCard* videocard, Memory* memory)
	{
		this->m_Cpu = cpu;
		this->m_VideoCard = videocard;
		this->m_Memory = memory;
	}

	~Computer()
	{
		if (m_Cpu != NULL)
		{
			delete m_Cpu;
			m_Cpu = NULL;
		}

		if (m_VideoCard != NULL)
		{
			delete m_VideoCard;
			m_VideoCard = NULL;
		}

		if (m_Memory != NULL)
		{
			delete m_Memory;
			m_Memory = NULL;
		}
	}

	CPU* m_Cpu;
	VideoCard* m_VideoCard;
	Memory* m_Memory;

	void work()
	{
		m_Cpu->calculate();
		m_VideoCard->display();
		m_Memory->storage();
	}
};

void test()
{
	/*Computer computer1(new InterCPU, new InterVideoCard, new InterMemory);
	computer1.work();*/

	Computer* computer1 = new Computer(new InterCPU, new LenovoVideoCard, new InterMemory);
	computer1->work();
	delete computer1;

	cout << "------------------------" << endl;

	Computer computer2(new InterCPU, new LenovoVideoCard, new InterMemory);
	computer2.work();

}

int main()
{
	test();
	return 0;
}
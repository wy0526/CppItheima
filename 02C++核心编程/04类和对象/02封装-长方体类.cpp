#include <iostream>
using namespace std;

class Cube {

private:
	int m_L;
	int m_W;
	int m_H;

public:
	void setLong(int longNum) {
		m_L = longNum;
	}
	int getLong() {
		return m_L;
	}
	void setWidth(int width) {
		m_W = width;
	}
	int getWidth() {
		return m_W;
	}
	void setHeight(int height) {
		m_H = height;
	}
	int getHeight() {
		return m_H;
	}

	int calculateS() {
		int s = (m_L * m_W + m_L * m_H + m_W * m_H) * 2;
		return s;
	}

	int calculateV() {
		int v = m_L * m_W * m_H;
		return v;
	}

	bool isSameByClass(Cube c) {
		if (m_L == c.getLong() && m_W == c.getWidth() && m_H == c.getHeight()) {
			return true;
		}
		else {
			return false;
		}
	}
};

bool isSame(Cube c1, Cube c2) {
	if (c1.getLong() == c2.getLong() && c1.getWidth() == c2.getWidth() && c1.getHeight() == c2.getHeight()) {
		return true;
	}
	else {
		return false;
	}
}

int main2(void) {

	Cube c;
	c.setLong(10);
	c.setWidth(5);
	c.setHeight(10);

	cout << "长方体的面积：" << c.calculateS() << endl; //400
	cout << "长方体的体积：" << c.calculateV() << endl; //500

	Cube c2;
	c2.setLong(100);
	c2.setWidth(5);
	c2.setHeight(10);

	bool ref = isSame(c, c2);
	if (ref) {
		cout << "长方体相同" << endl;
	}
	else {
		cout << "长方体不同" << endl;
	}

	bool ref2 = c.isSameByClass(c2);
	if (ref2) {
		cout << "长方体相同" << endl;
	}
	else {
		cout << "长方体不同" << endl;
	}

	system("pause");
	return 0;
}
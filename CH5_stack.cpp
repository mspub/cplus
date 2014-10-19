#include<iostream>


using namespace std;

class Stack
{
public :
	int m_size;
	int m_top;
	int *m_buffer;
	void init(int size=10);
	void removeAll();
	bool push(int value);
	bool pop(int &value);
}

int main()
{
	Stack s1;

	return 0;
}

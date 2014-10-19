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

void Stack::init(int size)
{
	m_size=size;
	m_top=-1;
	m_buffer=new int[m_size];
	memset(m_buffer, 0, sizeof(int)*m_size);
}

void Stack::removeAll()
{
	m_size=0;
	m_top=-1;
	delete[] m_buffer;
	m_buffer=NULL;
}

bool Stack::push(int value)
{
	if(m_top >= m_size-1) return false;
	m_buffer[++m_top]=value;
	return true;
}

bool Stack::pop(int &value)
{
	if(m_top<0) return false;
	value=m_buffer[m_top--];
	return true;
}

int main()
{
	Stack s1;

	return 0;
}

#include<iostream>


using namespace std;

class Stack
{
public :
	int m_size;//������ ũ��
	int m_top;//������ �� ���ʿ� �ִ� �� ��ġ
	int *m_buffer;

	void init(int size=10);//(�⺻) ũ�Ⱑ 10�� ���� �����ϴ� �Լ�
	void removeAll();
	bool push(int value);
	bool pop(int &value);
};//Ŭ���� ���� ; ����

void Stack::init(int size)
{
	m_size=size;
	m_top=-1;
	m_buffer=new int[m_size];//������ ũ��� size ��ŭ ����
	memset(m_buffer, 0, sizeof(int)*m_size);//���۸� 0���� �ʱ�ȭ
}

void Stack::removeAll() //����ũ�⸦ 0���� ���ۿ� ���� ����
{
	m_size=0;
	m_top=-1;//���ۿ� ���� ����
	delete[] m_buffer;
	m_buffer=NULL;
}

bool Stack::push(int value) //����(����)�� ���� �ֱ�
{
	if(m_top >= m_size-1) return false;//���� �� ������ ����
	m_buffer[++m_top]=value;//���ۿ� �ֱ� ++m_top m_buffer[m_top]=value
	return true;//�ֱ⿡ ����
}

bool Stack::pop(int &value) //����(����)���� ���� ������
{
	if(m_top<0) return false;//���ۿ� ���� ������ 
	value=m_buffer[m_top--];//value=m_buffer[m_top] m_top--
	return true;
}

int main()
{
	Stack s1,s2;
	s1.init(10);
	s2.init();

	while(s1.push(rand()%100));
	for(int i=0;i<s1.m_size;i++)
		cout<<s1.m_buffer[i]<<" ";
	cout<<"\n";
	

	return 0;
}

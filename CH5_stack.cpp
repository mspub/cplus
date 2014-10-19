#include<iostream>


using namespace std;

class Stack
{
public :
	int m_size;//스택의 크기
	int m_top;//스택의 맨 위쪽에 있는 값 위치
	int *m_buffer;

	void init(int size=10);//(기본) 크기가 10인 스택 생성하는 함수
	void removeAll();
	bool push(int value);
	bool pop(int &value);
};//클래스 끝에 ; 붙임

void Stack::init(int size)
{
	m_size=size;
	m_top=-1;
	m_buffer=new int[m_size];//버퍼의 크기는 size 만큼 생성
	memset(m_buffer, 0, sizeof(int)*m_size);//버퍼를 0으로 초기화
}

void Stack::removeAll() //스택크기를 0으로 버퍼에 값이 없음
{
	m_size=0;
	m_top=-1;//버퍼에 값이 없음
	delete[] m_buffer;
	m_buffer=NULL;
}

bool Stack::push(int value) //스택(버퍼)에 값을 넣기
{
	if(m_top >= m_size-1) return false;//넣을 수 없으면 실패
	m_buffer[++m_top]=value;//버퍼에 넣기 ++m_top m_buffer[m_top]=value
	return true;//넣기에 성공
}

bool Stack::pop(int &value) //스택(버퍼)에서 값을 빼오기
{
	if(m_top<0) return false;//버퍼에 값이 없으면 
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

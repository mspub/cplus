// ShallowCopy.cpp : 디폴트 복사 생성자
/*
#include <string.h>
#include <iostream>
using namespace std;

class Stack
{
public:
    int m_size;
    int m_top;
    int *m_buffer;//포인터 변수

public:
    bool Push(int value);
    bool Pop(int& value);
    int GetSize();
    int GetTop();
    bool SetSize(int size);
    bool GetData(int index, int& data);
    Stack();         
    Stack(int size); 
    ~Stack();        
};

bool Stack::Push(int value)
{
    if( m_top >= m_size - 1 )       return false;
    m_buffer[++m_top] = value;
    return true;
}

bool Stack::Pop(int& value)
{
    if( m_top < 0 )                 return false;
    value = m_buffer[m_top--];
    return true;
}

int Stack::GetSize()
{
    return m_size;
}

int Stack::GetTop()
{
    return m_top;
}

bool Stack::SetSize(int size)
{
    if( size < m_size )         return false;
    int* tmp = m_buffer;
    m_size = size;
    m_buffer = new int[m_size];
    memcpy(m_buffer, tmp, sizeof(int) * (m_top + 1));
    delete [] tmp;
    return true;
}

bool Stack::GetData(int index, int& data)
{
    if( index < 0 || index > m_top )    return false;
    data = m_buffer[index];
    return true;
}

Stack::Stack()
{
    m_size = 0;
    m_top = -1;
    m_buffer = NULL;
}

Stack::Stack(int size)
{
    m_size = size;
    m_top = -1;
    m_buffer = new int[m_size];
    memset(m_buffer, 0, sizeof(int) * m_size);
}

Stack::~Stack()
{
    delete[] m_buffer;
    m_buffer = NULL;
}

void ShowData(Stack &s)     // 전역 함수
{
    cout << "스택에 저장된 데이터 : ";
    if( s.GetTop() == -1 )
        cout << "없음\n";
    else
    {
        int data;
        for(int i = 0 ; i <= s.GetTop() ; i++)
        {   
            s.GetData(i, data);
            cout << data << " " ;
        }
        cout << "\n";
    }
}

int main()
{
    Stack s1(5);
    s1.Push(123);
    s1.Push(456);
	Stack s2=s1;
	cout <<"s1 주소:" << &s1<<endl;
	cout <<"s2 주소:" << &s2<<endl;
	cout <<"s1.m_size 주소:" << &s1.m_size<<endl;
	cout <<"s2.m_size 주소:" << &s2.m_size<<endl;
	cout <<"s1.m_buffer 주소:" << &(s1.m_buffer)<<endl;
	cout <<"s2.m_buffer 주소:" << &(s2.m_buffer)<<endl;
	
    cout << "s1 ==> ";
    ShowData(s1);

    Stack *s = new Stack(s1);      // 디폴트 복사 생성자 호출
    cout << "s ==> ";
    ShowData(*s);
    //delete s2;

    int data;
    cout << "스택 s1에서 꺼낸 데이터 : ";
    while( s1.Pop(data) )
        cout << data << " ";
    cout << "\n";
	
    return 0;
}
*/
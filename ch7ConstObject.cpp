// ConstObject.cpp : const 객체
#include <string.h>
#include <iostream>
using namespace std;

class Stack
{
protected:
    int m_size;
    int m_top;
    int *m_buffer;

public:
    bool Push(int value);
    bool Pop(int& value);
	int GetSize() const
	{
		return m_size;
	}
    int GetTop() const;
    inline bool SetSize(int size);
    bool GetData(int index, int& data) const;
    Stack();         
    Stack(int size); 
    ~Stack();   
    Stack(const Stack& s);  // 복사 생성자
};

bool Stack::Push(int value)
{
    if( m_top >= m_size - 1 )       return false;
    m_buffer[++m_top] = value;
    return true;
}

inline bool Stack::Pop(int& value)
{
    if( m_top < 0 )                 return false;
    value = m_buffer[m_top--];
    return true;
}
/*
int Stack::GetSize() const
{
    return m_size;
}
*/
int Stack::GetTop()const
{
    return m_top;
}

inline bool Stack::SetSize(int size)
{
    if( size < m_size )         return false;
    int* tmp = m_buffer;
    m_size = size;
    m_buffer = new int[m_size];
    memcpy(m_buffer, tmp, sizeof(int) * (m_top + 1));
    delete [] tmp;
    return true;
}

bool Stack::GetData(int index, int& data)const
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

Stack::Stack(const Stack& s)
{
    m_size = s.m_size;
    m_top = s.m_top;
    m_buffer = new int[m_size];
    memcpy(m_buffer, s.m_buffer, sizeof(int) * (m_top+1));
}

void ShowData(const Stack &s)   // 전역 함수
{
    cout << "스택에 저장된 데이터 : ";
    if( s.GetTop() == -1 )      // 컴파일 에러
        cout << "없음\n";
    else
    {
        int data;
        for(int i = 0 ; i <= s.GetTop() ; i++)  // 컴파일 에러
        {   
            s.GetData(i, data);     // 컴파일 에러
            cout << data << " " ;
        }
        cout << "\n";
    }
}

int main()
{
    Stack s1(5);

    while( s1.Push(rand() % 100) ) ;

    const Stack s2 = s1;    // const 객체
    cout << "스택의 크기 : " << s2.GetSize() << "\n"; // 컴파일 에러
    cout << "스택의 톱 : " << s2.GetTop() << "\n";    // 컴파일 에러

    ShowData(s1);

    return 0;
}
// 멤버변수로 포인터 변수를 가지고 있을때 초기화 문제 확인

#include <iostream>
using namespace std;

class Point 
{
public:
    int m_x, m_y;
	int *p;

	void Print();
    void SetXY(int x, int y);
    bool IsEqual(const Point& p);
    Point(int x = 0, int y = 0);
};

void Point::Print()
{
    cout << "(" << m_x << ", " << m_y << ")";
}

void Point::SetXY(int x, int y)
{
    m_x = x;
    m_y = y;
}

bool Point::IsEqual(const Point& p)
{
    return (m_x == p.m_x && m_y == p.m_y);
}

Point::Point(int x, int y)
{
    m_x = x;
    m_y = y;
	p = new int(10);
   
}

int main()
{
    Point p1(10, 10);		//멤버변수 m_x, m_y, *p 3개
    Point p2 = p1;          // 객체 간의 초기화

   	cout <<"p1 주소:" << &p1<<endl;
	cout <<"p2 주소:" << &p2<<endl;
	
	cout <<"p1.m_x 주소:" << &p1.m_x<<endl;
	cout <<"p2.m_x 주소:" << &p2.m_x<<endl;
	cout <<"포인터 p1.p이 가리키는 값:" << *p1.p<<endl;
	cout <<"포인터 p2.p이 가리키는 값:" << *p2.p<<endl;
	cout <<"p1.p 주소:" << p1.p<<endl;
	cout <<"p2.p 주소:" << p2.p<<endl;

	*p1.p=20; // 값변경

	cout <<"포인터 가리키는 값을 20으로 변경후"<<endl;
	cout <<"포인터 p1.p이 가리키는 값:" << *p1.p<<endl;
	cout <<"포인터 p2.p이 가리키는 값:" << *p2.p<<endl;
	cout <<"p1.p 주소:" << p1.p<<endl;
	cout <<"p2.p 주소:" << p2.p<<endl;
    return 0;
}

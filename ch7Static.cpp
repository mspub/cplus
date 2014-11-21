#include <iostream>
using namespace std;

class Point{
protected:
	int m_x, m_y;
//public:
protected:
	static int s_x, s_y;
public:
	void print();
	void setXY(int, int);
	bool isEqual(const Point &p);
	Point(int x=0,int y=0);
	static void setSize(int, int);
};
int Point::s_x;
int Point::s_y;
void Point::setSize(int x, int y){
	s_x=x;s_y=y;
}
void Point::print(){
	cout<<"x:"<<m_x<<",y:"<<m_y<<endl;
}
void Point::setXY(int x, int y){
	m_x=(s_x>x)?x:s_x;
	m_y=(s_y>y)?y:s_y;
}
bool Point::isEqual(const Point &p){
	if(m_x==p.m_x&&m_y==p.m_y) return true;
	else return false;
}
Point::Point(int x,int y){
	m_x=x;
	m_y=y;
}
//int general;
int main()
{
//	Point::s_x=1000;
//	Point::s_y=500;
	
	Point p1(100,100);
	p1.print();
	Point::setSize(1000,500);
	p1.setXY(2000,234);
	p1.print();
	Point p2(1000,234);
	bool a=p1.isEqual(p2);
	cout<<"equal : "<<a<<endl;
	//cout<<"general : "<<general<<endl;
	return 0;
}
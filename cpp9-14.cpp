#include <iostream>
using namespace std;

class Complex //복소수 
{
private :
	int real;
	int image;
public:
	Complex(int r=0,int i=0);//생성자
	void showComplex() const;
};

Complex::Complex(int r, int i):real(r),image(i){}

void Complex::showComplex() const
{
	cout<<"(" <<real<<" + "<<image<<"i)"<<endl;
}

void prn(Complex *pCom)
{
	for(int i=0;i<4;i++)
		pCom[i].showComplex(); //배열로 표시
	pCom->showComplex();       //pCom[0].showComplex()
	(pCom+1)->showComplex();   //pCom[i].showComplex()
}

void main() //메인함수
{
	Complex arr[4]={ Complex(2,4),Complex(4,8),Complex(8,16),Complex(16,32)};
	prn(arr);
}
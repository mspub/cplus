#include <iostream>
using namespace std;

class Complex
{
private :
	int real;
	int image;
public:
	Complex(int r=0,int i=0);
	void showComplex() const;
};

Complex::Complex(int r, int i):real(r),image(i){}

void Complex::showComplex() const
{
	cout<<"(" <<real<<"+"<<image<<"i)"<<endl;
}

void prn(Complex *pCom)
{
	for(int i=0;i<4;i++)
		pCom[i].showComplex();
	pCom->showComplex();
	(pCom+1)->showComplex();
}

void main()
{
	Complex arr[4]={ Complex(2,4),Complex(4,8),Complex(8,16),Complex(16,32)};
	prn(arr);
}
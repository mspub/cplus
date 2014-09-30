#include <iostream>
using namespace std;
 
int data=10;
void func() //전역함수
{
    cout<<"전역 함수 func 호출\n";
}
 
namespace X
{
    int data=20;
    void func()
    {
    cout<<"X::func 호출\n";
    }
}
     
int main()
{
    using namespace X;
    int data=30; //지역변수 
    cout<<"data="<<data<<"\n"; //지역변수
    cout<<"data="<<X::data<<"\n";//네임스페이스내 전역변수
    cout<<"data="<<::data<<"\n";  //전역변수
     
   X::func(); // 네임스페이스에 있는 함수 호출
   ::func();  //전역함수 호출
   return 0;
}
#include <iostream> //라이브러리추가
using namespace std; //네임스페이스 std 사용
 
//int data=10; //전역변수
void func() //전역함수
{
    cout<<"전역 함수 func 호출\n"; //표준출력
}
 
namespace X //네임스페이스 X 선언
{ 
    int data=20; //네임스페이스 전역변수
    void func() //네임스페이스 함수
    {
    cout<<"X::func 호출\n";//표준출력
    }
}

int main() //메인함수
{
    using namespace X; //네임스페이스 사용
    //int data=30; //지역변수
	
    cout<<"data="<<data<<"\n"; //지역변수
    cout<<"data="<<X::data<<"\n";//네임스페이스내 전역변수
    //cout<<"data="<<::data<<"\n";  //전역변수
     
   X::func(); // 네임스페이스에 있는 함수 호출
   ::func();  //전역함수 호출
   //func();
   return 0;
}

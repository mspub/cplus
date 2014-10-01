#include <iostream>

using namespace std;

namespace UI{
	int count;//메뉴를 보여준 횟수
	void test()
	{
		cout<<"User interface module\n";
		cout<<"menu select :"<<count<<endl;

	}
	void showMenu()
	{
		cout<<"show menu"<<endl;
		count++;
	}
}

namespace NETWORK{
	int count;//송수신 횟수
	void test()
	{
		cout<<"communication module\n";
		cout<<"send or recv data :"<<count<<endl;

	}
	void sendData()
	{
		cout<<"send data"<<endl;
		count++;
	}
	void recvData()
	{
		cout<<"data receive"<<endl;
		count++;

	}
}


namespace DATA{
	int count;//데이타를 처리하는 횟수
	void test()
	{
		cout<<"process module\n";
		cout<<"process data :"<<count<<endl;

	}
	void preProcess()
	{
		cout<<"data preprocess"<<endl;
		
	}
	void process()
	{
		cout<<"data process"<<endl;
		count++;
		
	}
}
void doSomething()
{
	//using UI::count;
	//using UI::test;
	using namespace UI;
	count=0;
	test();
}
/*
int main()
{
	using namespace NETWORK;
	count=0;
	sendData();
	test();
	DATA::test();
	doSomething();
	return 0;
}
*/
/*
int main()
{
//	using UI::count;
//	using UI::test;
//	using UI::showMenu;
	using namespace UI;
	count=0; //
	test();
	showMenu();
	NETWORK::count=0;
	for(int i=0;i<3;i++)
		NETWORK::sendData();
	NETWORK::test();
	//using DATA::count;
	//using namespace DATA;
	DATA::count=0;
	DATA::preProcess();
	DATA::process();
	DATA::test();
	return 0;
}
*/
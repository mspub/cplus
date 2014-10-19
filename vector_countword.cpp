#include<iostream>
#include<string>
#include<vector>

using namespace std;

struct WORD
{
	string str; //등록할 단어(문자열): 크기는 자동으로 정해짐
	int count;
};

vector<WORD*> words;//단어가 등록될 문자열가방(문자열만 들어갈 수 있는 가방) 선언

int FindWords(const string & s);//단어 찾는 함수(위치를 리턴)
int CountWords(const string & s);//단어 등록 및 빈도수 
void ShowWords();//등록된 단어출력
void RemoveAll();//메모리할당 해제

int main()
{
	cout<<"문자열을 입력하세요. ctrl+z (종료)\n";
	string buffer;//단어를 등록할 변수
	while(cin>>buffer) CountWords(buffer);//const string & s=buffer
	ShowWords();//등록된 단어출력
	RemoveAll();//메모리할당 해제
	return 0;
}

int FindWords(const string & s){
	for(int i=0;i<words.size();i++) //등록된 단어 수 만큼 반복
		if(words[i]->str==s) return i; //등록된 단어와 비교
	return -1;
}

int CountWords(const string & s){
	int index=FindWords(s); //기존에 등록된 단어가 있는지 확인
	if(index==-1){//기존에 등록된 단어가 없으면
		WORD *pWord=new WORD;//단어 등록하기 위해 객체를 생성
		pWord->str=s;//(*pWord).str=s;
		pWord->count=1;//(*pWord).count=1;
		words.push_back(pWord);//void push_back (value_type&& val);Adds a new element at the end of the vector
	}else{
		(words[index]->count)++;
	}
	return 0;
}
void ShowWords(){
	for(int i=0;i<words.size();i++) //등록된 단어와 빈도수 출력
		cout<<words[i]->str<<":"<<words[i]->count<<"번\n";
}
void RemoveAll(){
	for(int i=0;i<words.size();i++)
		delete words[i];// 메모리 해제 WORD *pWord=new WORD;
}
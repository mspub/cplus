#include<iostream>
#include<string>
#include<vector>

using namespace std;

struct WORD
{
	string str;
	int count;
};

vector<WORD*> words;
int FindWords(const string & s);
int CountWords(const string & s);
void ShowWords();
void RemoveAll();

int main()
{
	cout<<"문자열을 입력하세요. ctrl+z (종료)\n";
	string buffer;
	while(cin>>buffer) CountWords(buffer);
	ShowWords();
	RemoveAll();
	return 0;
}
int FindWords(const string & s){
	for(int i=0;i<words.size();i++)
		if(words[i]->str==s) return i;
	return -1;
}
int CountWords(const string & s){
	int index=FindWords(s);
	if(index==-1){
		WORD *pWord=new WORD;
		pWord->str=s;
		pWord->count=1;
		words.push_back(pWord);
	}else{
		(words[index]->count)++;
	}
	return 0;
}
void ShowWords(){
	for(int i=0;i<words.size();i++)
		cout<<words[i]->str<<":"<<words[i]->count<<"번\n";
}
void RemoveAll(){
	for(int i=0;i<words.size();i++)
		delete words[i];
}
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
	return 0;
}
int FindWords(const string & s){return 0;}
int CountWords(const string & s){return 0;}
void ShowWords(){}
void RemoveAll(){}
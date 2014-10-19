#include<iostream>
#include<string>
#include<vector>

using namespace std;

struct WORD
{
	string str; //����� �ܾ�(���ڿ�): ũ��� �ڵ����� ������
	int count;
};

vector<WORD*> words;//�ܾ ��ϵ� ���ڿ�����(���ڿ��� �� �� �ִ� ����) ����

int FindWords(const string & s);//�ܾ� ã�� �Լ�(��ġ�� ����)
int CountWords(const string & s);//�ܾ� ��� �� �󵵼� 
void ShowWords();//��ϵ� �ܾ����
void RemoveAll();//�޸��Ҵ� ����

int main()
{
	cout<<"���ڿ��� �Է��ϼ���. ctrl+z (����)\n";
	string buffer;//�ܾ ����� ����
	while(cin>>buffer) CountWords(buffer);//const string & s=buffer
	ShowWords();//��ϵ� �ܾ����
	RemoveAll();//�޸��Ҵ� ����
	return 0;
}

int FindWords(const string & s){
	for(int i=0;i<words.size();i++) //��ϵ� �ܾ� �� ��ŭ �ݺ�
		if(words[i]->str==s) return i; //��ϵ� �ܾ�� ��
	return -1;
}

int CountWords(const string & s){
	int index=FindWords(s); //������ ��ϵ� �ܾ �ִ��� Ȯ��
	if(index==-1){//������ ��ϵ� �ܾ ������
		WORD *pWord=new WORD;//�ܾ� ����ϱ� ���� ��ü�� ����
		pWord->str=s;//(*pWord).str=s;
		pWord->count=1;//(*pWord).count=1;
		words.push_back(pWord);//void push_back (value_type&& val);Adds a new element at the end of the vector
	}else{
		(words[index]->count)++;
	}
	return 0;
}
void ShowWords(){
	for(int i=0;i<words.size();i++) //��ϵ� �ܾ�� �󵵼� ���
		cout<<words[i]->str<<":"<<words[i]->count<<"��\n";
}
void RemoveAll(){
	for(int i=0;i<words.size();i++)
		delete words[i];// �޸� ���� WORD *pWord=new WORD;
}
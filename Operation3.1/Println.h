#pragma once

#include <string>
#include <map>
using namespace std;
class Print
{
map<string, string >Map;
public :
	//void FractionPrint(char *filename);//��ӡ������ʽ
	void RandPrint(string str);//��ӡ������ʽ
	int scan();//���� 
	void printWrong(int s);
	void printTrue();
	void print(int count);//���ͳ�ƽ�� 
	//int readFile(char *filename);//��ȡ�û�Ҫ�����Ŀ����(��ע���������)

};


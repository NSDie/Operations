#pragma once
#include <string>
using namespace std;
class Question
{

public:
	int randNum();
	int randSym();
	char symbol(int i);
	int check(string str);//�����
	bool judge(double a);//�ж��ǲ�������
	string Rand();
};

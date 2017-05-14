#pragma once
#include <string>
using namespace std;
class Question
{

public:
	int randNum();
	int randSym();
	char symbol(int i);
	int check(string str);//计算答案
	bool judge(double a);//判断是不是整数
	string Rand();
};

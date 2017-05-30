#pragma once
#include <string>
#include <sstream>
#include <iostream>
#include <string>
using namespace std;
class Question
{
	int son, mom;//分子分母 
public:
	int getSon()
	{
		return son;
	}
	int getMom()
	{
		return mom;
	}
	int randNum();
	int randSym();
	int gcd(int m, int n);//求最小公倍数
	char symbol(int i);
	int check(string str);//计算答案
	int check1(char* str);//计算答案
	int check2(char* str);//计算答案

	string Rand();
	string RandF();
};

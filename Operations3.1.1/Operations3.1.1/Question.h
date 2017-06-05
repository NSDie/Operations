#pragma once
#include <string>
#include <sstream>
#include <iostream>
#include <string>
using namespace std;
class Rand
{
 public:
	 int randNum();
	 int randSym();
};
class RandNumber : public Rand
{
public:
	
};
class RandOperation : public Rand
{
public:
	char symbol(int i);

};
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
	RandNumber RN;
	RandOperation RO;
	
	int gcd(int m, int n);//求最小公倍数
	
	int check(string str);//计算答案
	int check1(char* str);//计算答案
	int check2(char* str);//计算答案

	string Rand();
	string RandF();
};

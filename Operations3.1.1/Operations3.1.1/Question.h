#pragma once
#include <string>
#include <sstream>
#include <iostream>
#include <string>
using namespace std;
class RandFactory
{
public:
	Rand* create(int type)
	{
		Rand* temp = NULL;
		switch(type)
		{
		case 1: temp = new RandNumber();
			break;
		case 2: temp = new RandOperation();
			break;
		default:
			break;
		}
		return temp;
	}

};
class Rand
{
 public:
	virtual int randNum();

};
class RandNumber : public Rand
{
public:

};
class RandOperation : public Rand
{
public:
	int randNum();
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

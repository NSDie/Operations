#pragma once
#include <string>
#include <sstream>
#include <iostream>
#include <string>
using namespace std;
class Question
{
    int son,mom;//���ӷ�ĸ 
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
	int gcd(int m, int n);//����С������
	char symbol(int i);
	int check(string str);//�����
	int check1(char* str);//�����
	int check2(char* str);//�����
	
	string Rand();
	string RandF();
};

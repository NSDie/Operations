#include "Question.h"
#include <sstream>
#include <iostream>
#include <string>
using namespace std;
int  Question::randNum()
{

	return 1 + rand() % 9;
}
int  Question::randSym()
{

	return 1 + rand() % 3;
}
char Question::symbol(int i) {
	switch (i)
	{
	case 1:  return '+';
		break;
	case 2:  return '-';
		break;
	case 3:  return '*';
		break;
	}
}
int Question::check(string str)//���ڼ������ɵ�����ʽ�Ľ��

{
	stringstream s;
	s << str << '#';
	str = s.str();
	s.str("");
	int   i, t, top = 0,len=str.length();
	double d;
	char str1[11];
	char exp[15];
	char stack[15];
	char ch;
	for (i = 1; i <= len; i++)
		str1[i] = str[i - 1];
	
	t = 1; i = 1;
	ch = str1[i]; i++;
	while (ch != '#')
	{
		switch (ch)
		{
		case '(':  /*�ж�Ϊ������*/
			top++; stack[top] = ch;
			break;
		case ')':  /*�ж�Ϊ������*/
			while (stack[top] != '(')
			{
				exp[t] = stack[top]; top--; t++;
			}
			top--;
			break;
		case '+':   /*�ж�Ϊ�Ӽ���*/
		case '-':
			while (top != 0 && stack[top] != '(')
			{
				exp[t] = stack[top]; top--; t++;
			}
			top++; stack[top] = ch;
			break;
		case '*':  /*�ж�Ϊ'*'��'/'��*/
		case '/':
			while (stack[top] == '*' || stack[top] == '/')
			{
				exp[t] = stack[top]; top--; t++;
			}
			top++; stack[top] = ch;
			break;
		case ' ':break;
		default:
			while (ch >= '0' && ch <= '9') /*�ж�Ϊ����*/
			{
				exp[t] = ch; t++;
				ch = str1[i]; i++;
			}
			i--;
			exp[t] = '#'; t++;
		}
		ch = str1[i]; i++;
	}
	while (top != 0)
	{
		exp[t] = stack[top]; t++; top--;
	}
	exp[t] = '#';

	t = 1; top = 0;
	ch = exp[t]; t++;
	while (ch != '#')
	{
		switch (ch)
		{
		case '+':stack[top - 1] = stack[top - 1] + stack[top];
			top--; break;
		case '-':stack[top - 1] = stack[top - 1] - stack[top];
			top--; break;
		case '*':stack[top - 1] = stack[top - 1] * stack[top];
			top--; break;
		case '/':if (stack[top] != 0)
			stack[top - 1] = stack[top - 1] / stack[top];
				 else
				 {
					 printf("\n\t�������!\n");
					 exit(0);/*�쳣�˳�*/
				 }
				 top--; break;
		default:d = 0;
			while (ch >= '0' && ch <= '9')   /*�ж�Ϊ�����ַ�*/
			{
				d = 10 * d + ch - '0';  /*�������ַ�ת���ɶ�Ӧ����ֵ*/
				ch = exp[t]; t++;
			}
			top++;
			stack[top] = char(d);
		}
		ch = exp[t]; t++;
	}
	return stack[top];
}
bool Question::judge(double a) {
	int a1;
	a1 = (int)a;
	if (a1 == a) return true;
	else return false;
}

string Question::Rand()
{
	string str;
	int i, flag=0, num[5], sign[5];
	char sym[5];
	stringstream s;
	for (i = 1; i <= 4; i++)
		num[i] = randNum();
	for (i = 1; i <= 3; i++)
		sign[i] = randSym();
	for (i = 1; i <= 3; i++)
		sym[i] = symbol(sign[i]);
	for (i = 1; i <= 3; i++)
	{
		if (flag == 0)
		{
			int f = 1 + rand() % 4;
			if (f == 1)
			{	
				   s << '(';
		        	flag = 1;
	     	}
		}
		s << num[i] << sym[i];
	}
	if (flag == 1)
		s << num[4] << ')';
	else
		s << num[4];
	str = s.str();
	s.str("");
	return str;

}


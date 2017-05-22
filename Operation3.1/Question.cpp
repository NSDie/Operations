#include "Question.h"

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
int Question::check(string str)//用于计算生成的运算式的结果

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
		case '(':  //判定为左括号
			top++; stack[top] = ch;
			break;
		case ')':  /*判定为右括号*/
			while (stack[top] != '(')
			{
				exp[t] = stack[top]; top--; t++;
			}
			top--;
			break;
		case '+':   /*判定为加减号*/
		case '-':
			while (top != 0 && stack[top] != '(')
			{
				exp[t] = stack[top]; top--; t++;
			}
			top++; stack[top] = ch;
			break;
		case '*':  /*判定为'*'或'/'号*/
		case '/':
			while (stack[top] == '*' || stack[top] == '/')
			{
				exp[t] = stack[top]; top--; t++;
			}
			top++; stack[top] = ch;
			break;
		case ' ':break;
		default:
			while (ch >= '0' && ch <= '9') /*判定为数字*/
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
					 printf("\n\t除零错误!\n");
					 exit(0);/*异常退出*/
				 }
				 top--; break;
		default:d = 0;
			while (ch >= '0' && ch <= '9')   /*判定为数字字符*/
			{
				d = 10 * d + ch - '0';  /*将数字字符转换成对应的数值*/
				ch = exp[t]; t++;
			}
			top++;
			stack[top] = char(d);
		}
		ch = exp[t]; t++;
	}
	return stack[top];
}
int Question::check1(char* str)
{
  int i=0;
  while(str[i]!='/')
  {
   i++;                  
  }
  int len=i,num=0;
  for(i=0;i<len;i++)
  {
   num = 10*num + str[i] - '0';
  }
  return num;
}
int Question::check2(char* str)
{
  int i=0;
  while(str[i]!='/')
  {
   i++;                  
  }
  int len=i,num=0;
  len++;
 for(i=len;i<strlen(str);i++)
  {
   num = 10*num + str[i] - '0';
   }
  return num;
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
int Question::gcd(int m, int n)
{
	if (m < 0)
		m = 0 - m;
	if (n < 0)
		n = 0 - n;
	for (int c = m%n; c != 0;)
	{
		m = n;
		n = c;
		c = m%n;
	}
	return n;
}
string Question::RandF()
{   
    string str;
    stringstream s;
    int  g1, g2, g3;
	int aa,bb,cc,dd;
	aa = 1 + rand() % 5;
	bb = 1 + rand() % 5;
	cc = 6 + rand() % 5;
	dd = 6 + rand() % 5;
	g1 = gcd(aa, cc);
	g2 = gcd(bb, dd);
	aa /= g1;
	cc /= g1;
	bb /= g2;
	dd /= g2;
	son = aa*dd + bb*cc;
	mom = cc*dd;
	g3 = gcd(son, mom);
	son /= g3;
	mom /= g3; 
	s<<aa<<'/'<<cc<<'+'<<bb<<'/'<<dd;
	str=s.str();
	s.str("");
    return str;
}

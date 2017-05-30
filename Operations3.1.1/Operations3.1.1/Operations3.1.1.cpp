// Operations3.1.1.cpp : 定义控制台应用程序的入口点。
//
#include "stdafx.h"
#include <cstdlib>
#include <iostream>
#include <string>
using namespace std;


int main(int argc, char *argv[])
{
	srand((unsigned)time(NULL));
	Print p;
	Question q;
	int n = p.scan(), count = 0;
	int i, num, s, m, ss, mm;
	char num1[10];
	for (i = 0; i<n; i++)
	{
		if (i % 3 != 0)
		{
			string str = q.Rand();
			p.RandPrint(str);
			cin >> num;
			if (q.check(str) == num)
			{
				p.printTrue();
				count++;
			}
			else
			{
				p.printWrong(q.check(str));
			}
		}
		else
		{
			string str1 = q.RandF();
			p.RandPrint(str1);
			s = q.getSon();
			m = q.getMom();
			cin >> num1;
			ss = q.check1(num1);
			mm = q.check2(num1);

			if (ss == s&&mm == m)
			{
				p.printTrue();
				count++;
			}
			else
			{
				p.printWrongf(s, m);
			}
		}
	}
	p.print(count);
	return EXIT_SUCCESS;
}

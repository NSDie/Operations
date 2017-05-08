#include <cstdlib>
#include <iostream>
#include "Operation.h"
using namespace std;

int main(int argc, char *argv[])
{
    
    int n=readFile(argv[1]);
    scan(argv[2],n);
    /*if(argv[1]!=NULL) {n=readFile(argv[1]);scan(argv[2],n);}
    else  {cin>>n;scan(argv[2],n);}*/
    srand((unsigned)time(NULL));
    int i;
   
	for ( i = 1; i <= n; i++)
	{
		if (i % 5 == 0)
		{
			Fraction(); //用于随机生成分数算式 
			FractionPrint(argv[2]);//将统计结果输出给用户 同时输出到文本
		}
		else
		{
			Rand();  //用于随机生成整数算式    
			RandPrint(argv[2]);//将统计结果输出给用户 同时输出到文本 
		}
	}
	Print(argv[2]);
	// 随机生成数字跟符号打包成一个函数了  计算判断也在随机生成算式函数内部里   
    

    system("PAUSE");
    return EXIT_SUCCESS;
}

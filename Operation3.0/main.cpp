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
			Fraction(); //����������ɷ�����ʽ 
			FractionPrint(argv[2]);//��ͳ�ƽ��������û� ͬʱ������ı�
		}
		else
		{
			Rand();  //�����������������ʽ    
			RandPrint(argv[2]);//��ͳ�ƽ��������û� ͬʱ������ı� 
		}
	}
	Print(argv[2]);
	// ����������ָ����Ŵ����һ��������  �����ж�Ҳ�����������ʽ�����ڲ���   
    

    system("PAUSE");
    return EXIT_SUCCESS;
}

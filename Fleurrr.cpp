#include<stdio.h>
#include<time.h>
#include<stdlib.h> 
#include<conio.h> 
int q,m1,m2,m3,m4;
double t1,t2,p1,p2,g1,g2,x1,x2;
int num1,num2,num3,num4; 
int ch;
int coans=0,wrans=0,ans,JieGuo;
void exp()
{
	printf("-----------四则运算器-----------/\n");
	printf("|输入字母s开始进行练习          |\n");
	printf("|输入00程序结束并显示统计结果   |\n"); 
	printf("|-------------------------------/\n");
	printf("请输入___\n");
}
void sta()
{
	srand((unsigned)time(NULL));
	num1=rand()%10;
	num2=rand()%10;
	num3=rand()%10;
	num4=rand()%10;
if(num4!=0&&num1!=0&&num2!=0&&num3!=0&&num4!=1)
{
	t1=num1/num4;
	p1=(num1+num2)/num4;
	g1=(num1+num2+num3)/num4;
	x1=(num1+num2)/(num4+num3);
	X2=(num1+num2)/(num4-num3);
	g2=(num1+num2-num3)/num4;
	p2=(num2+num3)/num4;
	t2=num2/num4;
	if(int(t1)==t1)
	{
		printf()
	}
}
q=rand()%12;
if(q==0)
{
	printf("(%d+%d)*%d-%d=?",num1,num2,num3,num4);
	ans=(num1+num2)*num3-num4;
	scanf("%d",&JieGuo);
	if(JieGuo==ans)
	{
		printf("计算正确\n");
		coans++;
	}
    else if(JieGuo!=00)
{
printf("计算错误\n");
wrans++;
}
}
if(q==1)
{
printf("(%d-%d)*%d+%d=?",num1,num2,num3,num4);
	ans=(num1-num2)*num3+num4;
	scanf("%d",&JieGuo);
	if(JieGuo==ans)
	{
		printf("计算正确\n");
		coans++;
	}
    else if(JieGuo!=00)
{
printf("计算错误\n");
wrans++;
}	
}
if(q==2)
{
	printf("%d*(%d-%d)*%d=?",num1,num2,num3,num4);
	ans=num1*(num2-num3)*num4;
	scanf("%d",&JieGuo);
	if(JieGuo==ans)
	{
		printf("计算正确\n");
		coans++;
	}
    else if(JieGuo!=00)
{
printf("计算错误\n");
wrans++;
}
}
if(q==3)
{
	printf("%d*(%d+%d)-%d=?",num1,num2,num3,num4);
	ans=num1*(num2+num3)-num4;
	scanf("%d",&JieGuo);
	if(JieGuo==ans)
	{
		printf("计算正确\n");
		coans++;
	}
    else if(JieGuo!=00)
{
printf("计算错误\n");
wrans++;
}
}
if(q==4)
{
printf("%d+%d*(%d-%d)=?",num1,num2,num3,num4);
	ans=num1+num2*(num3-num4);
	scanf("%d",&JieGuo);
	if(JieGuo==ans)
	{
		printf("计算正确\n");
		coans++;
	}
    else if(JieGuo!=00)
{
printf("计算错误\n");
wrans++;
}	
}
if(q==5)
{
	printf("%d-%d*(%d+%d)=?",num1,num2,num3,num4);
	ans=num1-num2*(num3+num4);
	scanf("%d",&JieGuo);
	if(JieGuo==ans)
	{
		printf("计算正确\n");
		coans++;
	}
    else if(JieGuo!=00)
{
printf("计算错误\n");
wrans++;
}	
}
if(q==6)
{
	printf("%d*(%d+%d)*%d=?",num1,num2,num3,num4);
	ans=num1*(num2+num3)*num4;
	scanf("%d",&JieGuo);
	if(JieGuo==ans)
	{
		printf("计算正确\n");
		coans++;
	}
    else if(JieGuo!=00)
{
printf("计算错误\n");
wrans++;
}	
}
if(q==7)
{
	printf("%d*(%d+%d-%d)=?",num1,num2,num3,num4);
	ans=num1*(num2+num3-num4);
	scanf("%d",&JieGuo);
	if(JieGuo==ans)
	{
		printf("计算正确\n");
		coans++;
	}
    else if(JieGuo!=00)
{
printf("计算错误\n");
wrans++;
}	
}
if(q==8)
{
	printf("%d*(%d-%d+%d)=?",num1,num2,num3,num4);
	ans=num1*(num2-num3+num4);
	scanf("%d",&JieGuo);
	if(JieGuo==ans)
	{
		printf("计算正确\n");
		coans++;
	}
    else if(JieGuo!=00)
{
printf("计算错误\n");
wrans++;
}	
}
if(q==9)
{
	printf("%d-(%d-%d)*%d=?",num1,num2,num3,num4);
	ans=num1-(num2-num3)*num4;
	scanf("%d",&JieGuo);
	if(JieGuo==ans)
	{
		printf("计算正确\n");
		coans++;
	}
    else if(JieGuo!=00)
{
printf("计算错误\n");
wrans++;
}	
}
if(q==10)
{
	printf("%d*(%d-%d)-%d=?",num1,num2,num3,num4);
	ans=num1*(num2-num3)-num4;
	scanf("%d",&JieGuo);
	if(JieGuo==ans)
	{
		printf("计算正确\n");
		coans++;
	}
    else if(JieGuo!=00)
{
printf("计算错误\n");
wrans++;
}	
}
if(q==11)
{
	printf("%d+(%d-%d)*%d=?",num1,num2,num3,num4);
	ans=num1+(num2-num3)*num4;
	scanf("%d",&JieGuo);
	if(JieGuo==ans)
	{
		printf("计算正确\n");
		coans++;
	}
    else if(JieGuo!=00)
{
printf("计算错误\n");
wrans++;
}	
}
}		
void inp()
{
   scanf("%c",&ch);
   if(ch=='s')
   sta();
}
int main()
{
exp();
inp();
jj:if(JieGuo==00)
{
printf("程序结束，%d个正确,%d个错误。",coans,wrans);
        getch();
printf("按任意键结束。\n");
exit(0);
} 
if(ch='s')
{
	sta();
}
goto jj;
}


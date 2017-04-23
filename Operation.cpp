#include <stdio.h> 
#include <stdlib.h> 
#include <iostream>
#include <conio.h>
#include <map>
#include <string.h>
using namespace std;

char str[11],s1[5],ch,sf[5];
int n,m,e,i=0,j=0,length=strlen(sf),t=0,son,mom,num[5];
double s;
 // str :栈 存储数据  s1: 整数算式  sf: 分数算式  ch: 字符
 // son mom ： 分子分母 num[5] 对应数字
 // s 输入的值 
string Input="Input";
string True="True";
string Questions="Questions";
string Right="Right";
string Wrong="Wrong";
string Exit="Exit";
// 统一命令  
int flagl=0;
char Lang;
map<string ,string >Map;
// 语言表 
int flag =0 ;
int amount =0;

class Question {
      public :
             int randNum();
             int randSym();
             char symbol(int i);
   };
int  Question::randNum()
             {    
                 
                  return 1+rand()%9;
              }
int  Question::randSym()
             {    
                  
                  return 1+rand()%4;
             }
char Question::symbol(int i){
                  switch(i)
                    {
                   case 1:  return '+';
                            break; 
                   case 2:  return '-';
                            break;         
                   case 3:  return '*';
                            break; 
                   case 4:  if(flag=0) 
                            {
                             return '/';
                             flag=1;
                             break; 
                             }
                             else return symbol(rand()%4+1);
                    }
                  }

int check(char str[])//用于计算生成的运算式的结果

{ 
   int  sum,i,j,t,top=0;
   double d;
   char exp[10];
   char stack[10];
   char ch;
   sum=8;
   t=1;i=1;
   ch=str[i];i++;
     while (ch!='#')
  {
	switch(ch)
	{
	  case '(':  /*判定为左括号*/
		   top++;stack[top]=ch;
		   break;
	  case ')':  /*判定为右括号*/
		   while (stack[top]!='(')
		   {
		     exp[t]=stack[top];top--;t++;
		   }
		   top--;
		   break;
	  case '+':   /*判定为加减号*/
	  case '-':
		    while (top!=0 && stack[top]!='(')
		    {
		      exp[t]=stack[top];top--;t++;
		    }
		    top++;stack[top]=ch;
		    break;
	   case '*':  /*判定为'*'或'/'号*/
	   case '/':
		    while (stack[top]=='*' || stack[top]=='/')
		    {
  	               exp[t]=stack[top];top--;t++;
		    }
		    top++;stack[top]=ch;
		    break;
	   case ' ':break;
	   default:
		    while (ch>='0' && ch<='9') /*判定为数字*/
		    {
		       exp[t]=ch;t++;
		       ch=str[i];i++;
		    }
		    i--;
		    exp[t]='#';t++;
	 }
	 ch=str[i];i++;
  }
  while (top!=0)
  {
    exp[t]=stack[top];t++;top--;
  }
  exp[t]='#';
  t=1;top=0;
  ch=exp[t];t++;
  while (ch!='#')
  {
    switch (ch)
    {
	   case '+':stack[top-1]=stack[top-1]+stack[top];
		    top--;break;
	   case '-':stack[top-1]=stack[top-1]-stack[top];
		    top--;break;
	   case '*':stack[top-1]=stack[top-1]*stack[top];
		    top--;break;
	   case '/':if (stack[top]!=0)
		           stack[top-1]=stack[top-1]/stack[top];
		        else
		        {
		           printf("\n\t除零错误!\n");
                   exit(0);/*异常退出*/
		        }
	            top--;break;
	   default:d=0;
               while (ch>='0' && ch<='9')   /*判定为数字字符*/
                {
		          d=10*d+ch-'0';  /*将数字字符转换成对应的数值*/
		          ch=exp[t];t++;
		        }
		        top++;
		        stack[top]=char(d);
    }
    ch=exp[t];t++;
  }
  return stack[top];
}
bool judge(double a){
     int a1;
     a1=(int)a;
     if(a1==a) return true;
     else return false;
     }
int gcd(int m,int n)  
{  
    if(m<0)  
        m=0-m;  
    if(n<0)  
        n=0-n;  
    for(int c=m%n;c!=0;)  
    {  
        m=n;  
        n=c;  
        c=m%n;  
    }  
    return n;  
}  

void Fraction(){
     
  if(flagl==0)
    {
    True +=Lang;
    Wrong +=Lang;
    Questions +=Lang;
    Right +=Lang;
    Exit +=Lang;
    flagl=1;
    }
    int a,b,c,d,g1,g2,g3;
    char s[5],ch;
    a=1+rand()%5;
    b=1+rand()%5;
    c=6+rand()%5;
    d=6+rand()%5;
    g1=gcd(a,c);
    g2=gcd(b,d);   
    a/=g1;
    c/=g1;
    b/=g2;
    d/=g2;
    cout <<a<<'/'<<c<<'+'<<b<<'/'<<d<<'=';
    son=a*d+b*c;
    mom=c*d;
    g3=gcd(son,mom);
    son/=g3;
    mom/=g3;
}
void FractionPrint()
{
    cin>>sf;
    ch=sf[t];
    for(t=0;t<length;t++)
    {
     ch=sf[t];
     switch(ch)
     {
      case 'g': cout <<Map[True]<<amount<<Map[Questions]<<endl;
                cout <<Map[Exit]<<endl;
                getchar();
                getchar();    
                exit(0);    
      case '/': break;
      default : e=0;
               while(ch>='0' && ch<='9')   /*判定为数字字符*/
		         { 
                 e=10*e+ch-'0';  /*将数字字符转换成对应的数值*/
                 t++;ch=sf[t];
                 }
		        num[i]=e;
                i++;
                break; 
                 
     }
                          
    }
    if(num[0]==son&&num[1]==mom) {cout <<Map[Right]<<endl; amount++;}
    else cout <<Map[Wrong]<<son<<'/'<<mom<<endl;    
     
}
void Rand(){
     
   if(flagl==0)
    {
    True +=Lang;
    Wrong +=Lang;
    Questions +=Lang;
    Right +=Lang;
    Exit +=Lang;
    flagl=1;
    }
    int i,temp,e;
    int num[5];
    int sign[5];
    char sym[5]; 
    int count;
    Question q;
    for(i=1;i<=4;i++)
      num[i]=q.randNum();
    for(i=1;i<=3;i++)
      sign[i]=q.randSym();
    for(i=1;i<=3;i++)
      sym[i]=q.symbol(sign[i]);
    for(i=1;i<=4;i++)
      str[i*2-1]='0'+num[i];
    for(i=1;i<=3;i++)
      str[i*2]=sym[i];
      temp=rand()%3+1;
    for(i=8;i>=temp*2-1;i--)
      str[i]=str[i-1];
    str[temp*2-1]='(';
    str[9]=')';
    for(i=1;i<=9;i++)
      cout <<str[i];
    cout <<"=";
}
void RandPrint()
{
     cin >>s1;
    str[10]='#';
    s=check(str);
	if (s1[0] == 'g')
	{
		cout <<Map[True] << amount << Map[Questions] << endl;
		cout <<Map[Exit]<< endl;
		getchar();
		getchar();
		exit(0);
	}
	else

		sscanf(s1, "%d", &e);
    
    if(judge(s))
    {
     if(e==s)
      {cout <<Map[Right]<<endl;amount++;}
     else
      cout <<Map[Wrong]<<s<<endl; 
    }
    else 
     Rand();   
}
void scan()
{
 char L;

 char str[100];
 char str1[100];
 FILE *fp;
 int max=0;
 string s,s1;
 char ch[1000][1024];

 fp=fopen("Language.txt","r");
 ch[0][0]=fgetc(fp); 
while(!feof(fp)) 
{
 if(ch[i][j]=='\n')
  {i++;j=0;}
 else {
     j++;
     if(max<j) max=j;
     }             
ch[i][j]=fgetc(fp); 
} 
m=i;
for(i=0;i<=4;i++)
{
  for(j=0;j<strlen(ch[i]);j++)
  cout <<ch[i][j];                 
}
cin>>Lang;
for(i=5;i<=m;i++)
{
  for(j=0;j<max;++j)
  {
 	  if(ch[i][j]!='\n')
 	    s+=ch[i][j];
 	  else
 	    break;
  }     
  i++;
  for(j=0;j<max;++j)
  {
 	  if(ch[i][j]!='\n')
 	    s1+=ch[i][j];
 	  else
 	    break;
  }  
  Map[s]=s1; 
 s="";
 s1="";         
}
 Input +=Lang;
 cout <<Map[Input];
 cin>>n;
 }

int main()
{
 srand((unsigned)time(NULL));
 scan();//该函数用于与用户交互，获取输入数据 
 for(i=1;i<=n;i++)
           {
            if(i%5==0)
            {
            Fraction(); //用于随机生成分数算式 
            FractionPrint();//将统计结果输出给用户
            }
            else
            {
            Rand();  //用于随机生成整数算式    
            RandPrint();//将统计结果输出给用户
            }                                      
           } 
 // 随机生成数字跟符号打包成一个函数了  计算判断也在随机生成算式函数内部里          
   return 0; 
}


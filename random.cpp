#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
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
int check(char str[])
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
		        stack[top]=d;
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
    int a,b,c,d,g1,g2,g3;
    int son,mom,num[5];
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
    cin>>s;
    int t=0,i=0,e,length=strlen(s);
    ch=s[t];
    for(t=0;t<length;t++)
    {
     ch=s[t];
     switch(ch)
     {
      case 'g': cout <<"答对了"<<amount<<"道题"<<endl;
                cout <<"程序将退出。。。。"<<endl;
                getchar();
                getchar();    
                exit(0);    
      case '/': break;
      default : e=0;
               while(ch>='0' && ch<='9')   /*判定为数字字符*/
		         { 
                 e=10*e+ch-'0';  /*将数字字符转换成对应的数值*/
                 t++;ch=s[t];
                 }
		        num[i]=e;
                i++;
                break; 
                 
     }
                          
    }
    if(num[0]==son&&num[1]==mom) {cout <<"回答正确！"<<endl; amount++;}
    else cout <<"答错了！正确答案是："<<son<<'/'<<mom<<endl; 
}
void Rand(){
    int i,temp,e;
    int num[5];
    int sign[5];
    char sym[5]; 
    char str[11];
    char s1[5],ch;
    int count;
    double s;
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
    cin >>s1;
    str[10]='#';
    s=check(str);
    if(s1[0]=='g')
    {
      cout <<"答对了"<<amount<<"道题"<<endl;
      cout <<"程序将退出。。。。"<<endl;
      getchar();
      getchar();     
      exit(0);              
    }
    else 
     sscanf(s1,"%d",&e) ;
    
    if(judge(s))
    {
     if(e==s)
      {cout <<"回答正确！"<<endl;amount++;}
     else
      cout <<"答错了！正确答案是："<<s<<endl; 
    }
    else 
     Rand();   
}



int main()
{
 srand((unsigned)time(NULL));
 char L;
 int n,i,m;
 char str[100];
 char str1[100];
cout <<"请问要使用哪种语言/Which language do you want to use？(C or E)"<< endl;
cin >>L;
if(L=='C')
 {
 cout <<"*********************************************************************"<<endl;
 cout <<"***欢迎使用小学生四则运算练习题系统1.0                              *"<<endl;
 cout <<"***                                    (统计题数或是结束程序请输入g)*"<<endl;  
 cout <<"***--------附带计算器功能      输入1->练习题系统  输入2-> 计算器    *"<<endl;
 cout <<"*********************************************************************"<<endl;
 cin >>m;
 switch(m)
   {
   case 1: cout <<"☆请输入练习题数n：";
           cin >>n;
           for(i=1;i<=n;i++)
           {
            if(i%5==0)
            Fraction();
            else
            Rand();                 
                            
           } 
           break;
        
   case 2: cout <<"☆请输入算式：   （注:以“#”表示结尾,输入g退出程序）"<<endl;
           while(1)
           {
           cin >>str;
           if(str[0]=='g')
            exit(0);
           else
           for(i=0;i<strlen(str);i++)
           {
             str1[i+1]=str[i];                        
           } 
           cout <<"结果是:"<<check(str1)<<endl; 
           }
                 
   }
 }
else
 {
 cout <<"***************************************************************************************"<<endl;
 cout <<"***Welcome to the use of the  exercises system for pupils 1.0                         *"<<endl;
 cout <<"***(statistics or the end of the program, please enter g)                             *"<<endl;
 cout <<"*** Along with the calculator function input 1-2 - >exercises system input calculator *"<<endl;
 cout <<"***************************************************************************************"<<endl;
 cin >>m;
 switch(m)
   {
   case 1: cout <<"☆请输入练习题数n：";
           cin >>n;
           for(i=1;i<=n;i++)
           {
            if(i%5==0)
            Fraction();
            else
            Rand();                 
                            
           } 
           break;
        
   case 2: cout <<"☆请输入算式：   （注:以“#”表示结尾,输入g退出程序）"<<endl;
           while(1)
           {
           cin >>str;
           if(str[0]=='g')
            exit(0);
           else
           for(i=0;i<strlen(str);i++)
           {
             str1[i+1]=str[i];                        
           } 
           cout <<"结果是:"<<check(str1)<<endl; 
           }
                 
   }
 
 
 
 
 } 
return 0;
}


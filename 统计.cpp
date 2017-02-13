#include <stdio.h>
#include <iostream>
using namespace std
void Tongji()
{
if(a[0]=='g')
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

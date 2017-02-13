#include iostream
using namespace std
cout <<"请问要使用哪种语言/Which language do you want to use？"<< endl;
cout <<"输入C切换至中文，输入E切换至英文/Print 'C' switch to Chinese,print 'E' switch to English"<<endl;
cout <<"请区分大小写/Case sensitive"<<endl ;
cin >>L;
if(L=='C')
 {
 cout <<"*********************************************************************"<<endl;
 cout <<"***欢迎使用小学生四则运算练习题系统1.0                              *"<<endl;
 cout <<"***                                    (统计题数或是结束程序请输入g)*"<<endl;  
 cout <<"***--------附带计算器功能      输入1->练习题系统  输入2-> 计算器    *"<<endl;
 cout <<"*********************************************************************"<<endl;
 cin >>m;
}
 if(L=='E')
 {
 	cout <<"***************************************************************************************"<<endl;
 cout <<"***Welcome to the use of the  exercises system for pupils 1.0                         *"<<endl;
 cout <<"***(statistics or the end of the program, please enter g)                             *"<<endl;
 cout <<"*** Along with the calculator function input 1-2 - >exercises system input calculator *"<<endl;
 cout <<"***************************************************************************************"<<endl;
 cin >>m;
 }
 return 0;

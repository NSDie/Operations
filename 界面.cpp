#include iostream
using namespace std
cout <<"����Ҫʹ����������/Which language do you want to use��"<< endl;
cout <<"����C�л������ģ�����E�л���Ӣ��/Print 'C' switch to Chinese,print 'E' switch to English"<<endl;
cout <<"�����ִ�Сд/Case sensitive"<<endl ;
cin >>L;
if(L=='C')
 {
 cout <<"*********************************************************************"<<endl;
 cout <<"***��ӭʹ��Сѧ������������ϰ��ϵͳ1.0                              *"<<endl;
 cout <<"***                                    (ͳ���������ǽ�������������g)*"<<endl;  
 cout <<"***--------��������������      ����1->��ϰ��ϵͳ  ����2-> ������    *"<<endl;
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

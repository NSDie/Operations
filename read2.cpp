#include <iostream>
#include <locale>
#include <cstdlib>
#include "wiostream"
using namespace std;
 
locale loc("chs");//windows��ok
 
//���ò����ubuntu��ok
//locale loc("zh_CN.UTF-8");
//���һ���Ҫ��ubuntu���ն���ִ�У�
//sudo locale-gen
 
int main()
{
wchar_t wStr[]=L"����һ������";
wcout.imbue(loc);
wcout<<wStr<<endl;
getchar();
getchar();

}


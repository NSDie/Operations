#include <iostream>
#include <locale>
#include <cstdlib>
#include "wiostream"
using namespace std;
 
locale loc("chs");//windows下ok
 
//这段貌似在ubuntu下ok
//locale loc("zh_CN.UTF-8");
//而且还需要在ubuntu的终端中执行：
//sudo locale-gen
 
int main()
{
wchar_t wStr[]=L"这是一段中文";
wcout.imbue(loc);
wcout<<wStr<<endl;
getchar();
getchar();

}


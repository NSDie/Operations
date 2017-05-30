#pragma once
#include <string>
#include <sstream>
#include <fstream>  
#include <iostream> 
using namespace std;
class Print
{
private:
	string lang[200] ;
public:
	//void FractionPrint(char *filename);//打印分数算式
	void RandPrint(string str);//打印整数算式
	int scan();//界面 
	void printWrong(int s);
	void printWrongf(int a, int b);
	void printTrue();
	void print(int count);//输出统计结果 
	//int readFile(char *filename);//读取用户要求的题目数量(请注意参数设置)

};

#ifndef Question_H
#define Question_H
class Question {
public:
	int randNum();
	int randSym();
	char symbol(int i);
};
int readFile(char *filename);//读取用户要求的题目数量(请注意参数设置)
int check(char str[]);//计算答案
bool judge(double a);//判断是不是整数
int gcd(int m, int n);//求最小公倍数
void Fraction();//生成分数算式
void FractionPrint(char *filename);//打印分数算式
void Rand();//生成整数算式
void RandPrint(char *filename);//打印整数算式
void scan(char *filename,int n );//界面 
void writeFile(char *filename);//将最终结果写入文件
//void Print(char *filename);//输出统计结果 
#endif

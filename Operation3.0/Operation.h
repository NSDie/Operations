#ifndef Question_H
#define Question_H
class Question {
public:
	int randNum();
	int randSym();
	char symbol(int i);
};
int readFile(char *filename);//��ȡ�û�Ҫ�����Ŀ����(��ע���������)
int check(char str[]);//�����
bool judge(double a);//�ж��ǲ�������
int gcd(int m, int n);//����С������
void Fraction();//���ɷ�����ʽ
void FractionPrint(char *filename);//��ӡ������ʽ
void Rand();//����������ʽ
void RandPrint(char *filename);//��ӡ������ʽ
void scan(char *filename,int n );//���� 
void writeFile(char *filename);//�����ս��д���ļ�
//void Print(char *filename);//���ͳ�ƽ�� 
#endif

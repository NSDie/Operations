#include "Println.h"
#include <sstream>
#include <iostream>
using namespace std;
string Input = "Input";
string True = "True";
string Questions = "Questions";
string Right = "Right";
string Wrong = "Wrong";
string Exit = "Exit";
char Lang;
// Õ≥“ª√¸¡Ó  

void Print::RandPrint(string str)
{
	stringstream s;
	s << str << '=';
	cout << s.str();
	s.str("");

}
int Print::scan()
{
	int n;
	char L;
	FILE *fp;
	int max = 0, i = 0, m, j=0;
	string s, s1;
	char ch[1000][1024];
	fp = fopen("Language.txt", "r");
	ch[0][0] = fgetc(fp);
	while (!feof(fp))
	{
		if (ch[i][j] == '\n')
		{
			i++; j = 0;
		}
		else {
			j++;
			if (max < j) max = j;
		}
		ch[i][j] = fgetc(fp);
	}
	m = i;
	for (i = 0; i <= 4; i++)
	{
		for (j = 0; j < strlen(ch[i]); j++)
		{
			cout << ch[i][j];
			
		}
	}
	cin >> Lang;
	
	for (i = 5; i <= m; i++)
	{
		for (j = 0; j < max; ++j)
		{
			if (ch[i][j] != '\n')
				s += ch[i][j];
			else
				break;
		}
		i++;
		for (j = 0; j < max; ++j)
		{
			if (ch[i][j] != '\n')
				s1 += ch[i][j];
			else
				break;
		}
		Map[s] = s1;
		s = "";
		s1 = "";
	}
	Input += Lang;
    True += Lang;
    Questions += Lang;
    Right += Lang;
    Wrong += Lang;
    Exit += Lang;
	cout << Map[Input];


	cin >> n;
	return n;
}
void Print::printTrue()
{
 cout << Map[Right] << endl;
}
void Print::printWrong(int s)
{
 cout<<Map[Wrong]<<s<<endl; 
}
void Print::print(int count)
{
 cout << Map[True] << count << Map[Questions] << endl; 
 cout << Map[Exit] << endl;
 getchar();
 getchar();
 exit(0);
}

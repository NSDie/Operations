#include "stdafx.h"
#include "Println.h"
// 统一命令  

void Print::RandPrint(string str)
{
	stringstream s;
	s << str << '=';
	cout << s.str();
	s.str("");

}
int Print::scan()
{
	int n,i=1;
	ifstream in("Language.txt");
	string line,language;
		while (getline(in, line)) // line中不包括每行的换行符  
		{
			cout << line << endl;
		}
		cin >> language;
		language += ".txt";
		ifstream ini(language);
		while (!ini.eof())
		{
			getline(ini, lang[i], '\n');
			i++;
		}
		cout << lang[1];
	cin >> n;
	return n;
}

void Print::printTrue()
{
	
	
			cout << lang[4]<< endl;
	
}
void Print::printWrong(int s)
{
	cout << lang[5]<< s << endl;
}
void Print::printWrongf(int a, int b)
{
	
			cout << lang[5] << a << '/' << b << endl;
	
	
}
void Print::print(int count)
{
	
			cout << lang[2] << count << lang[3] << endl;
			cout << lang[6] << endl;
	exit(0);
}

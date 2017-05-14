#include <cstdlib>
#include <iostream>
#include <string>
#include "Question.h"
#include "Println.h"
using namespace std;


int main(int argc, char *argv[])
{
    srand((unsigned)time(NULL));
	Print p;
	Question q;
	int n=p.scan(),count=0;
    int i,num;
    for(i=0;i<n;i++)
    {
     	string str = q.Rand();
     	p.RandPrint(str);
     	cin>>num;
     	if(q.check(str)==num)
     	{
        p.printTrue();
        count++;
        }
     	else
         {
         p.printWrong(q.check(str));   
         }                    
    }
    p.print(count);
    
    return EXIT_SUCCESS;
}

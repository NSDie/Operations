#include <stdio.h> 
#include <stdlib.h> 
#include <iostream>
#include <conio.h>
#include <map>
#include <string.h>
using namespace std;

int main() 
{ 
map<string ,string> map;
FILE *fp;
int max=0;
string s;
char ch[1000][1024];
int i=0,j=0,m; 
fp=freopen("Language.txt","r",stdin);
ch[0][0]=fgetc(fp); 
while(!feof(fp)) 
{
 if(ch[i][j]=='\n')
  {i++;j=0;}
 else {
     j++;
     if(max<j) max=j;
     }             
ch[i][j]=fgetc(fp); 
} 


for(i=5;i<=16;i++)
{
 s=string(ch[i]);
 i++;
 map[s]=string(ch[i]);                
}
 
getch();

}

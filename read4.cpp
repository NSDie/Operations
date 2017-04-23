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
string s,s1;
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
  for(j=0;j<max;++j)
  {
 	  if(ch[i][j]!='\n')
 	    s+=ch[i][j];
 	  else
 	    break;
  }     
  i++;
  for(j=0;j<max;++j)
  {
 	  if(ch[i][j]!='\n')
 	    s1+=ch[i][j];
 	  else
 	    break;
  }  
  map[s]=s1; 
 s="";
 s1="";         
}
 cout <<map["input1"];
getch();

}

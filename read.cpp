#include <io.h>
#include  <direct.h>  
#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <vector>
#include <conio.h>
using namespace std;
void getJustCurrentFile( string path, vector<string>& files) 
{ 
  //文件句柄 
  long  hFile  =  0; 
  //文件信息 
  struct _finddata_t fileinfo; 
  string p; 
  if((hFile = _findfirst(p.assign(path).append("\\*").c_str(),&fileinfo)) != -1) 
  { 
    do
    {  
      if((fileinfo.attrib & _A_SUBDIR)) 
      { 
        ;
      } 
      else
      { 
        files.push_back(fileinfo.name);
      }  
    }while(_findnext(hFile, &fileinfo) == 0); 
    _findclose(hFile); 
  } 
} 
int main()
{   
char   buffer[MAX_PATH];   
getcwd(buffer, MAX_PATH);  
char * filePath = buffer; 
vector<string> files; 
char * distAll = "ALL.txt";
getJustCurrentFile(filePath, files);
ofstream ofn(distAll);
int size = files.size(); 
ofn<<size<<endl;
for (int i = 0;i<size;i++) 
{ 
  ofn<<files[i]<<endl; 
}
ofn.close();
getch();
}

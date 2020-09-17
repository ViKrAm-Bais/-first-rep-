//
//
//
//
#include<iostream>
using namespace std;
int main()
{
  int H1[26]={0},H2[26]={0};
  char s1[]="state";
  char s2[]="taste";
  for(int i=0;s1[i]!='\0';i++)
  {
    H1[int(s1[i]-97)]++;
    H2[int(s2[i]-97)]++;
  }
  int c=0;
  for(int i=0;i<26;i++)
  {
    if(H1[i]!=H2[i]) c++;
  }
  if(c>0) cout<<"no"<<endl;
  else cout<<"yes"<<endl;
  return 0;
}

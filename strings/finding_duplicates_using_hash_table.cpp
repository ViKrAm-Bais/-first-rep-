//
//
//
//
#include<iostream>
using namespace std;
int main()
{
  int H[26]={0};
  char ss[]="asdfga";
  int i;
  for(i=0;ss[i]!='\0';i++)
  {
    H[int(ss[i])-97]++;
  }
  for(i=0;i<26;i++)
  {
    if(H[i]>1) cout<<char(i+97)<<endl;
  }
  return 0;
}

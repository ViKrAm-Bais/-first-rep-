//
//
//
//
#include<iostream>
using namespace std;
void per(char s[], int k)
{
  static int a[10]={0};
  static char c[10];
  int i;
  if(s[k]=='\0')
  {
    c[k]='\0';
    cout<<"a: "<<c<<endl;
  }
  else
  {
    for(i=0;s[i]!='\0';i++)
    {
      if(a[i]==0)
      {
        c[k]=s[i];
        a[i]=1;
        per(s,k+1);
        a[i]=0;
      }
    }
  }
}
int main()
{
  char s[]="abc";
  per(s,0);
  return 0;
}

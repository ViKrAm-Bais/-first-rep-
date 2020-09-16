//
//
//
//
#include<iostream>
using namespace std;
void with_other_string()
{
  char s1[]="abcd";
  char s2[6];
  cout<<"s1: "<<s1<<endl;
  int i;
  for(i=0;s1[i]!='\0';i++);
  i--;
  for(int j=0;i>=0;i--,j++)
  {
    s2[j]=s1[i];
  }
  cout<<"s2: "<<s2<<endl;
}
void without_other_string()
{
  char s1[]="abcd";
  int i;
  char temp;
  for(i=0;s1[i]!='\0';i++);
  i--;
  for(int j=0;j<i;i--,j++)
  {
    temp = s1[j];
    s1[j] = s1[i];
    s1[i] = temp;
  }
  cout<<"s1: "<<s1<<endl;
}
int main()
{
  with_other_string();
  without_other_string();
  return 0;
}

/*

methods for inatilizing strings
1] char sss[10] = {'a','b','\0'}            created in stack
2] char sss[] = {'a','b','\0'}              created in stack
3] char sss[]  = "ab"                       created in stack
4] char *sss = "ab"                         created in heap

*/

#include<iostream>
using namespace std;
int main()
{
  char s1[3]={'a','b','\0'};
  char s2[] = {'a', 'b', '\0'};
  char s3[] = "ab";
  cout<<s1<<endl;
  cout<<s2<<endl;
  cout<<s3<<endl;
  return 0;
}

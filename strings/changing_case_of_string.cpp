//
//65 - 90   capitals letter
//97 * 122  small letter
// 32 for space


#include<iostream>
using namespace std;
int main()
{
  char ss[]="WELCOME";
  for(int i=0;ss[i]!='\0';i++) ss[i] = ss[i] + 32;// or char(int(ss[i]) + 32)
  cout<< ss <<endl;
  return 0;
}

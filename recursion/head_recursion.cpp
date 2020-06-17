//function that dosent have any statement before funcation call
//all command are after function call
//all process is dont at returning time

//we cant easily convert head recursion but it can be converted
// we can do reverse loop for this

#include<iostream>
using namespace std;
void f(int n)
{
  if (n>0)
  {
    f(n-1);
    cout<<n<<endl;
  }
}
int main()
{
  f(5);
  return 0;
}

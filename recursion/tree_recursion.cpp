//linear recrusion is funcation call at one time

//if statement is present ber=fore and after call
// then it is called or pronounse as  as recursion

//if function is calling itself more thne one time then it is tree recursion
// if  we darw the tree

// then the no of calls will be gp series // 2p0+ 2p1 + 2p2... 2pn

// no of call ord(2pn)

//time complexity is ord(2pn)
//space complexity is ord(n)
// space complexity when the activation  record for one is deleted then
// after that for another is created so we do no trecuire mush space 
#include<iostream>
using namespace std;
void f(int n)
{
  if(n>0)
  {
    cout<<n<<endl;
    f(n-1);
    f(n-1);
  }
}
int main()
{
  f(3);
  return 0;
}

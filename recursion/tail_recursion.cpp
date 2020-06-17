//if the last statament of function is function call thne it is tail rescursion
//tail recuursion can be easily convert into loop
// loop is better then tail recursion in space complexity which is ord(1)
// and space complexity of tail recursion ord(n)
// time complexitsy of both are ord(n)



#include<iostream>
using namespace std;
void f(int n)
{
  if (n>0)
  {
    cout<<n<<endl;
    f(n-1);
  }
}
int main()
{
  f(5);
  return 0;
}

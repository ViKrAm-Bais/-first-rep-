//
//
//
//
#include<iostream>
using namespace std;
int t;
int ar[100] = {0};
int fib(int n)
{
  if(ar[n]-1!=-1) return ar[n]-1;
  else
  {
    cout<<"gone";
    if(n==1) t = 0;
    else if(n==2) t = 1;
    else t = fib(n-1) + fib(n-2);
    ar[n] = t+1;
    return t;
  }
}
int main()
{
  for(int i=1;i<=10;i++) cout<<fib(i)<<" ";
  return 0;
}

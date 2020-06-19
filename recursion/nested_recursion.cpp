//in nested resursion the paramater is passed as the function call
//recursive function is having the paramater as function itself
//
//
#include<iostream>
using namespace std;
int f(int n)
{
  cout<<"f: "<<n<<endl;
  if(n<=1) return 1;
  return f(f(n-1));
}
int main()
{
  cout<<f(4);
  return 0;
}

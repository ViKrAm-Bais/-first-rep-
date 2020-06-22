//static array size are dicided at compilation time
//size of static array cant be modified
//a[ ] the memory is created inside stack
// p//memory for five int will be created at heap

#include<iostream>
using namespace std;
int main()
{
  int *p;     // p will be in stack
  p=new int[5];
  for(int i=0;i<5;i++) cin>>i[p];
  for(int i=0;i<5;i++) cout<<i[p];
  cout<<endl;
  for(int i=0;i<5;i++) cout<<*(p+i);
  cout<<endl;
  delete []p;   //deleting is very important because of memory leak problem
  return 0;         //sortage of memory ,reduction in size of memory
}

//
//
//
//
#include<iostream>
using namespace std;
struct aa
{
  int a[20],size,length;
};
int* reverse(struct aa *at)
{
  int *b;
  b=new int[at->length];
  for(int i=0;i<at->length;i++)
  {
    b[i]=at->a[at->length-i-1];
  }
  return b;
}
void reverse2(struct aa *at)
{
  int b;
  for(int i=0;i<at->length;i++)
  {
    b=at->a[i];
    at->a[i]=at->a[at->length-i-1];
    at->a[at->length-i-1]=b;
  }
}
int main()
{
  struct aa a1={{1,2,3,4,5,6,7,8,9,10},20,10};
  int *p=reverse(&a1);
  for(int i=0;i<10;i++) cout<<*(p+i)<<" ";
  cout<<endl;
  for(int i=0;i<10;i++) cout<<a1.a[i]<<" ";
  cout<<endl;
  reverse2(&a1);
  for(int i=0;i<10;i++) cout<<a1.a[i]<<" ";
  cout<<endl;
  return 0;
}

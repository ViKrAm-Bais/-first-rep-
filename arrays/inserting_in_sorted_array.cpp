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
struct aa insert(struct aa *at,int k)
{
  int i=at->length-1;
  while(k<at->a[i])
  {
    at->a[i+1]=at->a[i];
    i--;
  }
  at->a[i+1]=k;
  at->length++;
  return *at;
}
void display(struct aa at)
{
  cout<<"display: ";
  for(int i=0;i<at.length;i++)
  {
    cout<<at.a[i]<<" ";
  }
  cout<<endl;
}
int main()
{
  struct aa a1={{1,2,3,4,5,7,8,9,10,11},20,10};
  a1=insert(&a1,6);
  display(a1);
  return 0;
}

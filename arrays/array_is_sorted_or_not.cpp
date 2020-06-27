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
int check(struct aa *at)
{
  for(int i=0;i<at->length-1;i++)
  {
    if(at->a[i]>at->a[i+1])
    {
      return 0;
    }
  }
  return 1;
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
  int s=check(&a1);
  display(a1);
  if(s==0) cout<<"not"<<endl;
  else if(s==1) cout<<"yes"<<endl;
  return 0;
}

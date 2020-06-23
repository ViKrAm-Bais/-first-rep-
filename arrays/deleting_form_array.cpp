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

void display(struct aa at)
{
  for(int i=0;i<at.length;i++) cout<<"a["<<i<<"] : "<<at.a[i]<<endl;
  cout<<"......"<<endl;
}
void deleting(struct aa* at,int n)
{
  for(int i=n-1;i<at->length-1;i++)
  {
    at->a[i]=at->a[i+1];
  }
  at->length--;
}

int main()
{
  struct aa a1={{1,2,3,4,5},20,5};
  display(a1);
  deleting(&a1,3);
  display(a1);
  return 0;
}

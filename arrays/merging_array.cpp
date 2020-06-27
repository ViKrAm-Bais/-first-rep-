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
int *merging(struct aa *at1,struct aa *at2)
{
  int *p,lk=at1->length + at2->length;
  p=new int[lk];
  int i=0,j=0,k=0;
  while(i<at1->length && j<at2->length)
  {
    if(at1->a[i]<at2->a[j]) p[k++]=at1->a[i++];
    else p[k++]=at2->a[j++];
  }
  for(;i<at1->length;i++) p[k++]=at1->a[i];
  for(;j<at2->length;j++) p[k++]=at2->a[j];
  return p;
}
void display(struct aa at)
{
  cout<<"display: ";
  for(int i=0;i<at.length;i++) cout<<at.a[i]<<" ";
  cout<<endl;
}
int main()
{
  struct aa a1={{1,3,5,6,7},20,5};
  struct aa a2={{2,4,8,9,10},20,5};
  int *p;
  display(a1);
  p=merging(&a1,&a2);
  for(int i=0;i<10;i++) cout<<"a: "<<p[i]<<", ";
  return 0;
}

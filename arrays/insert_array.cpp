#include<iostream>
using namespace std;
struct array
{
  int a[20],size,length;
};
void display(struct array *at)
{
  for(int i=0;i<at->length;i++) cout<<"a: "<<*(at->a+i)<<"  ";
  cout<<endl;
}
void append(struct array *at,int x)
{
  if(at->size > at->length)
  {
    at->a[at->length]=x;
    at->length++;
  }
}
void insert(struct array * at ,int pos, int x)
{
  if(at->size > at->length)
  {
    int i;
    for(i=at->length;i>=pos;i--)
    {
      at->a[i]=at->a[i-1];
    }
    at->a[i]=x;
    at->length++;
  }
}
void delet(struct array * at ,int pos)
{
  if(at->size > at->length)
  {
    for(int i=pos-1;i< at->length;i++)
    {
      at->a[i]=at->a[i+1];
    }
    at->length--;
  }
}
int main()
{
  array a1={{1,2,3,4,5},20,5};
  display(&a1);
  append(&a1,10);
  display(&a1);
  insert(&a1,3,100);
  display(&a1);
  delet(&a1,4);
  display(&a1);
  return 0;
}

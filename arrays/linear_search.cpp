//for improving linear search there are two method
//1] transposition : in this the key ele is shifted ones towards starting position
//2] move to front/head : in this we swap the key ele with ele with pos 0
//both two method is helpful when we search the same element tow or more time
//as both reduce the time compelxity
#include<iostream>
using namespace std;
struct aa
{
  int a[20],size,length;
};
void display(struct aa at)
{
  for(int i=0;i<at.length;i++) cout<<"a["<<i<<"] : "<<at.a[i]<<endl;
  cout<<"................."<<endl;
}
void linear_search(struct aa *at,int k)  // call by address
{
  int pos=-1;
  for(int i=0;i<at->length;i++)
  {
    if(at->a[i]==k)            //comparing
    {
      int temp;
      pos=i;
      temp=at->a[i];        // using move to head method 
      at->a[i]=at->a[0];    //swaping
      at->a[0]=temp;
      break;
    }
  }
  if(pos==-1) cout<<"not found"<<endl;
  else cout<<"found at "<<pos+1<<" position"<<endl;
}
int main()
{
  struct aa a1={{1,2,3,4,5},20,5};
  display(a1);
  linear_search(&a1,4);
  display(a1);
  return 0;
}

//
//
//
//if lower>higher while searching then element is not in array
#include<iostream>
using namespace std;
struct aa
{
  int a[20],size,length;
};
void display(struct aa *at)
{
  for(int i=0;i<at->length;i++) cout<<at->a[i]<<", ";
  cout<<endl;
}
void recurssive_search(struct aa at,int k,int l,int h)
{
  int m=(l+h)/2;

  if(l<=h)
  {
    if(k<at.a[m])
    {
      h=m-1;
      recurssive_search(at,k,l,h);
    }
    else if(k>at.a[m])
    {
      l=m+1;
      recurssive_search(at,k,l,h);
    }
    else if(k==at.a[m]) cout<<"rec: found "<<k<<" at "<<m+1<<" position"<<endl;
  }
  else cout<<"rec: not found"<<endl;
}
void bin_search(struct aa *at,int k)
{
  int l=0,h=at->length-1,m;
  m=(l+h)/2;
  while(1)
  {
    if(k<at->a[m]) h=m-1;
    else if(k>at->a[m]) l=m+1;
    else if(k==at->a[m])
    {
      cout<<"found "<<k<<" at "<<m+1<<" position"<<endl;
      break;
    }
    if(l>h)
    {
      cout<<k<<" not found"<<endl;
      break;
    }
    m=(l+h)/2;
  }
}
int main()
{
  struct aa a1={{1,2,4,5,7,8,12,14,16,19},20,10};
  display(&a1);
  int k,t;
  cin>>t;
  while(t--)
  {
    cin>>k;
    cout<<"searching for "<<k<<endl;
    bin_search(&a1,k);
    recurssive_search(a1,k,0,9);
  }
  return 0;
}

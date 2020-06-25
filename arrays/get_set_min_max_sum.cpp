//
//
//
//
#include<iostream>
using namespace std;
int get(int a[],int k)
{
  return a[k];
}
void set(int a[],int k,int n)
{
  a[k]=n;
}
int min(int a[])
{
  int m=a[0];
  for(int i=1;i<10;i++)
  {
    if(a[i]<m) m=a[i];
  }
  return m;
}
int max(int a[])
{
  int m=a[0];
  for(int i=0;i<10;i++)
  {
    if(m<a[i]) m=a[i];
  }
  return m;
}
int sum(int a[])
{
  int s=0;
  for(int i=0;i<10;i++) s=s+a[i];
  return s;
}
int avg(int a[])
{
  int s=0;
  float avg;
  for(int i=0;i<10;i++) s=s+a[i];
  avg=float(float(s)/float(10));
  return avg;
}
int main()
{
  int a[10]={1,2,3,4,5,6,7,8,9,10};
  cout<<"get: "<<get(a,3)<<endl;
  set(a,3,40);
  cout<<"get: "<<get(a,3)<<endl;
  cout<<"min: "<<min(a)<<endl;
  cout<<"max: "<<max(a)<<endl;
  cout<<"sum: "<<sum(a)<<endl;
  cout<<"avg: "<<avg(a)<<endl;
  return 0;
}

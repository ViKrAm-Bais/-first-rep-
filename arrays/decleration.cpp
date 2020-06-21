#include<iostream>
using namespace std;
int c[5];  // all 0
int main()
{
  int a[5]={1,2,3,4,5};
  int b[5]; //garbage
  int d[5]={2,4};  // d[0]=2, d[1] =4 and all other will be 0
  int f[5]={0}; //all are 0
  int g[]={1,2,3,4,5};//size is equal to no of ele
  for(int i=0;i<5;i++) cout<<a[i]<<" ";
  cout<<endl;
  for(int i=0;i<5;i++) cout<<b[i]<<" ";
  cout<<endl;
  for(int i=0;i<5;i++) cout<<c[i]<<" ";
  cout<<endl;
  for(int i=0;i<5;i++) cout<<d[i]<<" ";
  cout<<endl;
  for(int i=0;i<5;i++) cout<<f[i]<<" ";
  cout<<endl;
  for(int i=0;i<5;i++) cout<<g[i]<<" ";
  cout<<endl;
  return 0;
}

#include<iostream>
using namespace std;
void insert_max_heap(int a[], int n)
{
  int temp = a[n];
  int j=n;
  while(j>=1 && temp>a[j/2])
  {
    a[j]=a[j/2];
    j=j/2;
  }
  a[j] = temp;
}
void delete_heap(int a[], int n)
{
  a[0] = a[n-1];
  int i = 0;
  int j = 1;
  while(j<n-1)
  {
    int temp;
    if(a[j+1] > a[j]) j++;
    if(a[i] < a[j])
    {
      temp = a[i];
      a[i] = a[j];
      a[j] = temp;
      i = j;
      j = j*2;
    }
    else break;
  }
}
int main()
{
  int t;
  cin>>t;
  int a[20];
  for(int i=0;i<t;i++)
  {
    a[i]=t-i;
    insert_max_heap(a, i);
  }
  for(int i=0;i<t;i++) cout<<a[i]<<" ";
  cout<<endl;
  delete_heap(a, t);
  t--;
  for(int i=0;i<t;i++) cout<<a[i]<<" ";
  cout<<endl;
  return 0;
}

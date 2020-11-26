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
void heapsort(int a[], int N)
{
  for(int n=N;n>0;n--)
  {
    int last = a[0];
    a[0] = a[n-1];
    int i = 0;
    int j = 1;
    int temp;
    while(j<n-1)
    {
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
    a[n-1] = last;
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
  heapsort(a, t);
  for(int i=0;i<t;i++) cout<<a[i]<<" ";
  cout<<endl;
  return 0;
}

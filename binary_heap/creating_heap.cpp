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
void insert_min_heap(int a[], int n)
{
  int temp = a[n];
  int j=n;
  while(j>=1 && temp<=a[j/2])
  {
    a[j] = a[j/2];
    j = j/2;
  }
  a[j] = temp;
}
int main()
{
  int a[20], t;
  cin>>t;
  for(int i=0;i<t;i++)
  {
    a[i] = rand()%20+1;
    insert(a, i);
  }
  //cout<<endl;;
  for(int i=0;i<t;i++) cout<<a[i]<<" ";
  return 0;
}

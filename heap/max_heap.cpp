#include<iostream>
using namespace std;

void delete_heap(int a[], int size, int mx_size, int pos)
{
  int i=pos;
  while(2*i<=size)
  {
    if(a[2*(i+1)-1+1] > a[2*(i+1)-1])
    {
      int tem = a[i];
      a[i] = a[2*(i+1)-1+1];
      a[2*(i+1)-1+1] = tem;
      i = 2*(i+1)-1+1;
    }
    else
    {
      int tem = a[i];
      a[i] = a[2*(i+1)-1];
      a[2*(i+1)-1] = tem;
      i = 2*(i+1)-1;
    }
  }
  if(i%2==1) a[i] = a[i+1];
}

void insert(int a[], int size, int mx_size, int val)
{
  if(size<=mx_size)
  {
    int i=size;
    a[size] = val;
    while(i>=0)
    {
      if(a[i/2]<a[i])
      {
        int tem = a[i];
        a[i] = a[i/2];
        a[i/2] = tem;
        i=i/2;
      }
      else break;
    }
  }
  else cout<<"array is full"<<endl;
}

int insert_many(int a[], int size, int mx_size, int n)
{
  while(n--)
  {
    int val;
    cout<<"enter element: "; cin>>val;
    insert(a, size, 20, val); size++;
    if(size==mx_size) break;
  }
  return size;
}
int main()
{
  int a[20], size = 0;
  for(int i=0;i<size;i++) cout<<a[i]<<" "; cout<<endl;
  insert(a, size, 20, 9); size++;
  for(int i=0;i<size;i++) cout<<a[i]<<" "; cout<<endl;
  size = insert_many(a, size, 20, 4);
  for(int i=0;i<size;i++) cout<<a[i]<<" "; cout<<endl;
  delete_heap(a, size, 20, 1); size--;
  for(int i=0;i<size;i++) cout<<a[i]<<" "; cout<<endl;
  return 0;
}

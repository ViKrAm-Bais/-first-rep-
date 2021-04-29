#include<iostream>
using namespace std;
void quicksort(int a[], int l, int r)
{
  if(r-l==1)
  {
    int tem;
    if(a[r]<a[l])
    {
      tem = a[r]; a[r] = a[l]; a[l]=tem;
    }
  }
  else if(r-l>1)
  {
    int piv = a[l], i=l, j=r, tem;
    i++;
    while(i<j)
    {
      while(a[i]<=piv) i++;
      while(a[j]>piv) j--;
      if(i<j)
      {
        tem = a[i];  a[i] = a[j];  a[j] = tem;
      }
    }
    tem = a[l];  a[l] = a[j];  a[j] = tem;
    quicksort(a, l, j-1);
    quicksort(a, j+1, r);
  }
}
int main()
{
  int a[] = { 5,4,2,6,8,1,9,3,7,10 };
  cout<<"Before"<<endl;
  for(int i=0;i<10;i++) cout<<a[i]<<" "; cout<<endl;
  quicksort(a, 0, 9);
  cout<<"After"<<endl;
  for(int i=0;i<10;i++) cout<<a[i]<<" "; cout<<endl;
  return 0;
}

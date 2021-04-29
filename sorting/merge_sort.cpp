//
//
#include<iostream>
using namespace std;
void merge(int arr[], int a, int m, int b)
{
  if((b-a)==0) return;
  else if((b-a)==2)
  {
    if(arr[a]>arr[b])
    {
      int temp = arr[a];
      arr[a] = arr[b];
      arr[b] = temp;
    }
  }
  else
  {
    int a1[m-a+1], a2[b-m];
    for(int i=0;i<m-a+1;i++) a1[i] = arr[a+i];
    for(int i=0;i<b-m;i++) a2[i] = arr[m+i+1];
    int i=0, j=0, k=a;
    while(i<m-a+1 && j<b-m)
    {
      if(a1[i] < a2[j])
      {
        arr[k] = a1[i]; i++; k++;
      }
      else
      {
        arr[k] = a2[j]; j++; k++;
      }
    }
    while(i<m-a+1)
    {
      arr[k] = a1[i]; i++; k++;
    }
    while(j<b-m)
    {
      arr[k] = a2[j]; j++; k++;
    }
  }
}
void merge_sort(int arr[], int a, int b)
{
  if(a<b)
  {
    int m = (a+b)/2;
    merge_sort(arr, a, m);
    merge_sort(arr, m+1, b);
    merge(arr, a, m, b);
  }
}
int main()
{
  int arr[] = {4,2,5,1,6,9,7};
  cout<<"Before Sorting"<<endl;
  for(int l=0;l<7;l++) cout<<arr[l]<<" "; cout<<endl;
  merge_sort(arr, 0, 6);
  cout<<"After Sorting"<<endl;
  for(int l=0;l<7;l++) cout<<arr[l]<<" "; cout<<endl;
  return 0;
}

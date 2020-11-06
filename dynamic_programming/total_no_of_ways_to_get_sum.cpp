//
//
#include<iostream>
using namespace std;
int main()
{
  int coins[] = {1, 2, 3};
  int ts;
  cout<<"Enter sum: ";
  cin>>ts;
  int a[ts+1]={0};
  for(int i=0;i<ts+1;i++)
  {
    if(a[i]%coins[0]==0) a[i]=1;
    else a[i]=0;
  }
  a[0]=1;
  for(int i=1;i<3;i++)
  {
    cout<<"Coin: "<<coins[i]<<endl;
    for(int j=1;j<ts+1;j++)
    {
      if(j>=coins[i]) a[j]=a[j]+a[(j-coins[i])];
      cout<<"a: "<<a[j]<<" ";
    }
    cout<<endl;
  }
  cout<<"Total: "<<a[ts]<<endl;
}

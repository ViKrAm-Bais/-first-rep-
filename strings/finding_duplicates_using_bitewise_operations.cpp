//
//
//
//
//
#include<iostream>
using namespace std;
int main()
{
  int i;
  char ss[]="sdfgabb";
  long int x=0,H=0;
  for(int i=0;ss[i]!='\0';i++)
  {
    x=1;
    x=x<<ss[i]-97;
    cout<<ss[i]<<", "<<(x & H) <<endl;
    if((x & H) > 0)
    {
      cout<<"ss: "<<ss[i]<<endl;
    }
    else
    {
      H = H|x;
    }
  }
  return 0;
}

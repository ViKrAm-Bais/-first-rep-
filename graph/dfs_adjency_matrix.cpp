#include <bits/stdc++.h>
using namespace std;
void print(int **a, int n, int sv, int *visited)
{
  cout<<sv<<endl;
  visited[sv] = 1;
  for(int i=0;i<n;i++)
  {
    if(i==sv) continue;
    if(a[sv][i] == 1)
    {
      if(visited[i]==1) continue;
      print(a, n, i, visited);
    }
  }
}
int main()
{
  int n, e;
  cout<<"n, e: ";
  cin>>n>>e;
  int **a = new int*[n];
  for(int i=0;i<n;i++)
  {
    a[i] = new int[n];
    for(int j=0;j<n;j++) a[i][j]=0;
  }
  int *visited = new int[n];
  for(int i=0;i<n;i++) visited[i] = 0;
  for(int i=0;i<n;i++)
  {
    int f, s;
    cout<<"f, s: ";
    cin>>f>>s;
    a[f][s] = 1;
    a[s][f] = 1;
  }
  int sv = 0;
  print(a, n, 0, visited);
  delete a, visited;
  return 0;
}

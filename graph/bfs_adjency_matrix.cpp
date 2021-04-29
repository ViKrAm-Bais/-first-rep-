#include <bits/stdc++.h>
using namespace std;
void print(int **a, int n, int *visited, queue<int> que)
{
    while(!que.empty())
    {
      int sv = que.front(); que.pop();

      cout<<"p: "<<sv<<endl;
      visited[sv] = 1;
      for(int i=0;i<n;i++)
      {
          if(i==sv) continue;
          if(a[sv][i]==1 && visited[i]==0)
          {
              visited[i] = 1;
              cout<<"pushed: "<<i<<endl;
              que.push(i);
          }
      }
    }
}


void printbfs(int **a, int n, int sv)
{
  queue<int> que;
  bool *visited = new bool[n];
  for(int i=0;i<n;i++) visited[i] = false;
  que.push(sv);
  visited[sv] = true;
  while(!que.empty())
  {
    int cur = que.front(); que.pop();
    visited[cur] = true;
    cout<<cur<<" ";
    for(int i=0;i<n;i++)
    {
      if(i==cur) continue;
      if(a[cur][i]==1 && !visited[i])
      {
        que.push(i);
        visited[i] = true;
      }
    }
  }
  cout<<endl;
}
int main() {
    int n, e;
    cin>>n>>e;
    int **a = new int*[n], *visited = new int[n];
    for(int i=0;i<n;i++)
    {
      a[i] = new int[n];
      for(int j=0;j<n;j++) a[i][j]=0;
    }
    for(int i=0;i<n;i++) visited[i] = 0;
    for(int i=0;i<e;i++)
    {
      int f, s;
      //cout<<"f, s: ";
      cin>>f>>s;
      a[f][s] = 1;
      a[s][f] = 1;
    }
    queue<int> que;
    que.push(0);
    //print(a, n, visited, que); //while(!que.empty())
    printbfs(a, n, 0);

    for(int i=0;i<n;i++) delete [] a[i];
    delete  [] a;
    delete [] visited;
}

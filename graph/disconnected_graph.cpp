#include <bits/stdc++.h>
using namespace std;

void bfs(int **a, int n)
{
  bool *visited = new bool[n];
  for(int i=0;i<n;i++) visited[i] = false;
  for(int i=0;i<n;i++)
  {
    if(visited[i]==false)
    {
      int sv = i;
      queue<int> que;
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
  }
  delete [] visited;
}

void printdfs(int **a, int n, int sv, bool *visited)
{
  cout<<sv<<" ";
  visited[sv] = true;
  for(int i=0;i<n;i++)
  {
    if(i==sv) continue;
    if(a[sv][i]==1 && !visited[i])
    {
      printdfs(a, n, i, visited);
    }
  }
}

void dfs(int **a, int n)
{
  bool *visited = new bool[n];
  for(int i=0;i<n;i++) visited[i] = false;
  for(int i=0;i<n;i++)
  {
    if(visited[i]==false)
    {
      printdfs(a, n, i, visited);
      cout<<endl;
    }
  }
}

bool has_path_bfs(int **a, int n, int s, int e )
{
  queue<int> que;
  bool *visited = new bool[n];
  for(int i=0;i<n;i++) visited[i] = false;
  que.push(s);
  visited[s] = true;
  while(!que.empty())
  {
    int cur = que.front(); que.pop();
    visited[cur] = true;
    cout<<"ele: "<<cur<<endl;
    for(int i=0;i<n;i++)
    {
      if(i==cur) continue;
      if(a[cur][e] == 1)
      {
        cout<<"e: "<<cur<< " "<<e<<" ";
        return true;
      }
      else if(a[cur][i]==1 && !visited[i])
      {
        que.push(i);
        visited[i] = true;
        cout<<"e: "<<i<<" ";
      }
    }
  }
  cout<<endl;
  delete [] visited;
  return false;
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
    for(int i=0;i<e;i++)
    {
      int f, s;
      cout<<"f, s: ";
      cin>>f>>s;
      a[f][s] = 1;
      a[s][f] = 1;
    }
    cout<<"bfs: "<<endl;
    bfs(a, n);
    cout<<"dfs: "<<endl;
    dfs(a, n);
    int start_pt, end_pt;
    cout<<"s, e: "; cin>>start_pt>>end_pt;
    if(has_path_bfs(a, n, start_pt, end_pt)) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    for(int i=0;i<n;i++) delete [] a[i];
    delete  [] a;
}

#include <bits/stdc++.h>
using namespace std;

bool dfs(int **a, int n, int s, int e, bool *visited)
{
  if(s==e) return true;
  visited[s] = true;
  for(int i=0;i<n;i++)
  {
    if(a[s][e]==1)
    {
      cout<<e<<" ";
      return true;
    }
    if(a[s][i] == 1 && !visited[i])
    {
      visited[i] = true;
      bool res = dfs(a, n, i, e, visited);
      if(res == true)
      {
        cout<<i<<" ";
        return true;
      }
    }
  }
  return false;
}

void get_path_dfs(int **a, int n, int s, int e)
{
  bool *visited = new bool[n];
  for(int i=0;i<n;i++) visited[i] = false;
  bool res = dfs(a, n, s, e, visited);
  if(res) cout<<s<<endl;
  else cout<<"no path"<<endl;
  delete [] visited;
}


map<int, int> get_path_bfs(int **a, int n, int s, int e)
{
  queue<int> que;
  map<int, int> mm;
  que.push(s);
  bool *visited = new bool[n];
  for(int i=0;i<n;i++) visited[i] = false;
  visited[s] = true;
  while(!que.empty())
  {
    int cur = que.front(); que.pop();
    for(int i=0;i<n;i++)
    {
      if(cur == i) continue;
      if(a[cur][e] == 1 && !visited[i])
      {
        mm[e] = cur;
        visited[e] = 1;
        return mm;
      }
      if(a[cur][i] == 1 && !visited[i])
      {
        visited[i] = true;
        que.push(i);
        mm[i] = cur;
      }
    }
  }
  return mm;
}

int main()
{
    int n, e;
    cin>>n>>e;
    int **a = new int*[n];
    for(int i=0;i<n;i++)
    {
      a[i] = new int[n];
      for(int j=0;j<n;j++) a[i][j]=0;
    }
    for(int i=0;i<e;i++)
    {
      int f, s;
      cin>>f>>s;
      a[f][s] = 1;
      a[s][f] = 1;
    }
    int start_pt, end_pt;
    cin>>start_pt>>end_pt;
    get_path_dfs(a, n, start_pt, end_pt);
    cout<<endl;
    map<int, int> mm = get_path_bfs(a, n, start_pt, end_pt);
    while(mm.find(mm[end_pt])!=mm.end())
    {
      cout<<end_pt<<" "<<mm[end_pt]<<" ";
      end_pt = mm[end_pt];
    }
    cout<<endl;
    for(int i=0;i<n;i++) delete [] a[i];
    delete  [] a;
}

#include <bits/stdc++.h>
using namespace std;

// void printbfs(int **a, int n, int sv)
// {
//   queue<int> que;
//   bool *visited = new bool[n];
//   for(int i=0;i<n;i++) visited[i] = false;
//   que.push(sv);
//   visited[sv] = true;
//   while(!que.empty())
//   {
//     int cur = que.front(); que.pop();
//     visited[cur] = true;
//     cout<<cur<<" ";
//     for(int i=0;i<n;i++)
//     {
//       if(i==cur) continue;
//       if(a[cur][i]==1 && !visited[i])
//       {
//         que.push(i);
//         visited[i] = true;
//       }
//     }
//   }
//   cout<<endl;
// }

bool has_path_bfs(int **a, int n, int s, int e, bool *visited)
{
  queue<int> que;
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
  return false;
}


bool has_path_dfs(int **a, int n, int s, int e, bool *visited)
{
  cout<<"ele: "<<s<<endl;
  visited[s] = true;
  for(int i=0;i<n;i++)
  {
    if(a[s][e] == 1) return true;
    if(s == i) continue;
    else if(a[s][i]==1 && visited[i] == false)
    {
      visited[i] = true;
      cout<<"p: "<<s<<endl;
      bool res = has_path_dfs(a, n, i, e, visited);
      if(res) return true;
    }
  }
  return false;
}
int main() {
    int n, e;
    cin>>n>>e;
    int **a = new int*[n];
    bool *visited = new bool[n];
    for(int i=0;i<n;i++)
    {
      visited[i] = false;
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
    int start_pt, end_pt;

    cout<<"s, e: "; cin>>start_pt>>end_pt;
    //if(has_path_dfs(a, n, start_pt, end_pt, visited)) cout<<"yes"<<endl;
    //else cout<<"no"<<endl;
    if(has_path_bfs(a, n, start_pt, end_pt, visited)) cout<<"yes"<<endl;
    else cout<<"no"<<endl;
    for(int i=0;i<n;i++) delete [] a[i];
    delete  [] a;
}

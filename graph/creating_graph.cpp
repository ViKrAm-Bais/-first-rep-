#include <bits/stdc++.h>
using namespace std;

void creategraph()
{
  unordered_map<int,vector<int>> gr;
  queue<int> que;
  int n;
  cout<<"enter vertice: "; cin>>n;
  que.push(n);
  int cur = 1, k=1;
  while(!que.empty())
  {
    int cur=que.front();
    que.pop();

    while(1)
    {
      cout<<"vertices join with "<<cur<<": ";
      cin>>k;
      if(k==-1) break;
      if(gr.find(k)==gr.end())
      {
        gr[cur].push_back(k);
        que.push(k);
      }
      else gr[cur].push_back(k);
    }
  }

  for(auto itr:gr)
  {
    cout<<itr.first<<": ";
    for(int i=0;i<itr.second.size(); i++)
    {
      cout<<itr.second[i]<<" ";
    }
    cout<<endl;
  }
}

int main()
{
  creategraph();
  return 0;
}

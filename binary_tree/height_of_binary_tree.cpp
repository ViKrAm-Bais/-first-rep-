#include<iostream>
#include<queue>
using namespace std;
struct node
{
  int data;
  node *rc;
  node *lc;
};
node* createtree(node* root)
{
  queue<node*> qq;
  node *t;
  t = root;
  int i=0, k[] = {4, 2, 6, 1, -1, 3, -1, -1, -1, -1, 4, -1, -1};
  t->data = k[i];
  i++;
  t->lc = NULL;
  t->rc = NULL;
  qq.push(root);
  while(!qq.empty())
  {
    t = qq.front();
    qq.pop();
    if(k[i] != -1)
    {
      node *nn = new node;
      nn->data = k[i];
      nn->lc = NULL;
      nn->rc = NULL;
      t->lc = nn;
      qq.push(nn);
    }
    i++;
    if(k[i] != -1)
    {
      node *nn = new node;
      nn->data = k[i];
      nn->lc = NULL;
      nn->rc = NULL;
      t->rc = nn;
      qq.push(nn);
    }
    i++;
  }
  return root;
}
void preordert(node *root)
{
  if(root == NULL) return;
  cout<<root->data<<" ";
  preordert(root->lc);
  preordert(root->rc);
}
int total_nodes(node *root)
{
  int x, y;
  if(root != NULL)
  {
    x = total_nodes(root->lc);
    y = total_nodes(root->rc);
    return x+y+1;
  }
  return 0;
}
int total_leafs(node *root)
{
  int x, y;
  if(root != NULL)
  {
    x = total_leafs(root->lc);
    y = total_leafs(root->rc);
    if(root->lc == NULL && root->rc ==NULL) return x+y+1;
    else return x+y;
  }
  return 0;
}
int height(node *root)
{
  int x, y;
  if(root != NULL)
  {
    x = height(root->lc);
    y = height(root->rc);
    if(x>y) return x+1;
    else return y+1;
  }
  return -1;
}
int main()
{
  node *root = new node;
  root = createtree(root);
  cout<<"Printing Tree Preorder"<<endl;
  preordert(root);
  cout<<endl;
  cout<<"Total Nodes: "<<total_nodes(root)<<endl;
  cout<<"Total leafs: "<<total_leafs(root)<<endl;
  cout<<"Height: "<<height(root);
  return 0;
}

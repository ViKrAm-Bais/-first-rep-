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
  int k;
  cout<<"Enter value for root: ";
  cin>>k;
  t->data = k;
  t->lc = NULL;
  t->rc = NULL;
  qq.push(root);
  while(!qq.empty())
  {
    t = qq.front();
    qq.pop();
    cout<<"Enter value l child of "<<t->data<<": ";
    cin>>k;
    if(k != -1)
    {
      node *nn = new node;
      nn->data = k;
      nn->lc = NULL;
      nn->rc = NULL;
      t->lc = nn;
      qq.push(nn);
    }
    cout<<"Enter value r child of "<<t->data<<": ";
    cin>>k;
    if(k != -1)
    {
      node *nn = new node;
      nn->data = k;
      nn->lc = NULL;
      nn->rc = NULL;
      t->rc = nn;
      qq.push(nn);
    }
  }
  return root;
}
void preorder(node *root)
{
  if(root == NULL) return;
  cout<<root->data<<" ";
  preorder(root->lc);
  preorder(root->rc);
}
int main()
{
  node *root;
  root = new node;
  cout<<"Creating Binary Tree"<<endl;
  root = createtree(root);
  cout<<"Printing Tree Preorder"<<endl;
  preorder(root);
  return 0;
}

/*               Tree

                   4          //root
                 /  \
               2    6
             /     /
           1     3
                  \
                   4
*/
#include<iostream>
#include<stack>
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
void preorder(node *root)
{
  stack<node*> ss;
  node *t = root;
  while(t!=NULL || !ss.empty())
  {
    if(t!=NULL)
    {
      cout<<t->data<<" ";
      ss.push(t);
      t = t->lc;
    }
    else
    {
      t = ss.top();
      t = t->rc;
      ss.pop();
    }
  }
}
void inorder(node *root)
{
  stack<node*> ss;
  node *t = root;
  while(t!=NULL || !ss.empty())
  {
    if(t!=NULL)
    {
      ss.push(t);
      t = t->lc;
    }
    else
    {
      t = ss.top();
      ss.pop();
      cout<<t->data<<" ";
      t = t->rc;
    }
  }
}
void postorder(node *root)
{
  stack<node*> ss;
  stack<node*> s1;
  node *t = root;
  while(t!=NULL || !ss.empty())
  {
    if(t!=NULL)
    {
      ss.push(t);
      t = t->lc;
    }
    else
    {
      t = ss.top();
      ss.pop();
      ss.push(t);
      t = t->rc;
      cout<<t->data<<" ";
    }

  }
}
int main()
{
  node *root;
  root = new node;
  root = createtree(root);
  cout<<"Preorder Traversal"<<endl;
  preorder(root);
  cout<<endl;
  cout<<"Inorder Traversal"<<endl;
  inorder(root);
  cout<<endl;
  cout<<"Postorder Traversal"<<endl;
  postorder(root);
  cout<<endl;
  return 0;
}

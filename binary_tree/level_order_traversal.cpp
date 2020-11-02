//
//
//
//
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
void levelorder(node *root)
{
  queue<node*> q1;
  node *p;
  q1.push(root);
  while(!q1.empty())
  {
    p = q1.front();
    q1.pop();
    if(p->lc!=NULL) q1.push(p->lc);
    if(p->rc!=NULL) q1.push(p->rc);
    cout<<p->data<<" ";
  }
}
int main()
{
  node *root;
  root = new node;
  root = createtree(root);
  cout<<"Level order Traversal"<<endl;
  levelorder(root);
  cout<<endl;
  return 0;
}

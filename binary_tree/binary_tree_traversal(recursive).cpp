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
void preorder(node *root)
{
  if(root == NULL) return;
  cout<<root->data<<" ";
  preorder(root->lc);
  preorder(root->rc);
}
void postorder(node *root)
{
  if(root == NULL) return;
  postorder(root->lc);
  postorder(root->rc);
  cout<<root->data<<" ";
}
void inorder(node *root)
{
  if(root == NULL) return;
  inorder(root->lc);
  cout<<root->data<<" ";
  inorder(root->rc);
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

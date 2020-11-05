//binary search tree

#include<iostream>
using namespace std;
struct node
{
  int data;
  node *rc;
  node *lc;
};
node *createTree(int length)
{
  node *temp, *p;
  node *root = new node;
  int a;
  a = rand()%50 + 1;
  root->data = a;
  root->rc = NULL;
  root->lc = NULL;
  temp = root;
  for(int i=1;i<length;i++)
  {
    temp = root;
    node *nn = new node;
    a = rand()%50 + 1;
    nn->data = a;
    nn->rc = NULL;
    nn->lc = NULL;
    while(temp!=NULL || root==NULL)
    {
      p = temp;
      if(temp->data < a) temp = temp->rc;
      else if(temp->data >a) temp = temp->lc;
      else break;
    }
    if(p->data < a) p->rc = nn;
    else if(p->data > a) p->lc = nn;
  }
  return root;
}
int height(node *root)
{
  int x,y;
  if(root == NULL)
  {
    return -1;
  }
  else
  {
    x = height(root->lc);
    y = height(root->rc);
  }
  if(x>y) return x+1;
  else return y+1;
}
node *lsu(node *root)
{
  node *t = root;
  while(t!=NULL)
  {
    root = t;
    t = t->lc;
  }
  return root;
}
node *rsu(node *root)
{
  node *t = root;
  while(t!=NULL)
  {
    root = t;
    t = t->rc;
  }
  return root;
}
node *main_root;
node *deleteTree(node* root, int val)
{
  if(root == NULL) return NULL;
  if(root->lc == NULL && root->rc == NULL)
  {
    if(root == main_root)
    {
      root = NULL;
    }
    return NULL;
  }
  if(root->data > val) root = deleteTree(root->lc, val);
  else if(root->data < val) root = deleteTree(root->rc, val);
  else
  {
    node *q;
    if(height(root->rc) > height(root->lc))
    {
      q = lsu(root->rc);
      root->data = q->data;
      root->rc = deleteTree(root->rc, q->data);
    }
    else
    {
      q = rsu(root->lc);
      root->data = q->data;
      root->lc = deleteTree(root->lc, q->data);
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
  root = createTree(5);
  cout<<"Tree preorder"<<endl;
  preorder(root);
  main_root = root;
  cout<<endl;
  int k;
  cout<<endl<<"Enter Node Value to Delete: ";
  cin>>k;
  root = deleteTree(root, k);
  cout<<"Tree preorder"<<endl;
  preorder(root);
  cout<<endl;
  return 0;
}

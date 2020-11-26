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
  cout<<"Enter root: ";
  cin>>a;
  root->data = a;
  root->rc = NULL;
  root->lc = NULL;
  temp = root;
  for(int i=1;i<length;i++)
  {
    temp = root;
    cout<<"Enter value: ";
    cin>>a;
    node *nn = new node;
    nn->data = a;
    nn->rc = NULL;
    nn->lc = NULL;
    while(temp!=NULL)
    {
      p = temp;
      if(temp->data < a) temp = temp->rc;
      else if(temp->data >a) temp = temp->lc;
      else break;
    }
    if(p->data < a) p->rc = nn;
    else if(p->data > a) p->lc = nn;
  }
  cout<<"Done!"<<endl;
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
int main()
{
  node *root;
  root = createTree(5);
  preorder(root);
  cout<<endl;
  postorder(root);
  return 0;
}

#include<iostream>
using namespace std;
struct node
{
  int data;
  node *rc;
  node *lc;
};
node *insert_node(node *root, int a)
{
  node *nn = new node;
  nn->data = a;
  nn->rc = NULL;
  nn->lc = NULL;
  if(root==NULL) root = nn;
  node *temp, *p;
  temp = root;
  while(temp!=NULL)
  {
    p = temp;
    if(temp->data < a) temp = temp->rc;
    else if(temp->data >a) temp = temp->lc;
    else break;
  }
  if(p->data < a) p->rc = nn;
  else if(p->data > a) p->lc = nn;
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
  node *root=NULL;
  int k, a;
  cout<<"Enter Numbers of Node: ";
  cin>>k;
  cout<<"Tree Elements"<<endl;
  while(k--)
  {
    a = rand()%10;
    cout<<a<<" ";
    root = insert_node(root, a);
  }
  cout<<endl<<"Preorder"<<endl;
  preorder(root);
  return 0;
}

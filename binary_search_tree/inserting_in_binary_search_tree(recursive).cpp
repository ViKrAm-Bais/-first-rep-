#include<iostream>
using namespace std;
struct node
{
  int data;
  node *rc;
  node *lc;
};
node *insert_node(node *root, int data)
{
  node *temp;
  if(root==NULL)
  {
    temp = new node;
    temp->data = data;
    temp->lc = NULL;
    temp->rc = NULL;
    return temp;
  }
  if(root->data < data) root->rc = insert_node(root->rc, data);
  else if(root->data > data) root->lc = insert_node(root->lc, data);
  else return root;
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
    srand(k);
    root = insert_node(root, a);
  }
  cout<<endl<<"Preorder"<<endl;
  preorder(root);
  return 0;
}

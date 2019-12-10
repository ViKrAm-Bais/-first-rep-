#include <iostream>
#include <iomanip>
#include <limits>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
class ll
{
    int a;
    Node* head;
    Node * t;
public:
    void ad(int n)
    {
        for(int i=1;i<=n;i++)
        {
            cout<<"enter no : ";
            cin>>a;
            if(i==1)
            {
                head->data=a;
                head->next=NULL;
                t=head;
            }
            else
            {
               Node* n=new Node;
               n->data=a;
               n->next=NULL;
               t->next=n;
               t=n;
            }
        }
    }
    void p()
    {
        t=head;
        do
        {
            cout<<t->data<<endl;
            t=t->next;
        }while(t->next!=NULL);
    }
};
int main()
{
    ll l1;
    l1.ad(5);
    cout<<",............................."<<endl;
    l1.p();
    return 0;
}

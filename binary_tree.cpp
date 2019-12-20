#include<iostream>
using namespace std;
struct node
{
   struct node *left;
   int info;
  struct node *right;
};
typedef struct node* nnode;
nnode root=NULL;
nnode create();
void insert(nnode,nnode);
void inorder(nnode);
int main()
{
  int ch;
  nnode t;
  do {
    cout<<"Enter choice:"<<'\n';
    cout<<"1.Insertion"<<'\n';
    cout<<"2.Inorder traversal"<<'\n';
    cout<<"3.exit"<<'\n';
    cin>>ch;
    switch(ch)
    {
      case 1:t=create();
             if(root==NULL)
             root=t;
             else
             insert(root,t);
             break;
      case 2:inorder(root);
             break;
      case 3:exit(1);
      default:cout<<"wrong choice"<<'\n';
    }
  }while(1);
}
nnode create()
{
  struct node* t=new struct node();
  if(t==NULL)
  cout<<"overfloaw";
  t->left=NULL;
  t->right=NULL;
  cout<<"Enter data"<<'\n';
  cin>>t->info;
  return t;
}
void insert(nnode r,nnode t)
{
  char c;
  cout<<"where want to add(left/right)"<<'\n';
  cin>>c;
  if(c=='l' || c=='L')
  {
    if(r->left==NULL)
    r->left=t;
    else
    insert(r->left,t);
  }
  if(c=='r' || c=='R')
  {
    if(r->right==NULL)
    r->right=t;
    else
    insert(r->right,t);
  }
}
void inorder(nnode r)
{
  if(r==NULL)
  return;
  inorder(r->left);
  cout<<r->info<<" ";
  inorder(r->right);
}

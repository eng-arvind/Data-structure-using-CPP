#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
  Node* left;
  int data;
  Node* right;
};
Node* create()
{
  Node* newnode=new Node();
  if(newnode==NULL)
  cout<<"overflow\n";
  newnode->left=NULL;
  newnode->right=NULL;
  cout<<"Enter data\n";
  cin>>newnode->data;
  return newnode;
}
void insert(Node* r,Node* t)
{
  char ch;
  cout<<"where you want to insert(left/right)\n";
  cin>>ch;
  if(ch=='l' || ch=='L')
{
  if(r->left==NULL)
  r->left=t;
  else
  insert(r->left,t);
}
if(ch=='r' || ch=='R')
{
if(r->right==NULL)
r->right=t;
else
insert(r->right,t);
}
}
void inorder(Node* r)
{
  if(r==NULL)
  return;
  inorder(r->left);
  cout<<r->data<<" ";
  inorder(r->right);
  cout<<endl;
}
Node* root=NULL;
int main()
{
  int ch;
  Node* t;
  do{
  cout<<"1.Insertion\n"<<"2.Inorder\n"<<"3.exit\n";
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
    default:cout<<"Wrong choice\n";
  }
}while(1);
}

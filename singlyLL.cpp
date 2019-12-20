#include<iostream>
using namespace std;
struct Node
{
	int data;
	 Node* next;
};
Node* head=NULL;
Node* tail=NULL;
void insert(int value)
{
	Node *temp=new Node;
	temp->data=value;
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
		tail=temp;
	}
	else
	{
		tail->next=temp;
		tail=temp;
	}

}
void display()
{
	Node* temp=head;
   while(temp!=NULL)
   {
   	cout<<temp->data<<" ";
   	temp=temp->next;
   }
}
int main()
{
   insert(10);
   insert(20);
   insert(30);
   display();

	return 0;
}

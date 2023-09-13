#include<iostream>
using namespace std ;
class node
{
    public:
    int data;
    node* adress;
    //constructor
    node(int newdata)
    {
        this->data = newdata;
        this->adress = NULL;
    }

};
void insertathead(node* &head,int newdata2)
{
    node* temp=new node(newdata2);
    temp->adress=head;
    head=temp;
}
//traversing a linked list
void print(node* &head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp= temp->adress;
    }
    cout<<endl;
}
int main()
{
    //creating a node
 node* node1 = new node(10);
 cout<<node1->data<<endl<<node1->adress<<endl;
 
 node* head=node1;

 insertathead(head,12);
 print(head);

 
 return 0;
}
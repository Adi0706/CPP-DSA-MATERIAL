#include<iostream>
using namespace std;

class Node
{
    public:
    int data ;
    Node* next;
    
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insertathead(Node* &head,int d)
{
    Node* temp = new Node(d);
    temp->next = head;
    head=temp;
}
void print(Node* head)
{
    if(head == NULL) return ;
    cout<<head->data<<" ";
    print(head->next);
}


int main()
{
    Node* node1 = new Node(10);
    cout<<node1->data<<":"<<node1->next<<endl;

    Node* head=node1;
    print(head);
    cout<<"after inserting a node at head of the linked list we get"<<endl;

    insertathead(head,12);
    print(head);
    return 0;
}
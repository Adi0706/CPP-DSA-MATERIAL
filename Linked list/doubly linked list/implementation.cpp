#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node* prev;

    node(int d)
    {
        this->data= d;
        this->prev=NULL;
        this->next = NULL;

    }
    ~node()
{
    int value = this->data;
    if(this->next !=NULL)
    {
        delete next;
        this->next = NULL;
    }
    cout<<"memory is free "<<value<<endl;
}
};

void insertathead(node* &head,node* &tail,int d1)
{
    if(head == NULL)
    {
        node* temp = new node(d1);
        head =temp;
        tail = temp;
    }
    node* temp = new node(d1);
    temp->next = head;
    head-> prev =temp ;
    head =temp;

}
void insertattail(node* &tail,node* &head,int d2)
{
    if(tail == NULL)
    {
        node* temp = new node(d2);
        tail = temp;
        head = temp ;
    }
    node* temp = new node(d2);
    tail->next = temp;
    temp ->prev = tail;
    tail = temp;
}
void insertatposition(node* &head,node* &tail,int position,int d3)
{
    if(position == 1)
    {
        insertathead(head,tail,22);
        return ;
    }
    node* temp = head;
    int count = 1;
    while(count<(position -1 ))
    {
        temp = temp->next;
        count ++ ;
    }
    if(temp->next == NULL)
    {
        insertattail(tail,head,d3);
    }
    node* nodetoinsert = new node(d3);
    nodetoinsert->next = temp->next;
    temp->next->prev = nodetoinsert;
    temp ->next = nodetoinsert;
    nodetoinsert->prev = temp;
}
int lengthoflinkedlist(node* head)
{
    node* temp =head;
    int len=0;
    while(temp != NULL)
    {
        len++;
        temp= temp->next;
    }
    return len;
}
void deletenode(node* head, int position)
{
    if(position == 1)
    {
        node* temp = head ;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp ;
    }
    else{
       node* current = head ;
       node* prev = NULL; 

    int count = 1;
    while(count<position)
    {
        prev = current;
        current=current->next;
        count ++;
    }
    current->next = NULL;
    prev->next = current->next;
    current->next = NULL;

    delete current ; 
    
}
}
void print ( node* head)
{
    node* temp = head;
    while (temp !=NULL)
    {
        cout<< temp -> data<<" ";
        temp = temp->next;
    }
    cout << endl;
}


//MAIN STARTS HERE...

int main()
{
    node* node1 = new node(10);
    node* head = node1;
    node* tail = node1;
    print(head);
   
     //insertathead(head,tail,7);
    //print(head);
    
    insertattail(tail,head,15);
    print(head);

    insertatposition(head,tail,2,72);
    print(head);

    deletenode(head,2);
    print(head);

    cout <<"length of the linked list is "<<lengthoflinkedlist(head);
   
    
    return 0;
}
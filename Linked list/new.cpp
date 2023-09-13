#include<iostream>
using namespace std;
 class node
 {
    public:
    int data;
    node* next;//next is for storing address of the previous data

    node(int data)//constructor for inititializing nodes
    {
        this->data=data;
        this->next=NULL;//since the first node wont have any address of the previous nodes
    }
    ~node()
    {
        int value = this->data;
        if(this->next!=NULL)
        {
            delete next;
            this->next=NULL;
        }
        cout<<"after removing the memory "<<value<<endl;
    }
 };
void insertathead(node* &head,int d)//we are doing &head cuz hame pehle wale node ka head new node ke head pr point krna h therefore head ka copy n
//na banjaye toh hamne address se denote kiya hai.
{
   node* temp= new node(d);//making a new node everytime inserting at head.
   temp->next=head;
   head=temp;
}
/*void print(node* head)//we dont wanna copy the node address as there will be new values for every node
{
   if(head == NULL) return;
   cout<<head->data<<" ";
   print(head->next);
}*/
void print(node* &head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<":";
        temp=temp->next;
        
    }
    cout<<endl;
}
void insertattail(node* tail,int d1)
{
    node* temp = new node(d1);
    tail->next =temp;
    tail= temp->next;
}
void insertatmiddle(node* head,int position,int d2)
{//if the position is 1st then insert at head only
    if(position == 1)
    {
        insertathead(head,d2);
        return;
    }
    node* temp = head;
    int count=1;//counter at first node
    while(count<(position-1))//to insert at a certain position counter always less than positon-1
    {
        temp = temp->next;
        count++;
    }
    node* nodetoinsert = new node(d2);
    nodetoinsert->next=temp->next;
    temp->next = nodetoinsert;
}
void deletenode(int position,node* head)
{
if(position==1)
{
    node* temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
}
else
{
    node* current = head;//since initially head aur prev pointer 1st node pr hai 
    //unhe loop ke through age ley jare hai
    
    node* prev = NULL;
    int count =1 ;
    while(count<position)
    {
        current=current->next;
        prev=current;
        count++;

    }
    prev->next=current->next;
    current->next=NULL;
    delete current;
}
}
 int main()
 {
    node* node1 = new node(10);
    cout<<node1->data<<":"<<node1->next<<endl;
   
    node* head=node1;//pointing the head at first node.
    node* tail =node1;//for first node tail and head at the same point.

    
     insertathead(head,20);
     print(head);

    insertattail(tail,30);
    print(tail);

insertatmiddle(head,2,50);
print(head);

deletenode(2,head);
print(head);

    return 0;
 }
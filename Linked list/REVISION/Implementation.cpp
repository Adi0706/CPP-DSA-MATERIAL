#include<iostream>

using namespace std;
// IMPLEMENTATION OF lINKED LIST USING CLASS

class linkedlist{
    public:
    //NODE 
    int data ;
    linkedlist *next ; 

    //Node declaration 
    linkedlist(int newValue){
        this->data = newValue ; 
        this->next = NULL ; 
    }
    
    ~linkedlist(){
        int value = this->data ; 
        if(this->next!=NULL){
            delete next ; 
            next = NULL ; 
        }
    }

};//inserting at head
 void InsertatHead(linkedlist *&head, int data){
        linkedlist *temp = new linkedlist(data);
        temp->next = head ; 
        head = temp; 
    }
//printing the current linked list

void displayLL ( linkedlist* head){
    while(head != NULL ){
        cout<<head->data<<"->";
        head = head->next; 
    }
    
}
//inserting at tail
void InsertatTail(linkedlist *&tail,int data){
    linkedlist * temp = new linkedlist(data) ; 
    tail->next = temp ; 
    tail = temp ; 
}
//insert at middle of the linked list

void InsertatMiddle(linkedlist *head,int position,int data){
    //the position is at 1st node 
    if(position == 1 ){
        InsertatHead(head,data) ; 
        return ; 
    }
    linkedlist *temp = head ; 
    int count =1 ; 
    while(count <(position-1)){
        temp = temp->next ; 
        count ++ ; 
    }

    linkedlist *nodetoinsert = new linkedlist(data) ; 
    nodetoinsert->next = temp->next ; 
    temp->next = nodetoinsert ; 

}

void deleteNode(int position ,linkedlist *head){
    //delete the first node 
    if(position == 1){
        linkedlist *temp = head ; 
        head = head->next ; 
        temp->next = NULL ; 
        delete temp ; 
    }
    //middle and last node delete 
    linkedlist* current = head ; 
    linkedlist* prev = NULL ; 
    int count = 1 ; 

    while(count < position){
        prev = current ; 
        current = current->next ;
        count ++ ; 
    }
    prev->next = current->next ; 
    current->next = NULL ; 
    delete current ; 
}

void randomposition(int position,linkedlist *head,int data){
    linkedlist *newnode = new linkedlist(data) ; 
    if (position < 0){
        cout<<"INVALID POSITION"<<endl;
    }
    if(head == NULL){
        cout<<"list is empty"<<endl;
    }
    if(position == 1){
        InsertatHead(head,data) ; 
        return ; 
    }
    else{
        //inserting at a random position
        linkedlist *current = head ; 
        while(current->next !=NULL && --position){
            current = current->next ; 
        }
        if(position== 0 ){ // we have reached the desired postion to insert the data {
            newnode->next = current->next ; 
            current->next = newnode ; 
        }
        else{
            cout<<"invalid position"<<endl; 
        }
    }
}

int main()
{
    linkedlist* node1 = new linkedlist(9) ; 

    linkedlist* head = node1 ;  
    linkedlist *tail= node1 ; 
    InsertatHead(head,8);
    displayLL(head);
   InsertatTail(tail,10);
   displayLL(tail);
return 0;
}
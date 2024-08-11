//starting point of LOOP
//LC-142
#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node*next;

    Node(){
        // cout<<"default constructor"<<endl;
        this->next=NULL;
    }
    Node(int data){
        // cout<<"parameterized constructor"<<endl;
        this->data=data;
        this->next=NULL;
    }
};

//PRINTING LINK LIST
void printLL(Node*head){
    Node*temp=head;
    while (temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }   
}

void InsertAtHead(Node* &head,Node* &tail,int data){

    if(head==NULL){
//empty LL
        //create new node
        Node*newNode=new Node(data);
        head=newNode;
        tail=newNode;
    }
    else{
//non empty LL
    //creation of new node
    Node*newNode=new Node(data);
    //attach new node to head node
    newNode->next=head;
    //move head to next to newNode
    head=newNode;
    }
}

Node*loopp(Node*head){
    Node*slow=head;
    Node*fast=head;

    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
    
        if(slow==fast){
            break;
        }
    }
    slow=head;

    while(fast!=slow){
        slow=slow->next;
        fast=fast->next;
    }
    return slow;
}


int main(){
    Node*head=NULL;
    Node*tail=NULL;

    InsertAtHead(head,tail,20);
    InsertAtHead(head,tail,50);
    InsertAtHead(head,tail,60);
    InsertAtHead(head,tail,90);
    InsertAtHead(head,tail,77);

    tail->next=head->next->next;

    // printLL(head);
    
    cout<<loopp(head)->data;

}
// reverse a LL
// LL-206

#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node*next;

    Node(){
        this->next=NULL;
    }

    Node(int data){
        this->data=data;
        this->next=NULL;

    }
};

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

// void reverseLL(Node* &head,Node* &tail){
//     Node*prev=NULL;
//     Node*curr=head;

//     while(curr!=NULL){
//         Node*next=curr->next;
//         curr->next=prev;
//         prev=curr;
//         curr=next;
//     }
//     head=prev;
// }

Node*reverseLL(Node* &head,Node* &tail){
    if(curr==NULL){
        return prev;
    }

    Node*prev=NULL;
    Node*curr=head;
    Node*nextN=curr->next;

    curr->next=prev;
    prev=curr;
    curr=nextN;

    reverseLL(head,tail);
}


int main(){
Node*head=NULL;
Node*tail=NULL;

InsertAtHead(head,tail,1);
InsertAtHead(head,tail,2);
InsertAtHead(head,tail,3);
InsertAtHead(head,tail,4);
InsertAtHead(head,tail,5);

printLL(head);
cout<<" ";

reverseLL(head,tail);

printLL(head);


}
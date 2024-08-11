//LC-83

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
    ~Node(){

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

void removeD(Node*head){

    if(head==NULL){
        return;
    }
    if(head->next==NULL){
        return;
    }
    Node*temp=head;
    while(temp!=NULL){
        if(temp->next!=NULL && temp->data==temp->next->data){
            Node*nextNode=temp->next;
            temp->next=nextNode->next;
            nextNode->next=NULL;
            delete nextNode;
        }else{
            temp=temp->next;
        }
    }
}

int main(){
    Node*head=NULL;
    Node*tail=NULL;

    InsertAtHead(head,tail,4);
    InsertAtHead(head,tail,3);
    InsertAtHead(head,tail,3);
    InsertAtHead(head,tail,2);
    InsertAtHead(head,tail,2);
    InsertAtHead(head,tail,1);

    printLL(head);
    cout<<endl;

    removeD(head);
    printLL(head);

}
//add 1 to LL
// 1->3->8 + 1 = 1->3->9

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

Node*reverse(Node*&head){
    Node*prev=NULL;
    Node*curr=head;

    while(curr!=NULL){
        Node*next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

void addOne(Node*&head){

    //reverse

    head=reverse(head);

    //add 1

    int carry=1;
    Node*temp=head;
    while(temp->next!=NULL){
        int totalSum=temp->data + carry;
        int digit= totalSum % 10;
        carry= totalSum/10;

        temp->data=digit;
        temp=temp->next;
    }
        // process last node
    if (carry!=0){
        int totalSum=temp->data + carry;
        int digit= totalSum % 10;
        carry= totalSum/10; 

        temp->data=digit;
        
        if(carry!=0){
            Node*newNode = new Node(carry);
            temp->next=newNode;
        }
    } 

    //reverse

    head=reverse(head);

}

int main(){
    Node*head=NULL;
    Node*tail=NULL;

    InsertAtHead(head,tail,9);
    InsertAtHead(head,tail,9);
    InsertAtHead(head,tail,1);
    // InsertAtHead(head,tail,60);
    // InsertAtHead(head,tail,90);

    printLL(head);

    addOne(head);
    printLL(head);
    
}
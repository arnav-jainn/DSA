//LC-876
//find middle element of a LL


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
int length(Node*head){
    Node*temp=head;
    int len=0;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
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

// Node* middle(Node* &head){
//     int n=length();
//     int position=n/2+1;
//     int curPos=1;
//     Node*temp=head;
//     while(curPos!=position){
//         curPos++;
//         temp=temp->next;
//     }
//     return temp;
// }



// Node middlee(Node* &head){
//     Node*fast=head;
//     Node*slow=head;

//     while(fast!=NULL){
//         fast=fast->next;
//         if(fast!=NULL){
//             fast=fast->next;
//             slow=slow->next;
//         }
//     }
//     return slow;
// }

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

// cout<<middlee(head);

}
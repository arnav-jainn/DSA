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
    ~Node(){
        cout<<"node deleted is: "<<this->data;
        cout<<endl;
    }
};

void printLL(Node * head){
    Node * temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}

int getLength(Node * head){
    int count=0;
    Node * temp = head;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

void insertHead(Node* &head,Node* &tail,int data){
        if(head==NULL){
        Node * newNode=new Node(data);
        head=newNode;
        tail=newNode;
    }else{
        Node * newNode=new Node(data);
        newNode->next=head;
        head=newNode;
    }
}

Node*midl(Node* head){
    Node*slow=head;
    Node*fast=head;

    while (fast->next!=NULL){
        fast=fast->next;
        if(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
        return slow;
    }
}

Node*reversee(Node*head2){
    Node*prev=NULL;
    Node*curr=head;
    while(curr!=NULl){
        Node*next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

bool compare(Node*head,Node*head2){
    while(head2!=NULL){
        if(head->data != head2->data){
            return false;
        }else{
            head=head->next;
            head2=head2->next;
        }
     } 
     return true;
}

bool isPal(){
    //find mid
    Node*mid=midl(head);
    Node*head2=mid->next;
    mid->next=NULL

    //reverse
   head2=reversee(head2);

   //compare
   bool ans=compare(head,head2);
   return ans;

}

int main(){
    Node*head=NULL;
    Node*tail=NULL;
}
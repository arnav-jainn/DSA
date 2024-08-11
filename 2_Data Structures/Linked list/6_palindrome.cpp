//LC-234

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

Node *middlee(Node * head){
    Node*slow=head;
    Node*fast=head;

    while(fast->next!=NULL){
        fast=fast->next;
        if(fast->next!=NULL){
            fast=fast->next;
            slow=slow->next;
        }
    }
    return slow;
}

Node *rev(Node * &head2){
    Node*prev=NULL;
    Node*curr=head2;

    while(curr!=NULL){
        Node*next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    head2=prev;
    return head2;

}

bool compareLL(Node*head,Node*head2){
     while(head!=NULL && head2!=NULL){
        if(head->data != head2->data){
            return false;
        }else{
            head=head->next;
            head2=head2->next;
        }
     }
     return true;
}

bool isPalindome(Node * head){

    //BREAK THE LIST INTO 2 HALF
    Node*midpoint=middlee(head);
    Node*head2=midpoint->next;
    midpoint->next=NULL;


    //revese the 2nd LL
    head2=rev(head2);

    //compare both list
    bool ans= compareLL(head,head2);
    return ans;


}

int main(){

    Node * head = NULL;
    Node * tail = NULL;

    insertHead(head,tail,1);
    insertHead(head,tail,2);
    insertHead(head,tail,2);
    insertHead(head,tail,1);

    // printLL(head);
    // cout<<endl;

    cout<<isPalindome(head);
    
}
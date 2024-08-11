#include<iostream>
using namespace std;

class Node{

    public:
        int data;
        Node*prev;
        Node*next;

        Node(){
            this->next=NULL;
            this->prev=NULL;
        }

        Node(int data){
            this->data=data;
            this->next=NULL;
            this->prev=NULL;
        }
        ~Node(){
            cout<<"node deleted: "<<this->data;
            cout<<endl;
        }
};

void printLL(Node*head){
    Node*temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}

int findLength(Node*head){
    Node*temp=head;
    int count=0;
    while(temp->next!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}

void insertAtHead(Node* &head,Node* &tail,int data){
    //LL is empty
    if(head==NULL){
        Node* newNode=new Node(data);
        head=newNode;
        tail=newNode;
    }
    else{
    //LL is not empty
    Node*newNode=new Node(data);
    newNode->next=head;
    head->prev=newNode;
    head=newNode;
    }

}

void insertAtTail(Node* &head,Node* &tail,int data){
    //empty LL
    if(head==NULL){
        Node*newNode=new Node(data);
        head=newNode;
        tail=newNode;
    }
    //NON EMPTY LL
    else{
        Node* newNode=new Node(data);
        tail->next=newNode;
        newNode->prev=tail;
        tail=newNode;
  
    }
}

void insertAtMiddle(Node* &head,Node* &tail,int data,int position){

     if(head==NULL){
        Node*newNode=new Node(data);
        head=newNode;
        tail=newNode;
    }     
    else{
        int length=findLength(head); 
        if(position==1){
            insertAtHead(head,tail,data);
        }
        else if(position>length){
            insertAtTail(head,tail,data);
        }else{
        Node*newNode=new Node(data);
            Node*prevNode=NULL;
            Node*currNode=head;

            while(position!=1){
                prevNode=currNode;
                currNode=currNode->next;
                position--;
            }
            prevNode->next=newNode;
            newNode->prev=prevNode;
            newNode->next=currNode;
            currNode->prev=newNode;

        }
    }
}

void deleteNode(Node* &head,Node* &tail,int position){
    if(head==NULL){
        cout<<"cant delete";
    }

    if(head==tail){
        Node*temp=head;
        delete temp;

        head=NULL;
        tail=NULL;
    }

    int len=findLength(head);

    if (position==1){
        Node*temp=head;
        head=temp->next;
        head->prev=NULL;
        temp->next=NULL;
        delete temp;
    }else if(position==len){
        Node*prevNode=tail->prev;
        prevNode->next=NULL;
        tail->prev=NULL;
        delete tail;
        tail=prevNode;
    }else{

        Node* prevNode = NULL;
        Node* currNode = head;
        while(position != 1) {
            position--;
            prevNode = currNode;
            currNode = currNode->next;
        }
        Node* nextNode = currNode -> next;

        prevNode->next = nextNode;
        currNode->prev = NULL;
        currNode->next = NULL;
        nextNode -> prev = prevNode;

        delete currNode;

    }
}

int main(){
    Node*head=NULL;
    Node*tail=NULL;

    insertAtHead(head,tail,10);
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,30);
    insertAtHead(head,tail,40);
    insertAtHead(head,tail,50 );

    printLL(head);
    cout<<endl;

    insertAtTail(head,tail,9);
    insertAtTail(head,tail,8);
    insertAtTail(head,tail,7);
    insertAtTail(head,tail,6);

    printLL(head);
    cout<<endl;

    insertAtMiddle(head,tail,60,1);
    printLL(head);
    cout<<endl;

    insertAtMiddle(head,tail,5,100);
    printLL(head);
    cout<<endl;

    insertAtMiddle(head,tail,99,7);
    printLL(head);
    cout<<endl;

    deleteNode(head,tail,1);
    printLL(head);
    cout<<endl;

    deleteNode(head,tail,5);
    printLL(head);
    cout<<endl;
}
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
        cout<<"Node deleted: "<<this->data;
        cout<<endl;
    }
};

void printLL(Node*head){
    Node*temp=head;
    while (temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }   
}

int getLength(Node*head){
    Node*temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;

}

//insertion at head
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

//insertion after tail
void insertAtLast(Node* &head,Node* &tail,int data){
    if(head==NULL){
//empty LL
    Node*newNode=new Node(data);
    head=newNode;
    tail=newNode;        
    }else{
//Non empty LL

    //creation of new node
    Node*newNode=new Node(data);
    //tail node ko attach kro new node ko 
    tail->next=newNode;
    //update tail 
    tail=newNode;
    }
}

//INSERT AT POSITION
 void insertAtPosition(Node* &head,Node* &tail,int data,int position){

     
    int length=getLength(head);
    
    if(position<=1){
        InsertAtHead(head,tail,data);

    }else if(position>length){
        insertAtLast(head,tail,data); 
        }
    else{
    //insert at middle  
        //create node
        Node *newNode=new Node(data);

        //traverse current and previous

        Node *prev=NULL;
        Node *curr=head;

        while(position != 1){
            prev = curr;
            curr = curr->next;
            position--;
        }

        //attach previous to new node and new node to current node

        prev->next=newNode;
        newNode->next=curr;


    }
 }

void deleteNode(Node* &head,Node* &tail,int position){

    int len=getLength(head);
    
    //case 1: empty LL
    if(head==NULL){
        cout<<"Can't empty LL";
        return;
    }

    //single element case
    if(head==tail){
        Node*temp=head;
        delete temp;

        head=NULL;
        tail=NULL;
    }

    //case 2: from start
   if(position==1){

    Node*temp=head;
    head=temp->next;
    temp->next=NULL;
    delete temp;

   }

    //case 3:last se delete
    else if (position==len){

        //find prev 
        Node*prev=head;
        while(prev->next!=tail){
            prev=prev->next; 
        }
        prev->next=NULL;
        delete tail;
        tail=prev;
        
    }

    else{

        //set prev and current
        Node*prev=NULL;
        Node*curr=head;
        while(position!=1){
            prev=curr;
            curr=curr->next;
            position--;
        }

        prev->next=curr->next;

        curr->next=NULL;

        delete curr;

    }

}


int main(){
    Node*head=NULL;
    Node*tail=NULL;
    int position=0;

    InsertAtHead(head,tail,10);
    InsertAtHead(head,tail,20);
    InsertAtHead(head,tail,30);
    InsertAtHead(head,tail,40);

    // printLL(head);
    // cout<<endl;

    insertAtLast(head,tail,9);
    insertAtLast(head,tail,8);
    insertAtLast(head,tail,7);
    insertAtLast(head,tail,6);


    printLL(head);
    cout<<endl;

    insertAtPosition(head,tail,1,990);

    printLL(head);
    cout<<endl;

    deleteNode(head,tail,1);

    printLL(head);
    cout<<endl;

    deleteNode(head,tail,1);

    printLL(head);
    cout<<endl;

    deleteNode(head,tail,5);

    printLL(head);
    cout<<endl;


}

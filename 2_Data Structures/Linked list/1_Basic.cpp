//creating and printing a LL

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

//COUNTING NUMBER OF NODES IN A LINKED LIST
int numberOfNodes(Node*head){
    Node*temp=head;
    int count=0;
    while(temp!=NULL){
        count++;
        temp=temp->next;
    }
    return count;
}


int main(){
    // Node*head=new Node();
    Node*first=new Node(10);
    Node*second=new Node(20);
    Node*third=new Node(30);
    Node*forth=new Node(40);
    Node*firth=new Node(50);

    first->next=second;
    second->next=third;
    third->next=forth;
    forth->next=firth;

    Node*head=first;
    cout<<endl;
    cout<<"number of nodes: ";
    int no=numberOfNodes(head);
    cout<<no;
    
    printLL(head);
    


}

//LC-141

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

bool hasCycle(Node*head){
    map<Node*,bool>table;

    Node*temp=head;

    while(temp!=NULL){
        if(table[temp]==false){
            table[temp]=true;
        }
        else{
            //cycle present
            return true;
        }
        temp=temp->next;
    }
    //loop not present
    return false; 

}


//OR

bool cycle(Node*head){
    Node*slow=head;
    Node*fast=head;

    while(fast!=NULL){
        fast=fast->next;
        if(fast!=NUll){
            fast=fast->next;
            slow=slow->next;
        }

        if(fast==slow){
            return true;
        }
    }
    return false;
}
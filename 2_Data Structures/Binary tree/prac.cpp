#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node*left;
        Node*right;


        Node(int data){
            this->data=data;
            this->left=NULL;
            this->right=NULL;
        }
};

Node*createNode(){
    cout<<"Enter value of node: ";
    int data;
    cin>>data;

    if(data==-1){
        return NULL;
    }

    Node*root = new Node(data);

    cout
    root->left=createNode();
    root->right=createNode();

    return root;
}

int main(){
    Node*root=createNode();

}
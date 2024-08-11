#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node*left;
    Node*right; 

    Node(int val){
        this->data=val;
        this->left=NULL;
        this->right=NULL;
    }

};

    Node*createTree(){
        //it will return root node of the tree
        cout<<"Enter the value for node ";
        int data;
        cin>>data;

        if(data==-1){
            //if the entered value is -1 then it gives null otherwise put the value
            return NULL;
        }

            // Step 1-> create node
            Node*root = new Node(data);
            //Step 2-> create left subtree
            cout<<"left of node: "<<root->data<<endl;
            root->left=createTree();
            //Step 3-> create right subtree
            cout<<"right of node: "<<root->data<<endl;
            root->right=createTree();
            return root;
        

    }



int main(){

Node*root=createTree();
}
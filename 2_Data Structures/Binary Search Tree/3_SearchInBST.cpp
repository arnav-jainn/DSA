//search a given target in a BST

#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

Node*insertIntoBST(Node*root,int data){
    if(root==NULL){
        //for root node
        root=new Node(data);
        return root;
    }

    //for other node

    if(data>root->data){
        root->right=insertIntoBST(root->right,data);
    }else{
        root->left=insertIntoBST(root->left ,data);
    }
    return root; 
}   

void createBST(Node* &root){     //&(by reference pass krna imp h  jisse root m changes ho na ki uski copy m)
    cout<<"Enter data: "<< endl;
    int data;
    cin>>data;

    while(data != -1){
        root=insertIntoBST(root,data);
         cout<<"Enter data: "<<endl;
         cin>>data;
    }
}


bool search(Node*root,int target){
    if(root==NULL){
        return false;
    }

    if(root->data==target){
        return true;
    }

    bool leftAns=false;
    bool rightAns=false;

    if(target>root->data){
        rightAns=search(root->right,target);
    }else{
        leftAns=search(root->left,target);
    }

    return rightAns || leftAns;
}

int main(){
    Node*root=NULL;
    createBST(root);

    int t;
    cout<<"Enter target: ";
    cin>>t;

    while(t!=-1){
        bool ans = search(root,t);
        if(ans==true){
            cout<<"Found"<<endl;
        }else{
            cout<<"Not Found"<<endl;
        }

    cout<<"Enter target: ";
    cin>>t;
    }



}
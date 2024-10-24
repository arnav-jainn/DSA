//Min and Max value of a bst
//TC- O(n)


#include<iostream>
#include<queue>

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

Node* minValue(Node*root){
    if(root==NULL){
        cout<<"No value";
        return NULL;
    }
    Node *temp=root;

    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp;
}

Node* maxValue(Node*root){
    if(root==NULL){
        cout<<"No value";
        return NULL;
    }
    Node *temp=root;

    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp;
}


int main(){
    Node*root=NULL;
    createBST(root);


    Node*min=minValue(root);
    cout<<min->data;

        cout<<endl;

    Node*max=maxValue(root);
    cout<<max->data;
}
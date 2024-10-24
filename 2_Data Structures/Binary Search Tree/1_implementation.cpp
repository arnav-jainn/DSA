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


void levelOrder(Node*root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node * front = q.front();
        q.pop();


        if(front==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            cout<<front->data<<" ";

            if(front->left!=NULL){
                q.push(front->left);
            }
            
            if(front->right!=NULL){
                q.push(front->right);
            }
        }
    }
}

void preOrder(Node*root){
    if(root==NULL){
        return ;
    }

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

void inOrder(Node*root){
    if(root==NULL){
        return ;
    }

    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

void postOrder(Node*root){
    if(root==NULL){
        return ;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}



int main(){
    Node*root=NULL;
    createBST(root);
    levelOrder(root);

    cout<<endl<<"Pre Order: ";
    preOrder(root);
    cout<<endl<<"In Order: ";
    inOrder(root);
    cout<<endl<<"Post Order: ";
    postOrder(root);
}
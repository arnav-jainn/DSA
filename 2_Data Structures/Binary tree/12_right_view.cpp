#include<iostream>
#include <queue>
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

Node*createTree(){
    int data;
    cin>>data;

    if(data==-1){
        return NULL;
    }

    Node*root= new Node(data);
    root->left=createTree();
    root->right=createTree();
    return root;
}

void preOrder(Node*root){
    if(root==NULL){
        return;
    }

    cout<<root->data;

    preOrder(root->left);
    preOrder(root->right);
}

void postOrder(Node*root){
    if(root==NULL){
        return;
    }

    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data;
}

void inOrder(Node*root){
    if(root==NULL){
        return;
    }

    inOrder(root->left);
    cout<<root->data;
    inOrder(root->right);
}

void levelOrder(Node*root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){

        Node*front= q.front();
        q.pop();

        if(front==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
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


void rightView(Node*root,int level,vector<int> &arr){
    if(root==NULL){
        return;
    }
     
    if(level == arr.size()){
        //left node milgy h
        arr.push_back(root->data);
    }

    rightView(root->right,level+1,arr);         //Right view h islie right call phele hogi 
    rightView(root->left,level+1,arr);
}

int main(){
    Node*root=createTree();
    vector<int>arr;
    rightView(root,0,arr);

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }

}
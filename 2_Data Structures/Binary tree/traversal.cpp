#include<iostream>
#include<queue>
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
    cout<<"enter node value: ";
    int data;
    cin>>data;

    if(data==-1){
        return NULL;
    }

    Node*root= new Node(data);
    // cout<<"left"<<root->data;
    root->left=createNode();
    // cout<<"right"<<root->data;
    root->right=createNode();
    return root;
}

//PRE ORDER TRAVERSAL
void preOrderTraversal(Node*root){
    if(root==NULL){
        return;
    }
    //N L R

    //N
    cout<< root->data<<" ";

    //L
    preOrderTraversal(root->left);

    //R
    preOrderTraversal(root->right);       
}

//INORDER TRAVERSAL
void inOrder(Node*root){
    if(root==NULL){
        return;
    }
    //L N R

    //L
    inOrder(root->left);
    //N
    cout<<root->data<<" ";
    //R
    inOrder(root->right);
}

//POST ORDER TRAVERSAL
void postOrder(Node*root){
        if(root==NULL){
        return;
    }
    //L R N

    //L
    postOrder(root->left);
    //R
    postOrder(root->right);
    //N
    cout<<root->data<<" ";
}

//LEVEL ORDER TRAVERSAL

void levelOrder(Node*root){
    queue<Node*>q;
    q.push(root);

    //traversal
    while(!q.empty()){
        Node*front=q.front();
        q.pop();

        cout<<front->data<<" ";

        if(front->left!=NULL){
            q.push(front->left);
        }
        if(front->right!=NULL){
            q.push(front->right);
        }
    }

}
int main(){
    Node*root=createNode();

    cout<<"preOrder: "<<endl;
    preOrderTraversal(root);
    cout<<endl;

    cout<<"inOrder: "<<endl;
    inOrder(root);
    cout<<endl;

    cout<<"postOrder: "<<endl;
    postOrder(root);
    cout<<endl;

    cout<<"level: "<<endl;
    levelOrder(root);
}
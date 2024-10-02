#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *createTree()
{
    int data;
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }

    Node *root = new Node(data);
    root->left = createTree();
    root->right = createTree();
    return root;
}

void leftBoundry(Node*root){
    if(root==NULL){
        return;
    }
    if(root->left==NULL && root->right==NULL){
        return;
    }
    cout<<root->data<<" ";

    if(root->left!=NULL){       //imp agr left m possible h to left m jao ni to right m dono jgh mt jao
        leftBoundry(root->left);
    }else{
        leftBoundry(root->right);
    }
}

void leafBoundry(Node*root){
    if(root==NULL){
        return;
    }

    if(root->left==NULL && root->right==NULL){
        cout<<root->data<<" ";
    }
    leafBoundry(root->left);
    leafBoundry(root->right);
}

void rightBoundry(Node*root){
    if(root==NULL){
        return;
    }
    if(root->left==NULL && root->right==NULL){
        return;
    }

    if(root->right!=NULL){       //imp agr left m possible h to left m jao ni to right m dono jgh mt jao
        rightBoundry(root->right);
    }else{
        rightBoundry(root->left);
    }
    cout<<root->data<<" ";
}

void boundryTraversal(Node*root){
    if(root==NULL){
        return;
    }
    leftBoundry(root);
    leafBoundry(root);
    if(root->right!=NULL){
    rightBoundry(root->right);  
    }else
        rightBoundry(root->left);
}

int main()
{
    Node *root = createTree();
    boundryTraversal(root);
}
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

Node*createTree(){
    int data;
    cin>>data;

    if(data==-1){
        return NULL;
    }

    Node* root = new Node(data);

    root->left=createTree();
    root->right=createTree();
    return root;
}

void preOrder(Node*root){

    if(root==NULL){
        return;
    }
    
    //N
    cout<<root->data;

    //l
    preOrder(root->left);

    //r
    preOrder(root->right); 
}


void levelOrder(Node*root){
    queue<Node*>q;
    q.push(root);

    while(!q.empty()){
        Node*front = q.front();
        q.pop();

        cout<<front->data;

        if(front->left!=NULL){
            q.push(front->left);
        }
        if(front->right!=NULL){
            q.push(front->right);
        }
    }

}

void level(Node*root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node *front = q.front();
        q.pop();


        if(front==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }else{
            
            cout<<front->data;

            if(front->left!=NULL){
                q.push(front->left);
            }
            if(front->right!=NULL){
                q.push(front->right);
            }
        }
    }
}

int main(){
    Node*root=createTree();

    preOrder(root);

}
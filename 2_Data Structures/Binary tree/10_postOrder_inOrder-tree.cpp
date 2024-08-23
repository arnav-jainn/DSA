//create a binary tree from postorder and inorder traversal

#include<iostream>
#include<queue>
#include<map>
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


void level(Node*root){              //print everylevel at diff line 
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    //traversal
    while(!q.empty()){

        Node*front=q.front();
        q.pop();

        if(front==NULL){
            cout<<endl;
            if(!q.empty()){             //imp
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



// int searchInOrder(int inorder[],int size,int target){
//     for(int i=0;i<size;i++){
//         if(target==inorder[i]){
//             return i;
//         }
//     }
//     return -1;
// }

void createMapping(int inOrder[],int size, map<int,int>&valueToIndexMap){
    for(int i=0;i<size;i++){
        int element=inOrder[i];
        int index=i;
        valueToIndexMap[element]=index; 

    }
}


Node * constructTree (map<int,int>&valueToIndexMap,int inOrder[],int postOrder[],int &postOrderIndex,int inOrderStart,int inOrderEnd,int size){            //preorderindex ko by reference imp

    if(postOrderIndex<0 || inOrderStart>inOrderEnd){
        return NULL;
    }

    //1 case jo m solve krunga
        int element=postOrder[postOrderIndex];
        postOrderIndex--;
        Node*root = new Node (element);

        // element search krna pdega inorder m
        int position = valueToIndexMap[element]; 

    //recursion
    root->right = constructTree(valueToIndexMap,inOrder,postOrder,postOrderIndex,position+1,inOrderEnd,size);
    root->left = constructTree(valueToIndexMap, inOrder,postOrder,postOrderIndex,inOrderStart,position-1,size);


    return root;

}


int main(){
    int inOrder[]={8,14,6,2,10,4};
    int postOrder[]={8,6,14,4,10,2};
    int size=6;
    int postOrderIndex=size-1;
    int inOrderStart=0;
    int inOrderEnd=5;
    map<int,int> valueToIndexMap;
    createMapping(inOrder,size,valueToIndexMap);

    Node*root = constructTree(valueToIndexMap,inOrder,postOrder,postOrderIndex,inOrderStart,inOrderEnd,size);

    cout<<"printing tree"<<endl;
    level(root);

}
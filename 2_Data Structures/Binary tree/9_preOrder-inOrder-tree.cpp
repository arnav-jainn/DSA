//create a binary tree from preorder and inorder traversal

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


void level(Node*root){            
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    //traversal
    while(!q.empty()){

        Node*front=q.front();
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



int searchInOrder(int inorder[],int size,int target){
    for(int i=0;i<size;i++){
        if(target==inorder[i]){
            return i;
        }
    }
    return -1;
}

// void createMapping(int inOrder[],int size, map<int,int>&valueToIndexMap){
//     for(int i=0;i<size;i++){
//         int element=inOrder[i];
//         int index=i;
//         valueToIndexMap[element]=index; 

//     }
// }


Node * constructTree (int inOrder[],int preOrder[],int &preOrderIndex,int inOrderStart,int inOrderEnd,int size){            //preorderindex ko by reference imp

    if(preOrderIndex>=size || inOrderStart>inOrderEnd){
        return NULL;
    }

    //1 case jo m solve krunga
        int element=preOrder[preOrderIndex];
        preOrderIndex++;
        Node*root = new Node (element);

        // element search krna pdega inorder m
        int position = searchInOrder(inOrder,size,element);


    //recursion
    root->left = constructTree(inOrder,preOrder,preOrderIndex,inOrderStart,position-1,size);
    root->right = constructTree(inOrder,preOrder,preOrderIndex,position+1,inOrderEnd,size);


    return root;

}


int main(){
    int inOrder[]={10,8,6,2,4,12};
    int preOrder[]={2,8,10,6,4,12};
    int size=6;
    int preOrderIndex=0;
    int inOrderStart=0;
    int inOrderEnd=5;

    Node*root = constructTree(inOrder,preOrder,preOrderIndex,inOrderStart,inOrderEnd,size);

    cout<<"printing tree"<<endl;
    level(root);

}
#include<iostream>
#include<queue>
using namespace std;



Node*createNode(){
    cout<<"enter node value: ";
    int data;
    cin>>data;

    if(data==-1){
        return NULL;
    }

    Node*root= new Node(data);
    cout<<"left"<<root->data;
    root->left=createNode();
    cout<<"right"<<root->data;
    root->right=createNode();
    return root;
}

// Changes



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

int main(){
    Node*root=createNode();

    cout<<"level:"<<endl;
    level(root);
}
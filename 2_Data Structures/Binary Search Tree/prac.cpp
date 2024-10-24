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

Node*insertIntoBST(Node*root,int data){

    if(root==NULL){
        root=new Node(data);
        return root;
    }

    if(data>root->data){
        root->right=insertIntoBST(root->right,data);
    }else{
        root->left=insertIntoBST(root->left,data);
    }
    return root;
}

void levelOrder(Node*root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

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


void createBST(Node* &root){
    cout<<"Enter data";
    int data;
    cin>>data;

    while(data!=-1){
        root=insertIntoBST(root,data);
        cout<<"Enter more data";
        cin>>data;
    }
}

int minn(Node*root){
    Node*temp=root;

    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp->data;
}

int main(){
    Node*root=NULL;
    createBST(root);

    // levelOrder(root);

    int n=minn(root);
    cout<<n;
}
//search a given target in a BST

#include<iostream>

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

Node*deleteFromBST(Node*root,int target){
    //target ko dhundo
    //target ko delete kro

    if(root==NULL){
        return NULL;
    }

    if(root->data==target){
        //delete
        //4 cases

        if(root->left==NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        else if(root->left!=NULL && root->right==NULL){
            Node*childSubtree=root->left;
            delete root;
            return childSubtree;
        }
        else if(root->left==NULL && root->right!=NULL){
            Node*childSubtree=root->right;
            delete root;
            return childSubtree;
        }
        else{
            //left subtree k max value lao
            Node*maxi=maxValue(root->left);
            root->data=maxi->data;           //replacement
            root->left=deleteFromBST(root->left,maxi->data);
            return root;
        }

    }else if(root->data>target){
       root->left=deleteFromBST(root->left,target);
    }else{
        root->right=deleteFromBST(root->right,target);
    }
    return root;
}

int main(){
    Node*root=NULL;
    createBST(root);

    int t;
    cout<<"Enter target: ";
    cin>>t;

    while(t!=-1){
        root=deleteFromBST(root,t);
        cout<<"printing level: "<<endl;
        levelOrder(root);
        
    cout<<"Enter target: ";
    cin>>t;
    }



}
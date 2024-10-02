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
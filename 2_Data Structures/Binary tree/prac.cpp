#include <iostream>
#include <queue>

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


void levelorder(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        Node *front = q.front();
        q.pop();

        if (front == NULL)
        {
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else
        {
            cout << front->data << " ";

            if (front->left != NULL)
            {
                q.push(front->left);
            }
            if (front->right != NULL)
            {
                q.push(front->right);
            }
        }
    }
}


Node*createTree(int preOrder,int &preOrderIndex,int inOrder,int inOrderStart,int inOrderEnd,int size){

    int element=preOrder[preOrderIndex];
    preOrderIndex++;
    Node*root=new Node(element);

    int position=EleInInoder()
}

int main()
{
    Node *root = createNode();

    levelorder(root);
}
#include <iostream>
#include <queue>
#include <map>

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

void bottomView(Node *root)
{
    map<int, int> hdMap;
    queue<pair<Node *, int> > q;
    q.push(make_pair(root, 0));

    while (!q.empty())
    {
        pair<Node *, int> front = q.front();
        q.pop();

        Node *frontNode = front.first;
        int hd = front.second;

        //overwrite ans
        hdMap[hd] = frontNode->data;

        // child

        if (frontNode->left != NULL)
        {
            q.push(make_pair(frontNode->left, hd - 1));
        }

        if (frontNode->right != NULL)
        {
            q.push(make_pair(frontNode->right, hd + 1));
        }
    }

    cout<<"Printing top view"<<endl;
    for(auto i: hdMap){
        cout<<i.second<<" ";
    }
} 

int main()
{
    Node *root = createTree();
    bottomView(root);
}
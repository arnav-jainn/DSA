#include <iostream>
using namespace std;

// Definition of a binary tree node
struct Node {
    int data;
    Node* left, *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

// Recursive function to find Kth ancestor
Node* findKthAncestor(Node* root, int node, int &k) {
    // Base case
    if (root == nullptr) 
        return nullptr;

    // If the target node is found
    if (root->data == node)
        return root;

    // Look for the target node in the left and right subtrees
    Node* leftAncestor = findKthAncestor(root->left, node, k);
    Node* rightAncestor = findKthAncestor(root->right, node, k);

    // If node is found in either subtree
    if (leftAncestor || rightAncestor) {
        // Decrement k as we go up one level
        k--;

        // If k becomes 0, it means current node is the Kth ancestor
        if (k == 0) {
            cout << "Kth ancestor is: " << root->data << endl;
            return nullptr;  // Return nullptr to stop further backtracking
        }
        
        return root;
    }

    return nullptr;
}

int main() {
    // Constructing the binary tree
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    int k = 2;
    int targetNode = 5;

    findKthAncestor(root, targetNode, k);

    return 0;
}

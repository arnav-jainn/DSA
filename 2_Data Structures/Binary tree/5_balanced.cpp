//check if the tree is balanced or not
//LC-110

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    int height(TreeNode* root){
        if(root==NULL)
            return 0;

        int left=height(root->left);
        int right=height(root->right);
        int height=max(left,right) + 1;
        return height;
    }

    bool isBalanced(TreeNode* root) {

        //BC
        if(root==NULL){
            return true;
        }

        //Current Node

        int left=height(root->left);
        int right=height(root->right);
        int diff=abs(left-right);

        bool CurrentAns = (diff <= 1);

        bool leftAns = isBalanced(root->left);
        bool rightAns = isBalanced(root->right);

        if( CurrentAns && leftAns && rightAns ){
            return true;
        }else{
            return false;
        }
        
    }
};
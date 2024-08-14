// height of a binary tree
//LC-104

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
    int maxDepth(TreeNode* root) {
        if(root==NULL){
            return 0;
        }

        int leftHeight=maxDepth(root->left);
        int rightHeight=maxDepth(root->right);
        int height = max(leftHeight,rightHeight)+1;
        return height;
        
    }
};

//or


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
    int maxDepth(TreeNode* root) {
            if(root==NULL){
                return 0;
            }
        queue<TreeNode*>q;
        q.push(root);
        q.push(NULL);
        int count=1;           //1 level already initialize krdia  h islie count 1

        //traversal
        while(!q.empty()){

            TreeNode*front=q.front();
            q.pop();

            if(front==NULL){
                cout<<endl;
                if(!q.empty()){             //
                count++;
                q.push(NULL);
                }
            }else{
                if(front->left!=NULL){
                    q.push(front->left);
                }
                if(front->right!=NULL){
                    q.push(front->right);
                }
            }
        }
    return count;
    }
};
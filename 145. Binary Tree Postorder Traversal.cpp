Time Limit Exceeded Solution
#Using two Stacks

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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> postorder;
        if(!root) return postorder;
        
        stack<TreeNode*> st1, st2;
        st1.push(root);
        
        while(root){
            TreeNode* top = st1.top();
            st1.pop();
            if(root->left)
                st1.push(root->left);
            if(root->right)
                st1.push(root->right);
        }
        
        while(st1.size()){
            postorder.push_back(st2.top()->val);
            st2.pop();
        }
        return postorder;
    }
};

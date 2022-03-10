    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preorder;
        
        if(!root) return preorder;
        
        stack<TreeNode*> st;
        st.push(root);
        
        while(!st.empty()){
            
            root = st.top();
            preorder.push_back(root->val);
            st.pop();
            
            if(root->right) st.push(root->right);
            if(root->left) st.push(root->left);            
        }
        return preorder;
    }

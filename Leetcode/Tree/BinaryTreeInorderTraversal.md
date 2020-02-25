//https://leetcode.com/problems/binary-tree-inorder-traversal/

//Morris Traversal - O(n) time & O(1) extra space 
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        TreeNode *curr = root;
        while(curr!=NULL){
            
            if(curr->left){
                TreeNode  *pre = curr->left;
                while(pre->right!=NULL)
                    pre = pre->right;
                
                pre->right = curr;
                TreeNode *temp = curr;
                curr = curr->left;
                temp->left = NULL;
            }
            else{
                ans.push_back(curr->val);
                curr = curr->right;
            }
        }
        
        return ans;
    }
};

//Using stack
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode *> s;
        TreeNode *curr = root;
        while(!s.empty() || curr!=NULL){
            
            while(curr){
                s.push(curr);
                curr = curr->left;
            }
            
            curr = s.top();
            s.pop();
            ans.push_back(curr->val);
            curr = curr->right;
        }
        
        return ans;
    }
};

//Using recursion
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        traverse_inorder(root, ans);
        return ans;
    }
    
    void traverse_inorder(TreeNode* root, vector<int>& ans){
        if(root){
            traverse_inorder(root->left, ans);
            ans.push_back(root->val);
            traverse_inorder(root->right, ans);
        }
    }
};
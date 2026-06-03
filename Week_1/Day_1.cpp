//Leetcode problem 94: Binary Tree Inorder Traversal

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
    vector<int>output; 
    vector<int> inorderTraversal(TreeNode* root) {
        func(root);
        return output;
    }
    void func(TreeNode* root)
    {
        if(root==NULL)
            return;
        func(root->left);
        output.push_back(root->val);
        func(root->right);
    }
};

//Leetcode problem 144: Binary Tree Preorder Traversal

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
    vector<int>output; 
    vector<int> preorderTraversal(TreeNode* root) {
        func(root);
        return output;
    }
    void func(TreeNode* root)
    {
        if(root==NULL)
            return;
        output.push_back(root->val);
        func(root->left);
        func(root->right);
    }
};

//Leetcode problem 145: Binary Tree Postorder Traversal

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
    vector<int>output; 
    vector<int> postorderTraversal(TreeNode* root) {
        func(root);
        return output;
    }
    void func(TreeNode* root)
    {
        if(root==NULL)
            return;
        func(root->left);
        func(root->right);
        output.push_back(root->val);
    }
};
//Leetcode problem 102: Binary Tree Level Order Traversal

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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        if(root==NULL)
            return {};
        q.push(root);
        while(!q.empty())
        {
            int level_size=q.size();
            vector<int>temp;
            while(level_size--)
            {
                TreeNode* t=q.front();
                q.pop();
                temp.push_back(t->val);
                if(t->left!=NULL)
                    q.push(t->left);
                if(t->right!=NULL)
                    q.push(t->right);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};

//Leetcode problem 103: Binary Tree Zigzag Level Order Traversal

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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL)
            return {};
        queue<TreeNode*>q;
        q.push(root);
        bool left_to_right=1;
        while(!q.empty())
        {
            int level_size=q.size();
            vector<int>temp;
            while(level_size--)
            {
                TreeNode* t=q.front();
                q.pop();
                temp.push_back(t->val);
                if(t->left!=NULL)
                    q.push(t->left);
                if(t->right!=NULL)
                    q.push(t->right);
            }
            if(left_to_right==1)
            {
                ans.push_back(temp);
                left_to_right=0;
            }
            else if(left_to_right==0)
            {
                reverse(temp.begin(), temp.end());
                ans.push_back(temp);
                left_to_right=1;
            }
        }
        return ans;
    }
};

// Method-2

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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) 
    {
        vector<vector<int>>ans;
        if(root==NULL)
            return {};
        queue<TreeNode*>q;
        q.push(root);
        bool left_to_right=1;
        while(!q.empty())
        {
            int level_size=q.size();
            vector<int>temp(level_size);
            int first=0;
            int last=level_size-1;
            while(level_size--)
            {
                TreeNode* t=q.front();
                q.pop();
                if(left_to_right)
                    temp[first++]=t->val;
                else
                    temp[last--]=t->val;
                if(t->left!=NULL)
                    q.push(t->left);
                if(t->right!=NULL)
                    q.push(t->right);
            }
            ans.push_back(temp);
            left_to_right=1-left_to_right;
        }
        return ans;
    }
};

//Leetcode problem 107: Binary Tree Level Order Traversal from Bottom

**
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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>>ans;
        queue<TreeNode*>q;
        if(root==NULL)
            return {};
        q.push(root);
        while(!q.empty())
        {
            int level_size=q.size();
            vector<int> temp;
            while(level_size--)
            {
                TreeNode* t=q.front();
                q.pop();
                temp.push_back(t->val);
                if(t->left!=NULL)
                    q.push(t->left);
                if(t->right!=NULL)
                    q.push(t->right);
            }
            ans.push_back(temp);
        }
        reverse(ans.begin(),ans.end());
        return ans; 
    }
};
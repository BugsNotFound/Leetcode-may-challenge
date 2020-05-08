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
    TreeNode *parent_x;
    TreeNode *parent_y;
    int height_x;
    int height_y;
public:
    
    void helper_isCousins(TreeNode *root, int x, int y, int height, TreeNode *parent){
        if(root==nullptr){
            return;
        }
        if(root->val == x){
            height_x = height;
            parent_x = parent;
        }
        else if(root->val == y){
            height_y = height;
            parent_y = parent;
        }
        else{
            helper_isCousins(root->left, x, y, height+1, root);
            helper_isCousins(root->right, x, y, height+1, root);
        }
        
    }
    
    bool isCousins(TreeNode* root, int x, int y) {
        //same depth but different parents...
        parent_x = nullptr; parent_y=nullptr; height_x=-1; height_y=-1;
        helper_isCousins(root, x, y, 0, nullptr);
        if(height_x == height_y && parent_x != parent_y){
            return true;
        }
        return false;
    }
};

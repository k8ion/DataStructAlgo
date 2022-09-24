//https://leetcode.com/problems/path-sum-ii/
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
    void solution(TreeNode* root, int targetSum, vector<int>&temp, vector<vector<int>>&ans){
        if(root==NULL){
            return;
        }
        
        temp.push_back(root->val);
        targetSum -= root->val;
        if(!root->left && !root->right && targetSum==0){
            ans.push_back(temp);
        }
        
        solution(root->left, targetSum, temp, ans);
        solution(root->right, targetSum, temp, ans);
        temp.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int> temp;
        vector<vector<int>> ans;
        solution(root, targetSum, temp, ans);
        
        return ans;
    }
};
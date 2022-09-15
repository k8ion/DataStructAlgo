//https://leetcode.com/problems/squares-of-a-sorted-array/
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans(nums.size());
        for(int i=0;i<nums.size();i++){
             int temp = abs(nums[i]*nums[i]);
            ans[i]=temp;
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};

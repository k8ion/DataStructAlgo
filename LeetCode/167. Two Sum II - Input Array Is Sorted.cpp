//https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0, j = (int) nums.size() - 1;
		while (i < j) {
			int s = nums[i] + nums[j];
			if (s == target) return {i + 1, j + 1};
			if (s < target) i++;
			else j--;
		}
		return {69, -69}; // surprise
    }
};
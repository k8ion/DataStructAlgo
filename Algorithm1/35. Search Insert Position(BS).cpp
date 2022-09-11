//https://leetcode.com/problems/search-insert-position/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int s=0;
        int e=nums.size()-1;
        int mid=s+(e-s)/2;
        int found=0;
        int position=0;
        
        while(s<=e){
            
            mid =s+(e-s)/2;
            
            if(nums[mid]==target){
                position = mid;
                found = 1;
                break;
            }
            
            else if(nums[mid]<=target){
                s=mid+1;
            }
            else{
                e=mid-1;
            }
        }
        
        
        if(found==0){
            position=s;
        }
        return position;
    }
};
//https://leetcode.com/problems/first-bad-version/
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

// Example 1:

// Input: n = 5, bad = 4
// Output: 4
// Explanation:
// call isBadVersion(3) -> false
// call isBadVersion(5) -> true
// call isBadVersion(4) -> true
// Then 4 is the first bad version.

class Solution {
public:
    int firstBadVersion(int n) {
        int s=1;
        int e=n;
        int mid = s+(e-s)/2;
        
        int firstBad = -1;
        
        while(s<=e){
            if(isBadVersion(mid)){
                e=mid-1;
                firstBad=mid;
            }
            else if(!isBadVersion(mid)){
                s=mid+1;
            }
            
            mid=s+(e-s)/2;
        }
        return firstBad;
    }
};
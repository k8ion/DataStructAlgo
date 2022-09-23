//https://leetcode.com/problems/concatenation-of-consecutive-binary-numbers/
class Solution {
public:
    int length(int n){
        return log2(n) + 1; // length of binary representation of a n number
        
    }
    int concatenatedBinary(int n) {
        long ans = 0; // even tho return type is int.
        int mod = 1e9 + 7;
        
        for(int i=1;i<=n;i++){
            int len = length(i);
            ans = ((ans << len) % mod + i) % mod; // left shift the ans and then add the i number init,(concatenate)
        }
        
        
        
        return ans % mod;
    }
};
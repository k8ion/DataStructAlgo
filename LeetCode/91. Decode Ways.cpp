//https://leetcode.com/problems/decode-ways/description/
class Solution {
public:
    
    int numDecodings(string s) {
        std::vector<size_t> dp;
        dp.resize(s.size() + 1, 0);
        dp[dp.size() - 1] = 1;
        
        for (size_t i = 0; i < s.size(); i++) {
            int count = 0;
            size_t pos = s.size() - i - 1;
            char ch = s[pos];
                
            switch (ch) {
                case '0':
                    break;
                case '1':
                    if (pos < s.size() - 1) {
                        char next = s[pos + 1];
                        if (next >= '0' && next <= '9') {
                            count += dp[pos + 2];
                        }
                    }
                    count += dp[pos + 1];
                    break;
                case '2':
                    if (pos < s.size() - 1) {
                        char next = s[pos + 1];
                        if (next >= '0' && next <= '6') {
                            count += dp[pos + 2];
                        }
                    }
                    count += dp[pos + 1];
                    break;
                case '3':
                case '4':
                case '5':
                case '6':
                case '7':
                case '8':
                case '9':
                    count += dp[pos + 1];
                    break;
                default:
                    break;
            }
            
            dp[pos] = count;
        }
        
        return dp[0];
    }
};
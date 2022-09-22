//https://leetcode.com/problems/letter-case-permutation/
class Solution {
    private:
    void solve(string s, vector<string>& ans, int index){
    //Base Case
    if (index >= s.length()){
        ans.push_back(s);
        return;
    }
    
    //Check whether its upper case or lower case
    if(s[index] >= 65 && s[index] <=90){
        
        //Convert to Lower Case 
        s[index] += ('a' - 'A');
        solve(s, ans, index+1);
        s[index] += ('A' - 'a');
        
    }
    
    
    //Lower Case
    else if(s[index] >= 97 && s[index] <= 122){

        //Convert to Upper Case
        s[index] += ('A' - 'a');
        solve(s, ans, index+1);
        s[index] += ('a' - 'A');
        
    }
    
    solve(s, ans, index+1);


}
    
    
    /*
    void solve(string &s, vector<string> ans, int index){
        // basecase
        if(index>=s.size()){
            ans.push_back(s);
            return;
        }
        
        for(int j=index; j<s.size();j++){
            //lower to upper
            if(s[j]>'a' && s[j]<'z'){
                s[j]='a'-32;
            }
            
            //upper to lower
            else if(s[j]>'A' && s[j]<'Z'){
                s[j]='A'+32;
            }
            else{
                break;
            }
        }
        solve(s,ans,index+1);

    }
    */
    public:
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;
        solve(s,ans,0);
        return ans;
    }
};
class Solution {
public:
    int maxScore(string s) {
        int right_one = 0, left_zero = 0;
        for(char c: s)
            if(c=='1') right_one++;
        
        int ans = 0;
        for(int i=0; i<s.length()-1; i++){
            if(s[i]=='0') left_zero++;
            else right_one--;
            ans = max(ans, left_zero + right_one);
        }
        return ans;
    }
};

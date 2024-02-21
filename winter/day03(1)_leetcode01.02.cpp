class Solution {
public:
    bool CheckPermutation(string s1, string s2) {
        if(s1.size() != s2.size())
        {
            return false;
        }
        vector<int> ans(128, 0);
        for(auto ch : s1)
        {
            ans[ch]++;
        }
        for(auto ch : s2)
        {
            ans[ch]--;
            if(ans[ch] < 0)
            {
                return false;
            }
        }
        return true;
    }
};
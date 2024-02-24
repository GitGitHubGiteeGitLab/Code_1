/*
    字符串压缩存储
*/
class Solution {
public:
    string compressString(string S) {
        if(S.size() <= 2)return S;
        string ans = "";
        int count = 1;
        char ch = S[0];
        for(int i = 1, sz = S.size(); i < sz; i++)
        {
            if(S[i] == ch)
            {
                count++;
            }
            else
            {
                ans += ch + to_string(count);
                ch = S[i];
                count = 1;
            }
        }
        ans += ch + to_string(count);
        if(ans.size() < S.size())
        {
            return ans;
        }
        return S;
    }
};
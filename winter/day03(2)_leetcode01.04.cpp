class Solution {
public:
    bool canPermutePalindrome(string s) {
        int map[128]{0};
        for(auto ch : s)map[ch]++;
        int odd = 0;
        for(auto e : map)
        {
            if(e & 1)
            {
                if(++odd > 1)
                    return false;
            }
        }
        return true;
    }
};
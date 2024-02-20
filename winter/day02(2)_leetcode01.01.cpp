class Solution {
public:
    bool isUnique(string astr) {
        bitset<26> bs;
        for(auto ch : astr)
        {
            if(bs.test(ch - 'a'))
            {
                return false;
            }
            bs.set(ch - 'a');
        }
        return true;
    }
};
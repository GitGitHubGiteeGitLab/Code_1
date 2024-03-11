class Solution {
public:
    string makeGood(string s) {
        string ret;
        for(auto ch : s){
            if(!ret.empty() && (ret.back() ^ ch) == 0x20){
                ret.pop_back();
            }else{
                ret += ch;
            }
        }
        return ret;
    }
};
class Solution {
public:
    int maxDepth(string s) {
        int maxd = 0;
        int cnt = 0;
        for(auto ch : s){
            if(ch == '('){
                ++cnt;    
            }
            if(ch == ')'){
                maxd = max(maxd, cnt);
                --cnt;
            }
        }
        return maxd;
    }
};
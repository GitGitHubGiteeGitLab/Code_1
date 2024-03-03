class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        size_t sz = nums.size();
        vector<int> dp(sz);
        dp[0] = nums[0];
        for(int i = 1; i < sz; i++){
            dp[i] = dp[i-1] + nums[i];
        }
        return dp;
    }
};
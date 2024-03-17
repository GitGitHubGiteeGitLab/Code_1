class Solution {
public:
    int findLHS(vector<int>& nums) {
        int maxLen = 0;
        int left = 0, right = 0;
        size_t n = nums.size();
        sort(nums.begin(), nums.end());
        while(right < n){
            while(nums[right] > nums[left] + 1)
                left++;
            if(nums[right] == nums[left] + 1)
                maxLen = max(maxLen, right - left + 1);
            right++;
        }
        return maxLen;
    }
};

class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int, int> hash;
        int maxLen = 0;
        for(auto& e : nums){
            hash[e]++;
        }
        for(auto& [key, val] : hash){
            if(hash.count(key + 1))
                maxLen = max(maxLen, val + hash[key+1]);
        }
        return maxLen;
    }
};
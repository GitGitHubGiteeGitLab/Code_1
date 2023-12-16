class Solution {
public:
    /*
        数组划分区间/分块
        双指针算法
        思想同快排单趟：prev, cur
        prev:指向已处理区间最后一个非0元素
        cur:指向未处理区间第一个元素
    */

    void moveZeroes(vector<int>& nums) {
        int prev = -1;
        int cur = 0;
        int n = nums.size();
        while(cur < n){
            if(nums[cur] != 0){
                prev++;
                swap(nums[prev], nums[cur]);
            }
            cur++;
        }
        return;
    }
};
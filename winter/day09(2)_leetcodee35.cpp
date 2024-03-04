class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        //righti从nums.size()开始是因为target可能大于nums.back()
        int lefti = 0, righti = nums.size();
        while(lefti < righti){
            int midi = lefti + (righti - lefti) / 2;
            if(nums[midi] < target)lefti = midi + 1;
            else righti = midi;
        }
        return lefti;
    }
};
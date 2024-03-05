//二段性, 二分查找
//在有序区间中查找，不在乱序区间中查找
/**
    如果中间的数小于最右边的数，则右半段是有序的，若中间数大于最右边数，则左半段是有序的，我们只要在有序的半段里用首尾两个数来判断目标值是否在这一区域内，这样就可以确定保留哪一半了。
*/
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lefti = 0, righti = nums.size() - 1;
        //左边界lefti,右边界righti
        while(lefti <= righti){
            int midi = lefti + (righti-lefti) / 2;
            if(nums[midi] == target){
                return midi;
            }else if(nums[midi] < nums[righti]){
                //这题前面必须先判等
                //( , ] 
                if(nums[midi] < target && target <= nums[righti])lefti = midi+1; //处于一个升序区间
                else righti = midi - 1;//要考虑nums[righti]恰好等于target的情况
            }else{//nums[midi] > nums[righti]， nums[midi] 不可能等于righti,原因: midi = lefti + (righti - lefti) / 2;
                //[ , )
                if(nums[lefti] <= target && target < nums[midi])
                    righti = midi - 1;
                else 
                    lefti = midi + 1;//要考虑/nums[lefti] == target的情况
            }
        }
        return -1;
    }
};
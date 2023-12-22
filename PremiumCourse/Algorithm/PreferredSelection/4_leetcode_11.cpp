class Solution {
public:
    /*
    此时我们需要移动一个指针。移动哪一个呢？直觉告诉我们，应该移动对应数字较小的那个指针（即此时的左指针）。这是因为，由于容纳的水量是由
    两个指针指向的数字中较小值 * 指针之间的距离
决定的。如果我们移动数字较大的那个指针，那么前者「两个指针指向的数字中较小值」不会增加，后者「指针之间的距离」会减小，那么这个乘积会减小。因此，我们移动数字较大的那个指针是不合理的。因此，我们移动 数字较小的那个指针。
    我们要保证乘积增长的可能性
    */

    int maxArea(vector<int>& height) {
        int left = 0; 
        int right = height.size() - 1;
        int maxv = 0;
        while(left < right){
            int v = (right - left) * min(height[left], height[right]);
            maxv = max(maxv, v);
            if(height[left] > height[right]){
                right--;
            }else{
                left++;
            }
        }
        return maxv;
    }
};
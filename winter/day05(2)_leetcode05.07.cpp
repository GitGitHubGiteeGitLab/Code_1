
class Solution {
public:
    int exchangeBits(int num) {
        //int odd = num & 0x55555555;
        //int even = num & 0xaaaaaaaa;
        //return (odd << 1) | (even >> 1);
        return ((num & 0x55555555) << 1) | ((num & 0xaaaaaaaa) >> 1);
    }
};

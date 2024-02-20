#include <cwctype>
class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 
     * @param str string字符串 
     * @return int整型
     */
    int FirstNotRepeatingChar(string str) {
        int hash[128] = {0};
        for(auto ch : str)
        {
            hash[ch]++;
        }
        for(int i = 0, sz = str.size(); i < sz; i++)
        {
            if(hash[str[i]] == 1)
            {
                return i;
            }
        }
        return -1;
    }
};
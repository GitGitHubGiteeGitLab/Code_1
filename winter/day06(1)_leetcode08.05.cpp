class Solution {
public:
//下一层只要算出结果即可
    int multiply(int A, int B) {
        /*
            A B有一方为1，返回累加求乘法
        */
        if(A > B)
            swap(A, B);
        if(A == 1)
            return B;
        return B + multiply(A - 1, B);
    }
};

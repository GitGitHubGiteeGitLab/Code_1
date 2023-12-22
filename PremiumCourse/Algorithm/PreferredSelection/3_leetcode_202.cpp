class Solution {
public:

    int cal(int n){
        int sum = 0;
        while(n){
            int sqrt = (n % 10) * (n % 10);
            sum += sqrt;
            n /= 10;
        }
        return sum;
    }

    bool isHappy(int n) {
        int slow = n;
        int fast = cal(n);
        while(fast != slow){
            fast = cal(cal(fast));
            slow = cal(slow);
        }
        return fast == 1;
    }
};
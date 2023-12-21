class Solution {
public:
    /*
        模拟栈的行为：入栈和出栈
        定义两个变量n 和 i
        栈的大小为arr.size()
        i记录栈中元素的个数
        n记录栈顶元素在原数组arr的下标
        
        入栈-->如果是0入两次0,如果是非0只入一次
        出栈-->如果栈顶元素0,出栈两次,如果非0出栈一次
        一种特殊情况：如果遇到0，入了一次栈，栈就满了
                    这种情况只能入栈一次， 相应地也只能出栈1次
                    这种情况要做相应的标记 

    */
    void duplicateZeros(vector<int>& arr) {
        int i = 0;
        int n = 0;
        while(i < arr.size()){
            if(arr[n]){
                i++;
            }else{
                i += 2;
            }
            n++;
        } 

        int flag = 0;
        if(i > arr.size()){
            flag = 1;
        }
        i = arr.size() - 1;
        while(n > 0){
            if(arr[n - 1]){
                arr[i] = arr[n - 1];
                i--;
            }else{
                if(flag == 1){
                    arr[i] = arr[n - 1];
                    flag = 0;
                    i--;
                }else{
                    arr[i] = arr[n - 1];
                    arr[i - 1] = arr[n - 1];
                    i -= 2;
                }
                 
            }
            n--;
        }

    }
};
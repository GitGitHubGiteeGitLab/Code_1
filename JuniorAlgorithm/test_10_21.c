int missingNumber1(int* nums, int numsSize){
    int N = numsSize;
    int sum = (1 + N) * N / 2;
    for(int i = 0; i < numsSize; i++){
        sum -= nums[i];
    }
    return sum;
}

int missingNumber2(int* nums, int numsSize){
    int n = 0;
    for(int i = 0; i < numsSize; i++){
        n = n ^ i ^ nums[i]; 
    }
    n ^= numsSize;
    return n;
}
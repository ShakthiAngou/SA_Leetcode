int sumLeft(int x, int* nums, int len){
    int sum = 0;
    if (x == 0) return sum;
    for (int i = 0; i < x; i ++){
        sum += nums[i];
    }
    return sum;
}

int sumRight(int x, int* nums, int len){
    int sum = 0;
    if (len == 1) return 0;
    if (x == len - 1) return 0;
    for (int i = x + 1; i < len ; i ++){
        sum += nums[i];
    }
    return sum;
}

int pivotIndex(int* nums, int numsSize){
    int lsum, rsum;
    for (int i = 0; i < numsSize; i ++){
        lsum = sumLeft(i,nums,numsSize);
        rsum = sumRight(i,nums,numsSize);
        if (lsum == rsum) return i;
    }
    return -1;
}

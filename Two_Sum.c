/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

// Loop through the array 2 times
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    *returnSize = 2;
    int* res = (int *)malloc(2 * sizeof(int));
    for (int i = 0; i < numsSize; i ++) {
        for (int j = 0; j < numsSize; j ++){
            // (j != i) ensures that an element is not used to twice
            if ((j != i) && nums[i] + nums[j] == target) {
                res[0] = i;
                res[1] = j;
            }
        }
    } 
    return res;
}

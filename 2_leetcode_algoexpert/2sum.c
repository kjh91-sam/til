int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int *returnArray;
    *returnSize = 2;
    if(!(returnArray = (int *)malloc(sizeof(int) * (*returnSize))))
        return (0);
    for (int i = 0; i < numsSize - 1; i++)
        for (int j = i + 1; j < numsSize; j++)
            if ((nums[i] + nums[j]) == target) {
                returnArray[0] = i;
                returnArray[1] = j;
                return returnArray;
            }
    return (0);
}

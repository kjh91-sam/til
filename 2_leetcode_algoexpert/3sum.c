#include <stdlib.h>
#include <stdio.h>

int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes){
    int **returnArray;
    returnArray = (int **)malloc(sizeof(int *) * (*returnSize + 1));
    int ri;
    for (ri = 0; ri < *returnSize; ri++)
        returnArray[ri] = (int *)malloc(sizeof(int) * 3);
    returnColumnSizes = (int **)malloc(sizeof(int) * (*returnSize + 1));
    ri = 0;
    for (int i = 0; i < numsSize - 2; i++) {
        for (int j = 1; j < numsSize - 1; j++) {
            for (int k = 2; k < numsSize; k++) {
                if ((nums[i] + nums[j] + nums[k]) == 0) {
                    //returnArray[ri] = {nums[i], nums[j], nums[k]};
                    returnArray[ri][0] = nums[i];
                    returnArray[ri][1] = nums[j];
                    returnArray[ri][2] = nums[k];
                    (*returnColumnSizes)[ri] = sizeof(returnArray[ri]);
                    ri++;
                }
            }
        }
    }
    return returnArray;
}

int	main() {
	int nums[] = {-1, 0, 1, 2, -1, -4};
	int numsSize = sizeof(nums) / sizeof(int);
	int *returnSize;
	int *returnColumnSizes;

	returnSize = 0;
	returnColumnSizes = 0;
	int** ts = threeSum(nums, numsSize, returnSize, &returnColumnSizes);
	for (int i = 0; i < 2; i++) {
		for (int j = 1; j < 3; j++)
			printf("%d ", ts[i][j]);
		printf("\n");
	}
}

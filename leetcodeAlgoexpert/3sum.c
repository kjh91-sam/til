int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes){
    int **returnArray;
    returnArray = (int **)malloc(sizeof(int *) * (*returnSize + 1));
    int ri;
    for (ri = 0; ri++; ri < *returnSize)
        returnArray[ri] = (int *)malloc(sizeof(int) * (3 + 1));
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
                    returnArray[ri][3] = NULL;
                    (*returnColumnSizes)[ri] = sizeof(returnArray[ri]) / sizeof(int);
                    ri++;
                }
            }
        }
    }
    returnArray[ri] = NULL;
    (*returnColumnSizes)[ri] = NULL;
    return returnArray;
}

#include <stdio.h>
int	main() {
	int** arrarr = threeSum([-1,0,1,2,-1,-4], 6, 2, [3, 3]);
	for (int i = 0; i < 2; i++) {
		for (int j = 1; j < 3; j++)
			printf("%d ", arrarr[i][j]);
		printf("\n");
	}
}

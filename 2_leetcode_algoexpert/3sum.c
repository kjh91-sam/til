#include <stdlib.h>
#include <stdio.h>

int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes){
	int** retArr;
	int	temp[numsSize];
	int	target = 0;
	int	cases = 0;

	for (int n = 0; n < numsSize; n++) {
		for (int m = 0; ; m < sizeof(temp) / sizeof(int); m++) {
			if (nums[n] ==
		}
	}

	for (int i = 0; i < numsSize - 2; i++)
		for (int j = i + 1; j  < numsSize - 1; j++)
			for (int k = j + 1; k < numsSize; k++)
				if ((nums[i] + nums[j] + nums[k]) == target) {
					cases++;
					if (cases == 1)
						retArr = (int **)malloc(sizeof(int*) * cases);
					else
						retArr = (int **)realloc(retArr, sizeof(int*) * cases);
					printf("allocation has successed with i : %d, j : %d, k : %d\n", i, j, k);
					retArr[cases - 1] = (int *)malloc(sizeof(int) * 3);
					retArr[cases - 1][0] = nums[i];
					retArr[cases - 1][1] = nums[j];
					retArr[cases - 1][2] = nums[k];
					*returnColumnSizes = (int *)realloc(*returnColumnSizes, sizeof(int) * cases);
					(*returnColumnSizes)[cases - 1] = 3;
				}
	*returnSize = cases;
	return retArr;
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

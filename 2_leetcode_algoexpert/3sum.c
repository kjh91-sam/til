#include <stdlib.h>
#include <stdio.h>

int* setMaker(int *arr, int arrsize, int* setSize) {
	int cnt = 0;
	int flag = 0;

	int* set = (int*)malloc(sizeof(int) * cnt);
	for (int i = 0; i < arrsize; i++) {
		for (int j = 0; j < i; j++)
			if (arr[i] == arr[j]) {
				flag = 1;
				break;
			}
		if (flag == 0) {
			set = (int*)realloc(set, sizeof(int) * (cnt + 1));
			set[cnt++] = arr[i];
		}
		else
			flag = 0;
	}
	*setSize = cnt;
	return (set);
}
int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes){
	int** retArr;
	int	target = 0;
	int	cases = 0;
	int	setSize = 0;
	int *set = setMaker(nums, numsSize, &setSize);
	
	for (int n = 0; n < setSize; n++)
		printf("%d ", set[n]);
	printf("\n");

	for (int i = 0; i < setSize - 2; i++)
		for (int j = i + 1; j  < setSize - 1; j++)
			for (int k = j + 1; k < setSize; k++)
				if ((set[i] + set[j] + set[k]) == target) {
					cases++;
					if (cases == 1)
						retArr = (int **)malloc(sizeof(int*) * cases);
					else
						retArr = (int **)realloc(retArr, sizeof(int*) * cases);
					printf("cases : %d\nallocation has successed with i : %d, j : %d, k : %d\n", cases, i, j, k);
					retArr[cases - 1]  = (int *)malloc(sizeof(int) * 3);
					printf("here");
					retArr[cases - 1][0] = set[i];
					retArr[cases - 1][1] = set[j];
					retArr[cases - 1][2] = set[k];
					if (cases == 1)
						*returnColumnSizes = (int *)malloc(sizeof(int) * cases);
					else
						*returnColumnSizes = (int*)realloc(returnColumnSizes, sizeof(int) * cases);
					**returnColumnSizes = 3;
					retArr++;
					(*returnColumnSizes)++;
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

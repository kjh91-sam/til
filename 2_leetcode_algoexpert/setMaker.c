#include <stdlib.h>

int* setMaker(int *arr, int arrsize) {
	int cnt = 0;
	int flag = 0;

	for (int i = 0; i < arrsize; i++) {
		for (int j = 0; j < i; j++)
			if (arr[i] == arr[j]) {
				flag = 1;
				break;
			}
		if (flag == 0)
			cnt++;
		else
			flag = 0;
	}
	int* set = (int*)malloc(sizeof(int) * cnt);
	flag = 0;
	cnt = 0;
	for (int k = 0; k < arrsize; k++) {
		for (int l = 0; l < k; l++)
			if (arr[k] == arr[l]) {
				flag = 1;
				break;
			}
		if (flag == 0)
			set[cnt++] = arr[k];
		else 
			flag = 0;
	}
	return set;
}

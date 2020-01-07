#include <stdio.h>

int cntDigit(int n);
int square(int n, int power);

int main() {    

    int input;
    scanf("%d", &input);
    while(input <= 0) {
        printf("1이상의 자연수를 입력하세요.\n");
        scanf("%d", &input);
    }

    int claps = 0;
    int numForCheck;

    for(int i = 1; i <= input; i++) {
        printf("현재 숫자는 %d자릿수의 %d\n", cntDigit(i), i);
        numForCheck = i; //i를 직접 건드리면 안되므로
        for(int j = square(10, cntDigit(i)-1); j > 0; j /= 10) {
            //printf("\t(현재 j는 %d)\n", j);
            numForCheck = i / j - (i / (j*10) * 10);
            //printf("\t현재 숫자의 %d를 확인 중\n", numForCheck);
            if(numForCheck == 3 || numForCheck == 6 || numForCheck == 9) {
                claps++;
                printf("(짝!)");
            }
        }
        printf("\n");
    }

    printf("%d", claps);

    return 0;
}

int cntDigit(int n) {
    int digit = 1;
    int q = n / 10;

    while(q > 0) {
        digit++;
        q = q / 10;
    }

    return digit;
}

int square(int n, int power) {
    int result = 1;
    if(power == 0) return result;
    while(power > 0) {
        result *= n;
        power--;
    }
    return result;
}

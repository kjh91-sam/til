#include <stdio.h>
#include <math.h>

long long solution(long long n) {
    long long answer = -1;

    for(int i = 1; i <= sqrt(n); i++) {
        if (sqrt(n) == i) return pow((i+1), 2);
    }

    return answer;
}

long long solution2(long long n) {
    long long answer = -1;

    if((int)sqrt(n) == sqrt(n)) return pow(sqrt(n)+1, 2);

    return answer;
}

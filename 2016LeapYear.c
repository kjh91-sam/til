#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char* solution(int a, int b) {
    char* answer = (char*)malloc(4);
    
    int days[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char* dayWeek[7] = {"THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED"};
    int daysSum = 0;
    
    for(int i = 0; i < a-1; i++) {
        daysSum += days[i];
    }
    
    daysSum += b;
    
    answer = dayWeek[daysSum % 7];
    return answer;
}

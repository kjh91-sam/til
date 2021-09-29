#include <stdio.h>
#include <math.h> //floor, abs, log10을 위해
int main() {
    int input;
    scanf("%d", &input);
    char str[input][12]; //일반적인 int사이즈를 감안해 12사이즈로
    int clap = 0;
    int chr; //숫자 하나씩 떼어낼 때 사용할 변수

    for(int i = 1; i <= input; i++) {
        sprintf(str[i-1], "%d", i); //1부터 input까지 각각 문자열로 바꾼다
        for(int j = 0; j < floor(log10(abs(i))) + 1; j++) { //i의 자릿수를 계산하는 방법! New Milestone!
            /* 
            이렇게도 가능하다는 점을 적어둔다.
            chr = (int)str[i-1][j] - 48;
            if(chr != 0 && chr%3 == 0) {
            */
            chr = str[i-1][j];
            if(chr == '3' || chr == '6' || chr == '9') { //여기서 3,6,9에 ''를 씌우지 않으면 에러가 난다..
                printf("현재 i는 %d, j는 %d, chr은 %c\n", i, j, chr); //내가 확인할 용도. 까먹고 이걸 안지워서 여러번 제출실패.
                clap++;
            }
        }
    }
    printf("%d", clap);
    return 0;
}

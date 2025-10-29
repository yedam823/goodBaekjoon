#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int a, int b) {
    int answer1 = 0;
    int answer2 = 0, cnt = 1;
    while(cnt <= b){
        cnt *= 10;
        answer1 = (a*cnt) + b;
    }
    answer2 = 2*a*b;
    if(answer1 >= answer2){
        return answer1;
    }
    return answer2;
}
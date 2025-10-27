#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(char* my_string, const char* overwrite_string, int s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    for(int i=0; i<strlen(overwrite_string); i++){ //8
        my_string[i+s] = overwrite_string[i];
    }
    char* answer = (char*)malloc(sizeof(char)*(strlen(my_string)+1));
    strcpy(answer, my_string);
    return answer;
}
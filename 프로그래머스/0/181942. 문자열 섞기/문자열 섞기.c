#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include<string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* str1, const char* str2) {
    char temp[1001];
    int s = strlen(str1)*2+1;
    int idx1= 0, idx2 = 0;
    for(int i = 0; i < s; i++){
        if((i+1)%2){
            temp[i] = str1[idx1++];
            continue;
        }
        temp[i]=str2[idx2++];
    }
    
    
    char* answer = (char*)malloc(sizeof(char)*((strlen(str1)*2)+2));
    strcpy(answer, temp);
    return answer;
}
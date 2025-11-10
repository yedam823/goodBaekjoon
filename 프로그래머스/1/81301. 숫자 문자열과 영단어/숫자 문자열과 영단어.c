#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include<string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int solution(const char* s) {
    int  ans = 0, arrIdx = 0;
    int arr[101] = {0};
    for(int i=0; i<strlen(s); i++){
        if(s[i] == 's' && s[i+2] == 'v' && s[i+4] == 'n'){
            arr[arrIdx++] = 7;
            i+= 4;
        }else if(s[i] == '2') arr[arrIdx++] = 2;
        else if(s[i] == 'z' && s[i+3] == 'o') {
            arr[arrIdx++] = 0;
            i += 3;
        }else if(s[i] == 'o' && s[i+2] == 'e'){
            arr[arrIdx++] = 1;
            i+=2;
        }else if(s[i] == 't' && s[i+2] == 'o'){
            arr[arrIdx++] = 2;
            i+=2;
        }else if(s[i] == 't' && s[i+3] == 'e' && s[i+4] == 'e'){
            arr[arrIdx++] = 3;
            i+=4;
        }else if(s[i] == 'f' && s[i+3] == 'r'){
            arr[arrIdx++] = 4;
            i+=3;
        }else if(s[i] == 'f' && s[i+2] == 'v' && s[i+3] == 'e'){
            arr[arrIdx++] = 5;
            i+=3;
        }else if(s[i] == 'e' && s[i+2] == 'g' && s[i+4] == 't'){
            arr[arrIdx++] = 8;
            i+=4;
        }else if(s[i] == 's' && s[i+2] == 'x'){
            arr[arrIdx++] = 6;
            i+=2;
        }else if(s[i] == 'n' && s[i+2] == 'n' && s[i+3] == 'e'){
            arr[arrIdx++] = 9;
            i+=3;
        }else if(s[i] == '3') arr[arrIdx++] = 3;
        else if(s[i] == '4') arr[arrIdx++] = 4;
        else if(s[i] == '5') arr[arrIdx++] = 5;
        else if(s[i] == '6') arr[arrIdx++] = 6;
        else if(s[i] == '7') arr[arrIdx++] = 7;
        else if(s[i] == '8') arr[arrIdx++] = 8;
        else if(s[i] == '1') arr[arrIdx++] = 1;
        else if(s[i] == '0') arr[arrIdx++] = 0;
        else if(s[i] == '9') arr[arrIdx++] = 9;
    }
    int pow = 1;
    for(int i=arrIdx-1; i>=0; i--){
        ans += arr[i]*pow;
        pow *= 10;
    }
    return ans;
}
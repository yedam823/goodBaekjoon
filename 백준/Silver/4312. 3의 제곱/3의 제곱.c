#include <stdio.h>
typedef __uint128_t u128;

// __uint128_t 출력 함수
void print128(u128 n) {
    if (n == 0) { printf("0"); return; }
    char buf[40]; // 최대 자리수
    int i = 0;
    while (n > 0) {
        buf[i++] = '0' + (n % 10);
        n /= 10;
    }
    while (i--) putchar(buf[i]);
}

int main() {
    long long n;
    while(1){
        u128 s[64];
        u128 pow3=1;
        scanf("%llu" ,&n);
        if(n == 0) break;
        unsigned long long x = n-1;
        if(x == 0) {
            printf("{ }\n");
            continue;
        }
        
        unsigned long long int i=0;
        while(x>0){
            if(x&1){
                s[i++] = pow3;
            }
            pow3 *= 3;
            x = x >> 1;
        }
        printf("{ ");
        for(int j=0; j<i; j++){
            if(j) printf(", ");
            print128(s[j]);
        }
        printf(" }\n");
    }
}
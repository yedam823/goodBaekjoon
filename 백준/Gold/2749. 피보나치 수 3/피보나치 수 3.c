#include <stdio.h>

int main() {
    long long int n;
    scanf("%lld", &n);
    
    n = n%1500000; //피사노 주기, 모듈러 연산
    if (n == 0) {
        printf("0");
        return 0;
    }
    if (n == 1 || n == 2) {
        printf("1");
        return 0;
    }

    int a = 1, b = 1, temp;
    for (long long int i = 3; i <= n; i++) {
        temp = (a + b) % 1000000;
        a = b;
        b = temp;
    }

    printf("%d", b);
    return 0;
}
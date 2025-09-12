#include <stdio.h>
#pragma warning(disable: 4996)

int main() {
    int n;
    int dp0[100], dp1[100];
    dp0[0] = 1;
    dp0[1] = 0;
    dp1[0] = 0;
    dp1[1] = 1;

    for (int i = 2; i < 41; i++) {
        dp0[i] = dp0[i - 1] + dp0[i - 2];
        dp1[i] = dp1[i - 1] + dp1[i - 2];
    }
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        int cnt0 = 0, cnt1 = 0;
        int fn;
        scanf("%d", &fn);
        
        printf("%d %d\n", dp0[fn], dp1[fn]);
    }
}
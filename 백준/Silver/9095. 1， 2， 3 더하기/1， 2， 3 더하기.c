#include<stdio.h>

int main(){
    int dp[101];
    int y, n;
    scanf("%d", &y);
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4; 
    for(int i=0;i<y;i++){
        scanf("%d", &n);
        for(int j=4; j<=n;j++){
            dp[j] = dp[j-2] + dp[j-1] + dp[j-3];
        }
        printf("%d\n", dp[n]);
    }
}
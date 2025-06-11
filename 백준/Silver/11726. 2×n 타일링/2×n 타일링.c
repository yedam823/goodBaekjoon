#pragma warning(disable: 4996)
#include<stdio.h>

int main(){
	int n;
	long long dp[1000];
	scanf("%d", &n);
	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 3;
	for (int i = 4; i <= n; i++) {
		dp[i] = dp[i-1] + dp[i-2];
		dp[i] %= 10007;
	}
	printf("%d", dp[n]);
}
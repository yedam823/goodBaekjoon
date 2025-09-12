#include<stdio.h>
#pragma warning(disable: 4996)

int main() {
	int n;
	int dp[1000001];
	int prev[1000001];
	scanf("%d", &n);
	dp[1] = 0;
	prev[1] = -1;
	for (int i = 2; i <= n; i++) {
		dp[i] = dp[i - 1] + 1;
		prev[i] = i - 1;
		if (i % 2 == 0 && dp[i/2]+1 < dp[i]) {
			dp[i] = dp[i / 2] + 1;
			prev[i] = i / 2;
		}
		if (i % 3 == 0 && dp[i / 3] + 1 < dp[i]) {
			dp[i] = dp[i / 3] + 1;
			prev[i] = i / 3;
		}
	}
	printf("%d\n", dp[n]);
	int a = n;
	while (a != -1) {
		printf("%d ", a);
		a = prev[a];
	}
}
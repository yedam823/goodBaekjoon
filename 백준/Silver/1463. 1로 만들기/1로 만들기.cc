#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable:4996)

int MIN(int a, int b) {
	int min = a;
	if (a > b) min = b;
	return min;
}

int main() {
	int n;
	int dp[1000001] = { 0 };
	scanf("%d", &n);
	for (int i = 2; i <= n; i++) {
		dp[i] = dp[i - 1] + 1;
		if (i % 3 == 0) {
			dp[i] = MIN(dp[i], dp[i / 3] + 1);
		}
		if (i % 2 == 0) {
			dp[i] = MIN(dp[i], dp[i / 2] + 1);
		}
	}
	printf("%d", dp[n]);
}
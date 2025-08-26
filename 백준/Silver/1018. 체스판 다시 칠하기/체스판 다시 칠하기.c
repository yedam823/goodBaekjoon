#include<stdio.h>
#pragma warning(disable:4996)

char arr[101][101];
int wb(int n, int m) {
	int cntW = 0, cntB = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if ((i + j) % 2 == 0) {
				if (arr[n+i][m+j] != 'W') cntW++;
				if(arr[n + i][m + j] != 'B')cntB++;
			}
			else {
				if (arr[n + i][m + j] != 'W') cntB++;
				if (arr[n + i][m + j] != 'B') cntW++;
			}
		}
	}
	return (cntW < cntB) ? cntW : cntB;
}
int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf(" %c", &arr[i][j]);
		}
	}
	int result = 64;
	for (int i = 0; i <= n-8; i++) {
		for (int j = 0; j <= m - 8; j++) {
			int temp = wb(i, j);
			if (temp < result) result = temp;
		}
	}
	printf("%d", result);
}
#include<stdio.h>
#pragma warning(disable: 4996)

int sumsum(int n, int len) {
	int sum = 0;
	int i = n - (len * 9);
	if (i < 1) {
		i = 1;
	}
	while (i < n) {
		sum = 0;
		int x = i;
		int result = x;
		sum = x;
		while (x != 0) {
			sum += x % 10;
			x /= 10;
		}
		if (sum == n) {
			return result;
		}
		i++;
	}
	return 0;
}

int main() {
	for (int i = 1; i < 10000; i++) {
		int len = 0;
		for (int j = i; j > 0; j--) {
			j /= 10;
			len++;
		}
		int re = sumsum(i, len);
		if (!re) {
			printf("%d\n", i);
		}
	}
	return 0;
}
#include<stdio.h>
#pragma warning (disable:4996)

int GCD(int a, int b) {
	while (b != 0) {
		int temp = b;
		b = a % b;
		a = temp;
	}
	return a;
}

int LCM(int a, int b) {
	return (long long)a * b / GCD(a, b);
}

int main() {
	int a, b, n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		printf("%d\n", LCM(a, b));
	}
}
#pragma warning(disable:4996)
#include<stdio.h>

int main(){
	int n, m, divisor = 0;
	scanf("%d %d", &n, &m);
	for (int i = 1; i<=n ; i++) {
		if (n % i == 0 && m % i == 0) {
			divisor = i;
		}
	}
	printf("%d\n%d", divisor, n*m/divisor);
}
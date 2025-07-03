#include<stdio.h>
#include<string.h>
#pragma warning(disable:4996)

int main() {
	int sum1 = 0 , sum2 = 0;
	char n[1100];
	scanf("%s", n);
	int len = strlen(n);
	
	for (int i = 0; i < len / 2; i++) {
		sum1 += (int)n[i];
	}
	for (int i = len/2; i < len; i++) {
		sum2 += (int)n[i];
	}
	if (sum1 == sum2) {
		printf("LUCKY");
	}
	else {
		printf("READY");
	}
}
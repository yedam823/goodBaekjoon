#pragma warning(disable: 4996)
#include<stdio.h>

int main() {
	int n, time[1000] = {0};
	int temp, sum = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &time[i]);
	}
	for (int i = 0; i < n-1; i++) {
		for (int j = 0; j < n-1-i; j++) {
			if (time[j] > time[j + 1]) {
				temp = time[j];
				time[j] = time[j + 1];
				time[j + 1] = temp;
			}
		}
	}
	int wait=0;
	
	for (int j = 0; j < n; j++) {
		wait = wait + time[j];
		sum += wait;
	}
	
	printf("%d\n", sum);
}
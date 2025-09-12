#include<stdio.h>
#pragma warning(disable: 4996)
int st[1000001];
char ans[2000002];
int idx;
int top = -1;


int main() {
	int n;
	int arr[1000001];
	scanf("%d", &n);
	int num = 1;
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++) {
		while (num <= arr[i]) {
			st[++top] = num++;
			ans[idx++] = '+';
		}

		if (st[top] == arr[i]) {
			top--;
			ans[idx++] = '-';
		}
		else {
			printf("NO");
			return 0;
		}
	}
	for (int i = 0; i < idx; i++) {
		printf("%c\n", ans[i]);
	}
}
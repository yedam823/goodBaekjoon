#include<stdio.h>
#include<stdlib.h>
#pragma warning(disable: 4996)

void sort(int arr[], int n, int s) {
	for (int i = 0; i < n; i++) {
		int m = i;
		for (int j = i + 1; j <n && j < i + s+1; j++) {
			if (arr[j] > arr[m]) m = j;
		}
		s -= (m - i);
		for (int j = m; j > i; j--) {
			int temp = arr[j];
			arr[j] = arr[j - 1];
			arr[j - 1] = temp;
		}
		if (s == 0) {
			break;
		}
	}
}
int main() {
	int n, s;
	int arr[1000001];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	scanf("%d", &s);
	sort(arr, n, s);
	for (int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
}
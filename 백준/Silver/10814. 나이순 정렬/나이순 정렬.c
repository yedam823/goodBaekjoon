#include<stdio.h>
#pragma warning(disable:4996)
#include<stdlib.h>
//살려줘
typedef struct {
	int age;
	char name[101];
}member;

void merge(member arr[], member temp[], int left, int mid, int right) {
	int i = left, j = mid+1, k = left;

	while (i <= mid && j <= right) {
		if (arr[i].age <= arr[j].age) temp[k++] = arr[i++];
		else temp[k++] = arr[j++];
	}
	while (i <= mid) temp[k++] = arr[i++];
	while (j <= right) temp[k++] = arr[j++];

	for (i = left; i <= right; i++) arr[i] = temp[i];
}

void mergesort(member arr[], member temp[], int left, int right) {
	if (left < right) {
		int mid = (left + right) / 2;
		mergesort(arr, temp, left, mid);
		mergesort(arr, temp, mid + 1, right);
		merge(arr, temp, left, mid, right);
	}
}
int main() {
	int n;
	scanf("%d", &n);
	
	member* arr = (member*)malloc(n * sizeof(member));
	member* temp = (member*)malloc(n * sizeof(member));

	for (int i = 0; i < n; i++) {
		scanf("%d %s", &arr[i].age, arr[i].name);
	}
	mergesort(arr, temp, 0, n - 1);

	for (int i = 0; i < n; i++) {
		printf("%d %s\n", arr[i].age, arr[i].name);
	}

	free(arr);
	free(temp);
}
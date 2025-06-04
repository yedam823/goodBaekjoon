#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>

int compare(const void* a, const void* b) {
	int x = *(int*)a;
    int y = *(int*)b;
    if (x > y) return 1;
    else if (x < y) return -1;
    else return 0;
}

int BinarySearch(int* arr, int left, int right, int data) {
	while(left<=right){
		int mid = (left + right) / 2;
		if (data == arr[mid]) {
			return 1;
		}
		else if (data < arr[mid]) {
			right = mid - 1;
		}
		else{
			left = mid + 1;
		}
	}
	return 0;
}

int main(){
	int n, m;
	scanf("%d", &n);
    int* arrn = (int*)malloc(sizeof(int)*n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arrn[i]);
	}
	scanf("%d", &m);
    int* arrm = (int*)malloc(sizeof(int)*m);
	for (int i = 0; i < m; i++) {
		scanf("%d", &arrm[i]);
	}
	qsort(arrn, n, sizeof(int), compare);
	for (int i = 0; i < m; i++) {
		printf("%d\n",(BinarySearch(arrn, 0, n-1, arrm[i])));
	}
    free(arrn);
    free(arrm);
    return 0;
}
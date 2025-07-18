#pragma warning(disable: 4996)
#include<stdio.h>

int front = 0;
int rear = 0;
int enqueue(int arr[], int n) {
	return arr[rear++] = n;
}

int dequeue(int arr[]) {
	return arr[front++];
}
int peek(int arr[]) {
	return arr[front];
}

int main() {
	int arr[1000000];
	int n, k;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		enqueue(arr, i);
	}
	while(1){
		if (rear - front == 1) {
			k = dequeue(arr);
			break;
		}
		dequeue(arr);
		int y = dequeue(arr);
		enqueue(arr, y);
	}

	printf("%d", k);
}
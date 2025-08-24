#pragma warning(disable: 4996)
#include<stdio.h>
#include<string.h>

int gue[20000001];
int rear = 0;
int value;
int front = 0;

int empty() {
	if (front == rear) {
		return 1;
	}
	else {
		return 0;
	}
}
int size() {
	return rear - front;
}

int front_func() {
	if (empty()) {
		return -1;
	}
	return gue[front];
}

int back() {
	if (empty()) {
		return -1;
	}
	return gue[rear-1];
}

int push(int value) {
	if (rear >= 20000000) {
		return -1;
	}
		gue[rear++] = value;
		return 0;
}

int pop() {
	if (empty()) {
		return -1;
	}
	return gue[front++];
}

int main() {
	int n;
	int m;
	char str[10000001];

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int m;
		scanf("%s ", str);
		if (strcmp(str, "pop") == 0) {
			printf("%d\n", pop());
		}
		else if (strcmp(str, "empty") == 0) {
			printf("%d\n", empty());
		}
		else if (strcmp(str, "push") == 0) {
			scanf("%d", &m);
			push(m);
		}
		else if (strcmp(str, "size") == 0) {
			printf("%d\n", size());
		}
		else if (strcmp(str, "front") == 0) {
			printf("%d\n", front_func());
		}
		else if (strcmp(str, "back") == 0) {
			printf("%d\n", back());
		}
	}
}
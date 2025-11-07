#pragma warning(disable: 4996)
#include<stdio.h>
#include<stdlib.h>

int Heap[100001] = { 0 };
int heapSize = 0;

int peek() {
	if (heapSize == 0) return 0;
	return Heap[1];
}

void enqueue(int data) {
	int i = 0;
	heapSize++;
	i = heapSize;
	Heap[i] = data;

	while (i > 1 && Heap[i / 2] < Heap[i]) {
		int t = Heap[i / 2];
		Heap[i / 2] = Heap[i];
		Heap[i] = t;
		i = i / 2;
	}
}

void Max_heapify(int i) {
	while (1) {
		int largest = i;
		int left = 2 * i;
		int right = 2 * i + 1;

		if (left <= heapSize && Heap[left] > Heap[i]) {
			largest = left;
		}
		if (right <= heapSize && Heap[right] > Heap[largest]) {
			largest = right;
		}
		if (largest != i) {
			int t = Heap[i];
			Heap[i] = Heap[largest];
			Heap[largest] = t;
			i = largest;
		}
		else break;
	}
}

void dequeue() {
	if (heapSize == 0) {
		return;
	}

	Heap[1] = Heap[heapSize--];
	Max_heapify(1);
}



int main() {
	int n, m;
	int r[100001];
	int rIdx = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &m);
		if (m > 0) {
			enqueue(m);
		}
		else {
			r[rIdx++] = peek();
			dequeue();
		}

	}

	for (int i = 0; i < rIdx; i++) {
		printf("%d\n", r[i]);
	}
}
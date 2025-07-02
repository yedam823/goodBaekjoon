#include<stdio.h>
#include<stdlib.h>

int main() {
	int n, cnt=0, v =0;
	int sum = 0;
	scanf("%d", &n);
	int* m = (int*)malloc(sizeof(int) * n);
	int i = 0;
	while(cnt < n){
		scanf("%d", &m[i]);
		sum += m[i];
		if (m[i] == 0) {
			sum -= m[i - 1];
			i--;
		}
		else i++;
		cnt++;
	}
	printf("%d", sum);
	free(m);
}
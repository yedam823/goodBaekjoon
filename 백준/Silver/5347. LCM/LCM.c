#include<stdio.h>

int GCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long int LCM(int a, int b){
	return (long long)a * b / GCD(a, b);
}

int main() {
	int a, b, n;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a, &b);
		printf("%lld\n", LCM(a, b));
	}
}
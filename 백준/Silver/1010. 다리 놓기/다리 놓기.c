#include<stdio.h>

long long int factorial(long long int n, long long m) {
	long long int sum = 1;
	for (long long int i = 1; i <= n; i++) {
		sum *= (m-i+1);
        sum /= i;
	}
	return sum;
}
int main(){
    long long int s,n,m;
    scanf("%lld", &s);
    for(int i=0; i<s; i++){
    scanf("%lld %lld", &n, &m);
    printf("%lld\n", factorial(n, m));
    }
}
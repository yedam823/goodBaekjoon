#include <stdio.h>

int main() {
    int n, sum=0, a;
    scanf("%d", &n);
    for(int i=0; i<9; i++){
        scanf("%d", &a);
        sum += a;
    }
    printf("%d", n-sum);
}
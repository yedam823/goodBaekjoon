#include<stdio.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int i=n, j=0;
    while(i-j != m){
        j++;
        if(i+j > n) i--;
        if(i == 0){
            printf("-1");
            return 0;
        }
    }
    printf("%d %d", i, j);
}
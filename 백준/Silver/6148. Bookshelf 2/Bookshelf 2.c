#include <stdio.h>

int min(int a, int b){
    int tmp = a;
    if(tmp > b) return b;
    return tmp;
}
int main() {
    int n,m;
    int cow[1000001];
    scanf("%d %d", &n, &m);
    for(int i=0; i<n; i++){
        scanf("%d", &cow[i]);
    }
    int ans = 9999999999;
    for(int i=0; i<(1<<n); i++){
        int sum = 0;
        for(int j=0; j<n; j++){
            if(i & (1 << j)) sum += cow[j];
        }
        if(sum >= m) ans = min(ans, sum-m); 
    }
    printf("%d", ans);
}
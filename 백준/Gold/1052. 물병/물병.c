#include <stdio.h>

long long int bitmask(int n, int m){
    int save = 0;
    while(1){    
        long long int cnt = n, pushCnt = 0;
        while(cnt > 0){
            if(cnt%2 == 1){
                pushCnt++;
            }
            cnt /= 2;
        }
        if(pushCnt <= m){
            return save;
        }
        n++;
        save++;
    }
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);
    long long int ans = bitmask(n, m);
    if(ans < 0){
        printf("-1");
        return 0;
    }else if(ans == 0){
        printf("0");
        return 0;
    }
    printf("%lld", ans);
}
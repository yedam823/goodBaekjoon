#include <stdio.h>

int main() {
    int n;
    int arr[1001];
    int cnt = 0;
    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int c = 0;
    while(c < n){
        c = 0;
        int x = 0;
        for(int i = 0; i<n; i++){
            if(arr[i] & 1){
                arr[i] -= 1;
                int x = 1;
                cnt++;
            }
            if(arr[i] == 0) c++;
        }
        if(x == 1 || c == n) continue;
        for(int i =0; i<n;i++){
            arr[i] /= 2;
        }
        cnt++;
    }
    
    printf("%d", cnt);
}
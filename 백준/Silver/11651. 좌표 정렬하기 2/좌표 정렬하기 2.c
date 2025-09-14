#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int x;
    int y;
}Entry;

Entry arr[100001];

int comp(const void* a, const void* b){
    Entry X = *(Entry*)a;
    Entry Y = *(Entry*)b;

    if(X.y>Y.y) return 1;
    else if(X.y==Y.y){
        if(X.x>Y.x) return 1;
        else if(X.x == Y.x) return 0;
        else return -1; 
    }
    else return -1;
}
int main() {
    int n;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%d %d", &arr[i].x, &arr[i].y);
    }
    qsort(arr, n, sizeof(Entry), comp);
    for(int i=0; i<n; i++){
        printf("%d %d\n",arr[i].x, arr[i].y);
    }
}
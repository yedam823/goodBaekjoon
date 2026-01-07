#include <stdio.h>
#include <stdlib.h>

typedef struct Meet{
    int start;
    int end;
}Meet;


int compare(const void *a, const void *b){
    Meet *A = (Meet*)a;
    Meet *B = (Meet*)b;

    if(B->end != A->end){
        return A->end - B->end;
    }

    return A->start - B->start;
}


int main() {
    Meet meet[1000001];

    int cnt = 0;
    int last = 0;
    int n;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d %d", &meet[i].start, &meet[i].end);
    }

    qsort(meet, n, sizeof(Meet), compare);

    for(int i=0; i<n; i++){
        if(meet[i].start >= last){
            cnt++;
            last = meet[i].end;   
        }
    }

    printf("%d", cnt);
}
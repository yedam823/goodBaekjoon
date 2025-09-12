#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int t; // 작업 소요 시간
    int s; // 마감 시간
} Task;

int compare(const void *a, const void *b) {
    Task *A = (Task *)a;
    Task *B = (Task *)b;
    return B->s - A->s; // 마감 시간이 큰 순서대로 정렬
}

int main() {
    int n;
    scanf("%d", &n);

    Task arr[1000];
    for (int i = 0; i < n; i++) {
        scanf("%d %d", &arr[i].t, &arr[i].s);
    }

    // 마감 시간 기준 내림차순 정렬
    qsort(arr, n, sizeof(Task), compare);

    // 시작 가능한 가장 늦은 시간
    int cur = arr[0].s;
    for (int i = 0; i < n; i++) {
        if (cur > arr[i].s) {
            cur = arr[i].s;
        }
        cur -= arr[i].t;
    }

    if (cur < 0) printf("-1\n");
    else printf("%d\n", cur);

    return 0;
}
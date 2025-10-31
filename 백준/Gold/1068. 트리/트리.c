#include <stdio.h>
#include<stdlib.h>

int parent[51];
int cnt = 0;

void DFS(int current, int n, int m){
    if(current == m) return;

    int child = 0;
    for(int i=0; i<n; i++){
        if(parent[i] == current && i != m){
            child++;
            DFS(i, n, m);
        }
    }
     if(child == 0){
        cnt++;
    }
}

int main() {
    int n, m, rootIdx;
    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        scanf("%d", &parent[i]);
        if(parent[i] == -1){
            rootIdx = i;
        }
    }
    scanf("%d", &m);
    
    if(m == rootIdx){
        printf("0");
        return 0;
    }
    
    DFS(rootIdx, n, m);
    printf("%d", cnt);
}
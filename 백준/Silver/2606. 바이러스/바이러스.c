#include <stdio.h>
int queue[102];
int visited[102];
int rear = 0, front=0;

void push(int x);
int pop();
int empty();
int bfs(int start, int graph[][102], int n){
    int cnt=0;
    push(start);
    visited[start] = 1;
    while(!empty()){
        int x = pop();
        for(int i=1; i<=n; i++){
            if(graph[x][i] == 1 && visited[i] != 1){
                visited[i] = 1;
                push(i);
                cnt++;
            }
        }
    }
    return cnt;
}

int main() {
    int n, m, cnt = 0;
    int graph[101][102] = {0};
    scanf("%d\n%d", &n, &m);
    for(int i=0; i<m; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        graph[a][b]= 1;
        graph[b][a] = 1;
    }
    int ans = bfs(1,graph, n);
    printf("%d", ans);
    
}

void push(int x){
    queue[rear++] = x;
}
int pop(){
    return queue[front++];
}
int empty(){
    return front == rear;
}
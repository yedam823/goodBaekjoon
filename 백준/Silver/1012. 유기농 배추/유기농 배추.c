#include <stdio.h>
#include <string.h>

int visited[101][101] = {0};
int graph[101][101] = {0};
int cnt = 0;

int dx[4] = {0, 0, -1, 1};
int dy[4] = {-1, 1, 0, 0};

void DFS(int x, int y, int n, int m){
    visited[y][x] = 1;
    for(int i=0;i<4;i++){
        int nx = x + dx[i];
        int ny = y + dy[i];

        if(nx >= 0 && nx < m && ny >= 0 && ny < n){
            if(graph[ny][nx] == 1 && !visited[ny][nx]){
                DFS(nx, ny, n, m);
            }
        }
    }
}

int main(){
    int T;
    scanf("%d", &T);
    for(int j=0; j<T; j++){
        memset(graph, 0, sizeof(graph));
        memset(visited, 0, sizeof(visited));
        int x, y;
        int n, m, k;
        scanf("%d %d %d",&m, &n, &k);
        for(int i=0; i<k; i++){
            scanf("%d %d", &x, &y);
            graph[y][x] = 1;  
        }
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(graph[i][j] == 1 && !visited[i][j]){
                    DFS(j,i,n,m);
                    cnt++;
                }
            }
        }
        printf("%d\n", cnt);
        cnt = 0;
    }
}
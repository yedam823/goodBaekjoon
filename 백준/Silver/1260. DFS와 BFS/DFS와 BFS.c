#include<stdio.h>
#include<stdlib.h>
#define SIZE 20

int queue[1002];
int visited[1002];
int visited2[1002];
int front = 0;
int rear = 0;
void enqueue(int n) {
	queue[rear++] = n;
}

int dequeue() {
	return queue[front++];
}
int empty() {
	return rear == front;
}

void BFS(int n, int start, int graph[][1002]){
        enqueue(start);
		visited[start] = 1;
		while(!empty()){
			int x = dequeue();
			for(int i=1; i<=n; i++){
				if(graph[x][i] == 1 && visited[i] != 1){
					visited[i] = 1;
					enqueue(i);
				}
			}
		}
}

void DFS(int graph[][1002], int start, int n){
	visited2[start] = 1;
    printf("%d ", start);
	for(int i=1; i<=n; i++){
		if(visited2[i]!=1 && graph[start][i] == 1){
			DFS(graph, i, n);
		}
    }
}

int main(){
	int n, m, s;
    int graph[1002][1002];
	scanf("%d %d %d", &n, &m, &s);
    for(int i=0;i<m;i++){
        int a, b;
        scanf("%d %d", &a, &b);
        graph[a][b] = 1;
        graph[b][a] = 1;
    }
    DFS(graph, s, n);
    printf("\n");
    BFS(n, s, graph);
    for(int i=0; i<rear; i++){
        printf("%d ", queue[i]);
    }
}
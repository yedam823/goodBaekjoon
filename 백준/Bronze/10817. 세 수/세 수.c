#include<stdio.h>

int mid(int a, int b, int c){
    int temp = a;
    if(a == b || b == c) return b;
    else if(a == c) return c;
    if((c<b && c>a) || (c>b && a > c)) return c;
    else if(b>a && b<c || b>c && b<a) return b;
    return a;
}

int main(){
    int n,m,s;
    scanf("%d %d %d", &n, &m,&s);
    int ans = mid(n, m, s);
    printf("%d", ans);
}
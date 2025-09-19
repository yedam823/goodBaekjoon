#include<stdio.h>

int main(){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int s1 = a+b+c+d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int s2 = a+b+c+d;
    if(s1>s2){
        printf("%d", s1);
    }
    else if(s2>s1){
        printf("%d", s2);
    }
    else{
        printf("%d", s1);
    }
}
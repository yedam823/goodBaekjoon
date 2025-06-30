#include<stdio.h>

int main(){
    int a, b, c;
    scanf("%d\n%d\n%d\n", &a, &b, &c);
    if((a+b+c) <= 21){
        printf("1");
    }
    else{
        printf("0");
    }
}
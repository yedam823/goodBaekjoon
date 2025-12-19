#include <stdio.h>

int steak[1001];
int top = 0;
void push(){
    steak[top++] = 1;
}

int pop(){
    return steak[--top];
}

int isEmpty(){
    if(top == 0) return 1;
    else return 0;
}

int main() {
    int cnt = 0;
    char n[51];
    scanf("%s", n);
    for(int i=0; n[i]!='\0'; i++){
        if(n[i] == '('){
            push();
        } else{
            if(isEmpty()) cnt++;
            else pop();
        }
    }
    printf("%d", cnt+top);
}
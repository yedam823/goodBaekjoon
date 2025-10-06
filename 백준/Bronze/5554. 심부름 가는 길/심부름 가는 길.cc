#include<iostream>

int main(){
    int a, b, c, d;
    scanf("%d\n%d\n%d\n%d", &a, &b, &c, &d);
    int sum = a+b+c+d;
    int min = (sum%3600)/60;
    int sec = sum%60;
    std::cout<<min<<std::endl<<sec;
}
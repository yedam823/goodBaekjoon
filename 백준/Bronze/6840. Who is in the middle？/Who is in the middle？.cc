#include<iostream>
#include<algorithm>
int main(){
    int n[3];
    int mid = 0;
    std::cin>>n[0]>>n[1]>>n[2];
    std::sort(n, n+3);
    std::cout<<n[1];
}
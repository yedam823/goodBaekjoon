#include<iostream>

int main(){
    int n,sum=0;
    for(int i=0;i<5;i++){
        std::cin>>n;
        if(n<40){
            sum += 40;
        }
        else{
            sum += n;
        }
    }
    std::cout<<sum/5;
}
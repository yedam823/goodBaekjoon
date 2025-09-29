#include<iostream>

int main(){
    int a[2];
    int b[2];
    int c[2];
    int sa[3];
    int sb[3];
    int sc[3];
    for(int i=0;i<3;i++){
        std::cin>>a[0]>>b[0]>>c[0]>>a[1]>>b[1]>>c[1];
        int total = a[0]*3600+b[0]*60+c[0];
        int end = a[1]*3600+b[1]*60+c[1];
        int d = end - total;
        if(d < 0) d += 24*3600;
        sa[i] = d/3600, sb[i] = (d%3600)/60, sc[i]=d%60; 
    }
    for(int i=0;i<3;i++){
        std::cout<<sa[i]<<" "<<sb[i]<<" "<<sc[i]<<std::endl;
    }
}
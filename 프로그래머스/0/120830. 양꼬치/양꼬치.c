#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int k) {
    int dk = (2000*k)-(n/10*2000);
    int dn = n*12000;
    int sum = dk+dn;
    return sum;
}
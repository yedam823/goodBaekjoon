#include <stdio.h>

int main() {
    int T, A, B;
    char buffer[10000];

    fgets(buffer, sizeof(buffer), stdin);
    sscanf(buffer, "%d", &T);

    for (int i = 0; i < T; i++) {
        fgets(buffer, sizeof(buffer), stdin);
        sscanf(buffer, "%d %d", &A, &B);
        printf("%d\n", A + B);
    }
}
#include <stdio.h>

int main() {
    int n;
    int arr[1001][1001]; // 최대 5학년
    int cnt[1001] = {0};

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 5; j++) { // 학년은 5
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;
            for (int k = 0; k < 5; k++) {
                if (arr[i][k] == arr[j][k]) {
                    cnt[i]++;
                    break; // 한 번만 세고 다음 학생으로
                }
            }
        }
    }

    int max = 0, result = 0;
    for (int i = 0; i < n; i++) {
        if (cnt[i] > max) {
            max = cnt[i];
            result = i;
        }
    }

    printf("%d\n", result + 1); // 학생 번호는 1부터
    return 0;
}

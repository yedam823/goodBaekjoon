#include <stdio.h>

long long cnt[10];

void countPages(long long n) {
    long long start = 1;
    long long end = n;
    long long ten = 1; // 자리수별 반복 횟수

    while (start <= end) {
        // 끝자리 맞추기 (end % 10 != 9)
        while (end % 10 != 9 && start <= end) {
            long long x = end;
            while (x > 0) {
                cnt[x % 10] += ten;
                x /= 10;
            }
            end--;
        }

        // 앞자리 맞추기 (start % 10 != 0)
        while (start % 10 != 0 && start <= end) {
            long long x = start;
            while (x > 0) {
                cnt[x % 10] += ten;
                x /= 10;
            }
            start++;
        }

        if (start > end) break;

        // 중간 블록 한 번에 계산
        long long num = (end / 10 - start / 10 + 1);
        for (int i = 0; i < 10; i++) {
            cnt[i] += num * ten;
        }

        // 다음 자리수로 이동
        start /= 10;
        end /= 10;
        ten *= 10;
    }
}

int main() {
    long long n;
    scanf("%lld", &n);

    // 배열 초기화
    for (int i = 0; i < 10; i++) cnt[i] = 0;

    countPages(n);

    // 결과 출력
    for (int i = 0; i < 10; i++) {
        printf("%lld ", cnt[i]);
    }
}
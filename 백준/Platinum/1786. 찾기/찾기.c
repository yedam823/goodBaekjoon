#include <stdio.h>
#include <string.h>
#define MAX 1000000

char text[MAX+1];
char pattern[MAX+1];
int lps[MAX];
int result[MAX];  // 패턴이 등장하는 위치 저장
int resCount = 0;

// LPS 배열 계산
void computeLPS(char *pattern, int m) {
    int len = 0;
    lps[0] = 0;
    int i = 1;

    while (i < m) {
        if (pattern[i] == pattern[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = lps[len-1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
}

// KMP 탐색
void KMP(char *text, char *pattern) {
    int n = strlen(text);
    int m = strlen(pattern);

    computeLPS(pattern, m);

    int i = 0, j = 0; 
    while (i < n) {
        if (text[i] == pattern[j]) {
            i++;
            j++;
        }
        if (j == m) {
            result[resCount++] = i - j + 1; // 1-based index
            j = lps[j-1];
        } else if (i < n && text[i] != pattern[j]) {
            if (j != 0) {
                j = lps[j-1];
            } else {
                i++;
            }
        }
    }
}

int main() {
    scanf("%[^\n]s", text);
    getchar(); // 개행 제거
    scanf("%[^\n]s", pattern);

    KMP(text, pattern);

    printf("%d\n", resCount);
    for (int i = 0; i < resCount; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");
    return 0;
}
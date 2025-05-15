#pragma warning (disable : 4996)
#include <stdio.h>
#include<stdlib.h>

int main() {
	int n;
	char str[101];
	int re;
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		char str2[200] = { 0 };
		scanf("%d %[^\n]s", &re, str);
		int j = 0;
		int y = 0;
		int cnt = 0;
		while (str[j] != '\0') {
			str2[y] = str[j];
			y++;
			cnt++;
			if (cnt == re) {
				j++;
				cnt = 0;
			}
		}
		printf("%s\n", str2);
	}
}
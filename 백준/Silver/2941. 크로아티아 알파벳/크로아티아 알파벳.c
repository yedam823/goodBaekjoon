#pragma warning(disable:4996)
#include<stdio.h>
#include<string.h>

int main() {
	char str[101];
	int cnt=0;
	scanf("%s", str);
	int len = strlen(str);
	for (int i = 0; i < len; i++) {
		if (str[i] == 'l' && str[i + 1] == 'j') {
			i++;
			cnt++;
		}
		else if (str[i] == 'n' && str[i + 1] == 'j') {
			i++;
			cnt++;
		
		}
		else if (str[i] == 'c' && (str[i + 1] == '=' || str[i + 1] == '-')) {
			i++;
			cnt++;
		
		}
		else if (str[i] == 'd' && (str[i + 1] == 'z') && (str[i + 2] == '=')) {
			i = i + 2;
			cnt++;
		
		}
		else if (str[i] == 'd' && str[i + 1] == '-') {
			i++;
			cnt++;
		
		}
		else if ((str[i] == 's' || str[i] == 'z') && str[i + 1] == '=') {
			i++;
			cnt++;
			continue;
		}
		else {
			cnt++;
		}
	}
	printf("%d", cnt);
}
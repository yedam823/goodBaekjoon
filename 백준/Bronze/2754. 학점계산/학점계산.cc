#pragma warning(disable: 4996)
#include<stdio.h>

int main() {
	char a[10];
	scanf("%s", a);

	if (a[0] == 'A') {
		if (a[1] == '+') {
			printf("4.3");
		}
		else if (a[1] == '0') {
			printf("4.0");
		}
		else if (a[1] == '-') {
			printf("3.7");
		}
	}
	else if (a[0] == 'B') {
		if (a[1] == '+') {
			printf("3.3");
		}
		else if (a[1] == '0') {
			printf("3.0");
		}
		else if (a[1] == '-') {
			printf("2.7");
		}
	}
	else if (a[0] == 'C') {
		if (a[1] == '+') {
			printf("2.3");
		}
		else if (a[1] == '0') {
			printf("2.0");
		}
		else if (a[1] == '-') {
			printf("1.7");
		}
	}
	else if (a[0] == 'D') {
		if (a[1] == '+') {
			printf("1.3");
		}
		else if (a[1] == '0') {
			printf("1.0");
		}
		else if (a[1] == '-') {
			printf("0.7");
		}
	}
	else if (a[0] == 'F') {
		printf("0.0");
	}
}
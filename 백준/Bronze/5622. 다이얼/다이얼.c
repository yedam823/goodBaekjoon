#include<stdio.h>
#pragma warning(disable: 4996)

int main() {
	char str[100];
	int i = 0, sum = 0;
	scanf("%s", str);
	while (str[i] != '\0') {
		if (str[i] == 'A' || str[i] == 'B' || str[i] == 'C') sum += 3;
		else if (str[i] == 'D' || str[i] == 'E' || str[i] == 'F') sum += 4;
		else if (str[i] == 'G' || str[i] == 'H' || str[i] == 'I') sum += 5;
		else if (str[i] == 'J' || str[i] == 'K' || str[i] == 'L') sum += 6;
		else if (str[i] == 'M' || str[i] == 'N' || str[i] == 'O') sum += 7;
		else if (str[i] == 'P' || str[i] == 'Q' || str[i] == 'R' || str[i] == 'S') sum += 8;
		else if (str[i] == 'T' || str[i] == 'U' || str[i] == 'V') sum += 9;
		else if (str[i] == 'W' || str[i] == 'X' || str[i] == 'Y' || str[i] == 'Z') sum += 10;
		else sum += 0;
		i++;
	}
	printf("%d", sum);
}
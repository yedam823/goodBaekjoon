#include <stdio.h>
#include<string.h>

int main() {
    int n, S=0;
    char str[101];
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        int m;
        scanf("%s ", str);
		if (strcmp(str, "add") == 0) {
			scanf("%d", &m);
            S = S | (1<<(m-1));
		}
		else if (strcmp(str, "remove") == 0) {
            scanf("%d", &m);
			S = S &~ (1<<(m-1));
		}
		else if (strcmp(str, "toggle") == 0) {
			scanf("%d", &m);
			S = S ^ (1 << (m-1));
		}
        else if (strcmp(str, "check") == 0) {
			scanf("%d", &m);
			if(S & (1 << (m-1))) printf("1\n");
            else printf("0\n");
		}
		else if (strcmp(str, "all") == 0) {
			S = (1 << 20)-1;
		}
		else if (strcmp(str, "empty") == 0) {
			S = 0;
		}
    }
}
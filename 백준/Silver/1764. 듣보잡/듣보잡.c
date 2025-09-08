#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#pragma warning(disable: 4996)

#define SIZE 500001 

int cnt;
typedef struct Entry{
	char lang[21];
}Entry;
Entry name[SIZE];
Entry sav[SIZE];

int compare(const void* a, const void* b) {
	const Entry* str1 = (const Entry*)a;
	const Entry* str2 = (const Entry*)b;
	return strcmp(str1->lang, str2->lang);            // 사전 순 오름차순
}

void BinarySearch(Entry arr[], char *data, int size) {
	int left = 0, right = size - 1, mid;
	while (left <= right) {
		mid = (left + right) / 2;
		int cmp = strcmp(arr[mid].lang, data);
		if (cmp == 0) {
			strcpy(sav[cnt++].lang, data);
			break;
		}
		else if (cmp > 0) {
			right = mid - 1;
		}
		else {
			left = mid + 1;
		}
	}
}

int main() {
	int n, m, cnt =0;
	scanf("%d %d", &n, &m);

	for (int i = 0; i < n; i++) {
		scanf("%s", name[i].lang);
	}
	qsort(name, n, sizeof(Entry), compare);
	for (int i = 0; i < m; i++) {
        char strM[21];
		scanf("%s", strM);
		int left = 0, right = n - 1, mid;
    	while (left <= right) {
    		mid = (left + right) / 2;
    		int cmp = strcmp(name[mid].lang, strM);
    		if (cmp == 0) {
    			strcpy(sav[cnt++].lang, strM);
    			break;
    		}
    		else if (cmp > 0) {
    			right = mid - 1;
    		}
    		else {
    			left = mid + 1;
    		}
    	}
	}
	qsort(sav, cnt, sizeof(Entry), compare);
	printf("%d\n", cnt);
	for (int i = 0; i < cnt; i++) {
		printf("%s\n", sav[i].lang);
	}
}
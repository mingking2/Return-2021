#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main() {
	int ar[50] = { 0 }, N, count=0;
	int* p, * ar_end, * pN = &N;

	scanf("%d", pN);
	ar_end = ar + *pN;

	for (p = ar; p < ar_end; p++) 
		scanf("%d", p);
	
	for (p = ar; p < ar_end; p++) {
		if (*p == 0)
			break;
		else {
			count++;
		}
	}
	printf("%d", count);
}
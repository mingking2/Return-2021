#include <stdio.h>

int main() {
	int ar[50] = { 0 }, N, count = 0;
	int* p, * ar_end, * pN = &N;
	p = &ar[50];

	printf("정수의 개수 = ");
	scanf_s("%d", pN);
	ar_end = ar + *pN;
	printf("%d개의 정수 입력: ", *pN);

	for (p = ar; p < ar_end; p++) {
		scanf_s("%d", p);
	}

	while (*(ar + count) != 0) {
		count++;
	}

	printf("%d", count);
}
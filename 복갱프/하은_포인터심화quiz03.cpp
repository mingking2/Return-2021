#include <stdio.h>

int main() {
	int ar[50] = { 0 }, N, count = 0;
	int* p, * ar_end, * pN = &N;
	p = &ar[50];

	printf("������ ���� = ");
	scanf_s("%d", pN);
	ar_end = ar + *pN;
	printf("%d���� ���� �Է�: ", *pN);

	for (p = ar; p < ar_end; p++) {
		scanf_s("%d", p);
	}

	while (*(ar + count) != 0) {
		count++;
	}

	printf("%d", count);
}
#include <stdio.h>

int add_to_k(int* x, int* y) {
	int sum = 0;
	for (int i = 0; i <= *(y + i); i++)
		sum += *(x + i);

	return sum;
}

int main() {
	int d[100], N, sum = 0;
	int* p, * ar_end, * pN = &N;
	scanf_s("%d", pN);
	ar_end = d + *pN;

	for (p = d; p < ar_end; p++)
		scanf_s("%d", p);

	for (int i = 0; i < N; i++) {
		sum += add_to_k(d, d + i);
	}

	printf("%d", sum);
}
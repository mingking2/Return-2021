#include <stdio.h>

void addArray(int* x, int* y, int* z, int n) {
	for (int i = 0; i < n; i++) {
		*(z + i) = *(x + i) + *(y + n - 1 - i);
	}
}

int main() {
	int a[20] = { 0 }, b[20] = { 0 }, c[30] = { 0 }, N;
	int* p, * q, * a_end, * b_end, * pN = &N;
	p = &a[20];
	q = &b[20];

	printf("정수의 개수 = ");
	scanf_s("%d", pN);
	a_end = a + *pN;
	b_end = b + *pN;

	printf("%d개의 정수 입력: ", *pN);
	for (p = a; p < a_end; p++) {
		scanf_s("%d", p);
	}

	printf("%d개의 정수 입력: ", *pN);
	for (q = b; q < b_end; q++) {
		scanf_s("%d", q);
	}

	addArray(a, b, c, N);

	for (int i = 0; i < N; i++) {
		printf("%d ", *(c + i));
	}
}
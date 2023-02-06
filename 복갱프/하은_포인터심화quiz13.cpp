#include <stdio.h>

int arrsum(int* s, int* e) {
	int sum = 0;
	for (int* i = s; i <= e; i++) {
		sum += *i;
	}
	return sum;
}

int main() {
	int a[100] = { 0 }, N, S, E;
	int* p, * a_end;
	p = &a[100];

	scanf_s("%d", &N);
	scanf_s("%d", &S);
	scanf_s("%d", &E);

	a_end = a + N;

	printf("%d개의 정수 입력: ", N);
	for (p = a; p < a_end; p++) {
		scanf_s("%d", p);
	}

	printf("%d", arrsum(a + S, a + E));
}
#include <stdio.h>
#include <stdlib.h>

int add_to_k(int* a, int* b) {
	int add = 0;
	for (int i = 0; a + i <= b; i++) {
		add += *(a + i);
	}
	return add;
}

int main() {
	int d[100], N, sum = 0;

	scanf_s("%d", &N);

	for (int i = 0; i < N; i++)
		scanf_s("%d", &d[i]);

	for (int i = 0; i < N; i++)
		sum += add_to_k(d, d + i);

	printf("%d", sum);
}
#include <stdio.h>
#include <malloc.h>

/*N개의 정수를 두 번 입력받아 (N ≤ 20), 역방향으로 더하여 출력하는 프로그램
을 작성하시오. */

void addArray(int *A, int *B, int * C, int N) {
	int sum = 0;
	for (int i = 0; i < N; i++) {
		sum = *(A + i) + *(B + ((N-1) - i));
		*(C + i) = sum;
	}
	for (int i = 0; i < N; i++) {
		printf("%d ", *(C + i));
	}
	
}

int main() {
	int N;
	scanf_s("%d", &N);
	int* A = (int*)malloc(sizeof(int) * N);
	int *B = (int*)malloc(sizeof(int) * N);
	int* C = (int*)malloc(sizeof(int) * N);

	for (int i = 0; i < N; i++) {
		scanf_s("%d", A + i);
	}
	for (int i = 0; i < N; i++) {
		scanf_s("%d", B + i);
	}



	addArray(A, B, C, N);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int arrsum(int* a, int* b) {
	int sum = 0;
	for (int i = 0; a + i <= b; i++)
		sum += *(a + i);

	return sum;
}

int main() {
	int N, S, E;
	scanf("%d %d %d", &N, &S, &E);	//배열 사이즈, 시작, 끝 index 입력
	int* a = (int*)malloc(sizeof(int) * N);

	for (int i = 0; i < N; i++)		//배열 입력
		scanf("%d", (a + i));

	printf("%d", arrsum((a + S), (a + E)));
}
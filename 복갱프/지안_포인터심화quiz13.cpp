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
	scanf("%d %d %d", &N, &S, &E);	//�迭 ������, ����, �� index �Է�
	int* a = (int*)malloc(sizeof(int) * N);

	for (int i = 0; i < N; i++)		//�迭 �Է�
		scanf("%d", (a + i));

	printf("%d", arrsum((a + S), (a + E)));
}
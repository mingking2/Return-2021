#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void addArray(int* a, int* b, int* c, int N) {
	for (int i = 0; i < N; i++)
		*(c + i) = (*(a + i)) + (*(b + N -1 - i));
}

int main() {
	int N;
	scanf("%d", &N);

	int* a = (int*)malloc(sizeof(int) * N);		//input1
	int* b = (int*)malloc(sizeof(int) * N);		//input2
	int* c = (int*)malloc(sizeof(int) * N);		//result

	for (int i = 0; i < N; i++)
		scanf("%d", (a + i));

	for (int i = 0; i < N; i++)
		scanf("%d", (b + i));

	addArray(a, b, c, N);

	for (int i = 0; i < N; i++)
		printf("%d ", *(c + i));

	return 0;
}
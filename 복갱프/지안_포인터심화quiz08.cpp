#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int N, a, b;
	int* arr;

	scanf_s("%d", &N);
	arr = (int*)malloc(sizeof(int) * N);

	for (int i = 0; i < N; i++) 
		scanf_s("%d", &arr[i]);

	scanf_s("%d %d", &a, &b);
	swap(&arr[a], &arr[b]);

	for (int i = 0; i < N; i++)
		printf("%d ", arr[i]);
}
#include <stdio.h>
#include <malloc.h>

/*
N개의 정수를 입력 받아 배열에 저장한 후(N ≤ 50), 다시 배열에서 값을 교환하
고 싶은 인덱스 a 와 b를 입력 받는다.인덱스 a 와 b 위치의 요소 값들이 교환된 배열을 출력하
는 프로그램을 작성하시오.
*/

void swap(int* a, int* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main() {

	int a, b, N;
	scanf_s("%d", &N);
	int* array = (int*)malloc(sizeof(int) * N);
	int* A, *B;
	A = B = array;

	for (int i = 0; i < N; i++) {
		scanf_s("%d", array+i);
	}
	scanf_s("%d %d", &a, &b);

	for (int i = 0; i < N; i++) {
		if (a == *(array + i))
			A = array + i;
		if (b == *(array + i))
			B = array + i;
	}

	swap(A, B);
	for (int i = 0; i < N; i++) {
		printf("%d ", *(array+i));
	}
}
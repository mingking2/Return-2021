#include <stdio.h>

// N개의 정수를 입력 받아 배열에 저장한 후 (N ≤ 50), 다시 배열에서 값을 교환하고 싶은 인덱스 a 와 b를 입력 받는다.
// 인덱스 a 와 b 위치의 요소 값들이 교환된 배열을 출력하는 프로그램을 작성하시오.

void swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main() {
	int x, y;
	int a[50] = { 0 }, N;
	int* p, * ar_end, * pN = &N;

	printf("정수 개수: ");
	scanf_s("%d", pN);
	ar_end = a + *pN;

	printf("정수 입력: ");
	for (p = a; p < ar_end; p++)
		scanf_s("%d", p);

	printf("인덱스 값 두 개 입력: ");
	scanf_s("%d %d", &x, &y);

	swap(a + x, a + y);

	for (p = a; p < ar_end; p++) {
		printf("%d ", *p);
	}
}
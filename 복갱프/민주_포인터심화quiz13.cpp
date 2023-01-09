#include <stdio.h>
#include <malloc.h>
/*정수 N, S, E를 입력 받는다. N개의 정수를 입력 받아 (N ≤ 100) 배열에 저장한
다. 배열에 저장된 N개 중에서 인덱스 S에서 시작해서 인덱스 E까지 요소의 총 합을 출력하시오.*/

int arrsum(int* A, int* B) {
	int sum = 0;
	for (int *i = A; i <= B; i++) {
		sum += *i;
	} 
	return sum;
}

int main() {
	int N, start, end, * A, * B;
	scanf_s("%d%d%d", &N, &start, &end);
	int* array = (int*)malloc(sizeof(int) * N);
	A = array+start;
	B = array+end;
	for (int i = 0; i < N; i++) {
		scanf_s("%d", array + i);
	}
	printf("%d",arrsum(A, B));

}
#include <stdio.h>
#include <malloc.h>

/*
N���� ������ �Է� �޾� �迭�� ������ ��(N �� 50), �ٽ� �迭���� ���� ��ȯ��
�� ���� �ε��� a �� b�� �Է� �޴´�.�ε��� a �� b ��ġ�� ��� ������ ��ȯ�� �迭�� �����
�� ���α׷��� �ۼ��Ͻÿ�.
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
#include <stdio.h>
#include <malloc.h>
/*] N�� ������ �Է� �޾� (N��100) int�� �迭 d[100]�� �����ϰ�, ���� ������ ���� ��
���ϴ� ���α׷��� �ۼ��Ͻÿ�*/

int add_to_k(int *A, int *B) {
	int sum = 0;
	int total_sum = 0;
	for (int* i = A; i <= B; i++) {
		sum += *i;
		total_sum += sum;
		printf("sum : %d, pre : %d \n", sum, total_sum);
	}
	return total_sum;
}

int main() { 
	int N;
	scanf_s("%d", &N);
	int* array = (int*)malloc(sizeof(int) * N);
	int* A = array;
	int* B = array + N-1;
	
	for (int i = 0; i < N; i++) {
		scanf_s("%d", array + i);
	}
	printf("%d", add_to_k(A,B));
}

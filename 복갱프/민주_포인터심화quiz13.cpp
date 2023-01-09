#include <stdio.h>
#include <malloc.h>
/*���� N, S, E�� �Է� �޴´�. N���� ������ �Է� �޾� (N �� 100) �迭�� ������
��. �迭�� ����� N�� �߿��� �ε��� S���� �����ؼ� �ε��� E���� ����� �� ���� ����Ͻÿ�.*/

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
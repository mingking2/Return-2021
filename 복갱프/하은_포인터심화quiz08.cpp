#include <stdio.h>

// N���� ������ �Է� �޾� �迭�� ������ �� (N �� 50), �ٽ� �迭���� ���� ��ȯ�ϰ� ���� �ε��� a �� b�� �Է� �޴´�.
// �ε��� a �� b ��ġ�� ��� ������ ��ȯ�� �迭�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

void swap(int* x, int* y) {
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main() {
	int x, y;
	int a[50] = { 0 }, N;
	int* p, * ar_end, * pN = &N;

	printf("���� ����: ");
	scanf_s("%d", pN);
	ar_end = a + *pN;

	printf("���� �Է�: ");
	for (p = a; p < ar_end; p++)
		scanf_s("%d", p);

	printf("�ε��� �� �� �� �Է�: ");
	scanf_s("%d %d", &x, &y);

	swap(a + x, a + y);

	for (p = a; p < ar_end; p++) {
		printf("%d ", *p);
	}
}
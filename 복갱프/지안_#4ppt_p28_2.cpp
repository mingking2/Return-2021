//�� ������� �� ���ư����� �� �� ����
//�׳� �������´�� ��µ� ���ư�
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void binary(int n) {
	if (n == 1) {
		printf("1");
		return;
	}
	binary(n / 2);
	printf("%d", n % 2);
}

int main() {
	int input;
	scanf_s("%d", &input);
	binary(input);
}
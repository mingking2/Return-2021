#include <stdio.h>


/*
	comment : ������ �迭�� Ȱ���� ���� �� ���ڸ��� �Է¹޾Ƽ� �� ���ڵ��� �ּҸ� ��ȯ
			  ����� ���� �� ��¦ ���� ���� ����? ������ ����? ��
*/

void strcopy(char *a[], char *b[]) {
	for (int i = 0; i < 6; i++) {
		*(b + i) = *(a + i);
	}
}

int main() {
	char* a[6], * b[6];

	for (int i = 0; i < 6; i++) {
		scanf_s("%c", a+i);
	}
	
	strcopy(a, b);

	for (int i = 0; i < 6; i++) {
		printf("%c", *(b + i));
	}
}
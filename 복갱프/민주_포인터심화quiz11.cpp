#include <stdio.h>
//�迭 b�� ���ڸ� �迭 a�� ���� 
//�迭 ǥ�� [] ����

void strcopy(char *SA, char *SB) {
	
	for (int i = 0; i < 6; i++) {
		*(SA + i) = *(SB + i);
	}
}

int main() {
	char a[6];
	char b[6];
	char* A = a;
	char *B = b;
	for (int i = 0; i < 6; i++) {
		scanf_s("%c", B+i);
	}
	
	strcopy(a,b);

	for (int i = 0; i < 6; i++) {
		printf("%c", *(A+i));
	}
}

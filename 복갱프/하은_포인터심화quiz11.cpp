#include <stdio.h>


/*
	comment : 포인터 배열의 활용을 통해 각 문자마다 입력받아서 각 문자들의 주소를 교환
			  답안을 봤을 때 살짝 끼워 맞춘 느낌? 실험적 느낌? 듬
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
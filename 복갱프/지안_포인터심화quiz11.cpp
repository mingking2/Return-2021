#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void strcopy(char* a, char*b) {
	for (int i = 0; i < 6; i++) {
		*(b + i) = *(a + i);
	}
}

int main() {
	char a[6], b[6];

	//scanf("%s", a);				로 하면 5자리까지만 입력됨
	for (int i = 0; i < 6; i++)
		scanf("%c", a+i);

	strcopy(a, b);
	
	for (int i = 0; i < 6; i++)
		printf("%c", *(b + i));

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


// 포인터 심화 quiz 11 (하은 비교용)

void strcopy(char *a,char *b) {
	strcpy(b, a);
}


int main() {
	char a[7], b[7];

	scanf("%s", a);
	strcopy(a, b);
	printf("%s", b);
}
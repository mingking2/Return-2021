#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a[] = { 10,20,30,40,50 };
	int* p = a + 2;

	printf("%d \n",*p+1);
	printf("%d \n",p[-2]);
	printf("%d \n",*(p+2));
	printf("%d \n",*++p);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int A, B, V;
	int sum = 0;
	int count = 0;

	scanf("%d %d %d", &A, &B, &V);

	if ((V - B) % (A - B) == 0) {
		printf("%d", (V - B) / (A - B));
	}
	if ((V - B) % (A - B) != 0) {
		printf("%d", (V - B) / (A - B) + 1);
	}
	return 0;
}
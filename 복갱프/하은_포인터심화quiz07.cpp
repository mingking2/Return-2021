#include <stdio.h>

void input(int* x, int* y, int* z) {
	scanf_s("%d", x);
	scanf_s("%d", y);
	scanf_s("%d", z);
}

void output(int x, int y, int z) {
	printf("%d %d %d", x, y, z);
}

int main() {
	int x, y, z;
	input(&x, &y, &z);
	output(x, y, z);
}
#include <stdio.h>

int main() {
	int x, y, z;
	int* px, * py, * pz, * tmp;

	scanf_s("%d %d %d", &x, &y, &z);
	px = &x; py = &y; pz = &z; tmp = &z;

	py = &x; pz = &y; px = tmp;
	printf("%d %d %d", *px, *py, *pz);
}
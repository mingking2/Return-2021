#include <stdio.h>

int main() {
	int x, y, z;
	int* px = &x;
	int* py = &y;
	int* pz = &z;
	int* tmp;

	scanf_s("%d", px);
	scanf_s("%d", py);
	scanf_s("%d", pz);
	
	tmp = px;
	px = py;
	py = pz;
	pz = tmp;

	printf("%d %d %d", *px, *py, *pz);

	return 0;
}
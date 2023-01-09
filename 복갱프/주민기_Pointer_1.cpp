#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int x, y, z;
	int* px, * py, * pz, * tmp;

	px = &x;
	py = &y;
	pz = &z;

	scanf("%d %d %d", &(*px), &(*py), &(*pz));
	printf("\n%d %d %d", *px, *py, *pz);

	tmp = px;
	px = py;
	py = pz;
	pz = tmp;

	printf("\n%d %d %d", *px, *py, *pz);

}
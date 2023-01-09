#include <stdio.h>

int mid(int array[3]) {
	int * A, * B, * C, * target;
	A = array;
	B = array + 1;
	C = array + 2;
	target = array;

	if ((*A >= *B && *A <= *C) || (*A >= *C && *A <= *B))
		target = A;
	if ((*A <= *B && *B <= *C) || (*C <= *B && *B <= *A))
		target = B;
	if ((*C >= *A && *C <= *B) || (*C >= *B && *C <= *A))
		target = C;

	return *target;
}

int main() {
	int array[3], * A, * B, * C;
	A = array;
	B = array + 1;
	C = array + 2;
	scanf_s("%d%d%d", A, B, C);
	printf("%d", mid(array));

}
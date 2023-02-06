#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


struct array {
	int num;
	int rank;
};

array* N = (struct array*)malloc(sizeof(struct array) * 10);

void check(int i) {
	for (int j = 0; j < i; j++) {
		if (N[i].num > N[j].num)
			N[j].rank++;
		else
			N[i].rank++;
	}
	return;
}

int find(int rank) {
	for (int i = 0; i < 10; i++) {
		if (N[i].rank == rank)
			return N[i].num;
	}
}

int main(void) {
	scanf("%d", &N[0].num);
	N[0].rank = 1;
	for (int i = 1; i < 10; i++) {
		scanf("%d", &N[i].num);
		N[i].rank = 1;
		check(i);
	}
	printf("%d %d", find(3), find(7));
	
}

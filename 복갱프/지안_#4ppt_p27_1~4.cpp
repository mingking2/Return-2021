#include <stdio.h>

int max(int a[], int b) {
	int max = a[0];
	for (int i = 1; i < b-1; i++) {
		if (a[i] > a[i + 1])
			max = a[i];
	}
	return max;
}

double average(int a[], int b) {
	int sum = 0;
	double avg = 0.0;
	for (int i = 0; i < b - 1; i++) {
		sum += a[i];
	}
	avg = sum / (double)b;
	return avg;
}

int isUpper(char c) {
	if ((c > 65) && (c < 90))
		return c;
	return c - 32;
}

char getGrade(int score) {
	if (score >= 90) return 'A';
	else if (score >= 80) return 'B';
	else if (score >= 70) return 'C';
	else if (score >= 60) return 'D';
	else return 'F';
}

int isPrimaryNumber(int n) {
	for (int i = 2 ; i < n; i++) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}

int main() {
	int a[5] = {6,7,4,59,6}, n;		//임시 배열
	char C;

	printf("%d\n", max(a, 5));
	printf("%d\n", average(a, 5));
	printf("%c\n", isUpper('a'));	//임시 인자
	printf("%c\n", getGrade(30));	//임시 인자

	printf("계산할 소수 범위 2~");
	scanf_s("%d", &n);
	printf("1 ");
	if (n >= 3) {
		for (int i = 3; i < n; i++) {
			printf("%d ", isPrimaryNumber(i));
		}
	}
}
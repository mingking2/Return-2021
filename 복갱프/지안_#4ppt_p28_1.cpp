#include <stdio.h>
#include <math.h>

int main() {
	int input, share, digit = 0;
	scanf_s("%d", &input);
	share = input;

	for (int i = 0; share > 1;i++) {	
		share /= 2;
		digit = i;
	}

	int max = pow(2, ++digit);

	for (; digit > 0; digit--) {
		if (input >= pow(2, digit)) {
			input -= pow(2, digit);
			printf("1");
		}
		else
			printf("0");
	}

	if (input == 1) {
		printf("1");
		return 0;
	}
	else
		printf("0");

	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	int ascii[94];
	int count, max, index;
	char s[10];

	scanf("%s", s); 

	for (int i = 0; s[i]; i++)
		*(ascii + *(s + i)) ++;

	max = *ascii;

	for (int i = 1; s[i]; i++) {
		if (max < *(ascii + *(s + i)))
			max = *(ascii + *(s + i));
		index = i;
	}
	 
	printf("%s %d", *(s + index), max);
}
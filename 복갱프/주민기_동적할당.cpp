#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

char name[30];
char* ReadUserName(void) {
	printf("What's your name? ");
	gets_s(name);
	return name;
}

int main() {
	char* name1 = {};
	char* name2 = {};
	name1 = ReadUserName();
	printf("name1: %s \n", name1);
	name2 = ReadUserName();
	printf("name2: %s \n", name2);

	printf("name1: %s \n", name1);
	printf("name2: %s \n", name2);
	return 0;
}
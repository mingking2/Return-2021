#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//int main() {
//	char strA[30];
//	char strB[30];
//	char strC[30];
//	char strD[30];
//	char strE[30];
//
//	printf("get() 로 입력 : ");
//
//	gets_s(strE);
//	printf("strE = %s\n\n", strE);
//
//	printf("scanf() 로 한단어 입력 :");
//
//	scanf("%s", strA);
//
//	printf("strA = %s\n\n", strA);
//
//	printf("scanf() 로 세단어 입력 : ");
//	scanf("%s %s %s", strB, strC, strD);
//	printf("strB = %s, strC = %s, strD = %s\n\n", strB, strC, strD);
//
//}

int main() {
	char str1[20];
	char *str2[30] = { NULL,};
	int i = 0;
	int num = 0;
	gets_s(str1);

	char* temp = strtok(str1, " ");
	while (temp != NULL) {
		str2[i] = temp;
		i++;
		temp = strtok(NULL, " ");
		for (int i = 0; i < 10; i++) {
			if (str2[i] != NULL) {
				num++;
				
			}
		}
	}

	//while (1) {
		for (int j = 0; j < num; ++j) {
			if (str2[j] == NULL) {
				printf("\n");
				j = 0;
			}
			printf(" %s", str2[j]);
		}
		
	//}
		
	

	
	
	

}
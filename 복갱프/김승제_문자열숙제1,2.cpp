#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//민기 문자열 (동적할당 과제 1번) 동적할당 없이한 버전

//int main()
//{
//	char input[100];
//	int i = 0;
//	int j = 0;
//
//	while (1)
//	{
//		printf("& ");
//		while ((input[i] = getchar()) != '\n') //입력
//			i++;
//		input[i] = NULL;
//		printf("%s", input);
//
//		printf(":%d\n", i);
//		i = 0;
//		j = 0;
//	}
//
//
//}

int main()
{
	char input[100];
	int i = 0;
	int j = 0;
	int count = 0; //문장 안과 끝의 공백 처리
	while (1)
	{
		printf("& ");
		while ((input[i] = getchar()) != '\n') //입력
		{
			if (input[0] == ' ') //문장 전의 공백 처리
				continue;

			if (input[i] == ' ') //문장 안의 공백 처리문 (문장 안에 공백이 인식되면 count++, count가 2가 되면 입력 받지 않는 조건문)
				count++;
			else
				count = 0; // 공백 이외의 문자 인식 시 count는 0으로 초기화
			if (count == 2) // 연속된 공백이 나올 시 입력 받지 않음
			{
				count = 1;
				continue;
			}
			i++; //문자만 입력되거나 공백이 하나일 경우 다음 문자 받기
		}


		for (j = 0; j < i - count; j++) //count는 문장의 끝의 공백을 뜻하기에 그 수만큼 뺀 배열의 번지 수 까지 출력
			printf("%c", input[j]);
		printf(":%d\n", i - count);
		
		i = 0; //초기화
		count = 0;
	}
}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>


//�α� ���ڿ� (�����Ҵ� ���� 1��) �����Ҵ� ������ ����

//int main()
//{
//	char input[100];
//	int i = 0;
//	int j = 0;
//
//	while (1)
//	{
//		printf("& ");
//		while ((input[i] = getchar()) != '\n') //�Է�
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
	int count = 0; //���� �Ȱ� ���� ���� ó��
	while (1)
	{
		printf("& ");
		while ((input[i] = getchar()) != '\n') //�Է�
		{
			if (input[0] == ' ') //���� ���� ���� ó��
				continue;

			if (input[i] == ' ') //���� ���� ���� ó���� (���� �ȿ� ������ �νĵǸ� count++, count�� 2�� �Ǹ� �Է� ���� �ʴ� ���ǹ�)
				count++;
			else
				count = 0; // ���� �̿��� ���� �ν� �� count�� 0���� �ʱ�ȭ
			if (count == 2) // ���ӵ� ������ ���� �� �Է� ���� ����
			{
				count = 1;
				continue;
			}
			i++; //���ڸ� �Էµǰų� ������ �ϳ��� ��� ���� ���� �ޱ�
		}


		for (j = 0; j < i - count; j++) //count�� ������ ���� ������ ���ϱ⿡ �� ����ŭ �� �迭�� ���� �� ���� ���
			printf("%c", input[j]);
		printf(":%d\n", i - count);
		
		i = 0; //�ʱ�ȭ
		count = 0;
	}
}

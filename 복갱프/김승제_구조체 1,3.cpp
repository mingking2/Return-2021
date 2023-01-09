#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//typedef struct student
//{
//   int code;
//   float height;
//   float weight;
//}STU;
//
//STU input()
//{
//   STU ip;
//   printf("학번, 키, 몸무게를 한 칸씩 띄워서 입력 : ");
//   scanf("%d %f %f", &ip.code, &ip.height, &ip.weight);
//   return ip;
//}
//
//int main()
//{
//   STU s[10];
//   int N = 0; //학생 수
//   int i;
//   float h_aver = 0, w_aver = 0;
//   scanf("%d", &N);
//   
//   for (i = 0; i < N; i++)
//   {
//      s[i]=input();
//      h_aver += s[i].height;
//      w_aver += s[i].weight;
//   }
//   h_aver = h_aver / N - 0.05;
//   w_aver = w_aver / N - 0.05;
//   printf("\n%.1f %.1f\n", h_aver, w_aver);
//
//   for (i = 0; i < N; i++)
//   {
//      if (s[i].height >= h_aver && s[i].weight >= w_aver)
//         printf("%d super\n", s[i].code);
//      else if (s[i].height <= h_aver && s[i].weight <= w_aver)
//         printf("%d below\n", s[i].code);
//      else
//         printf("%d average\n", s[i].code);
//   }
//}

//민기 구조체 문제 3번

typedef struct jucha
{
   int car;
   int code;
   int in, in_d;
   int out, out_d;
}JUCHA;

JUCHA input()
{
   JUCHA j;
   printf("입력(차 번호, 학번, 날짜 순) : ");
   scanf("%d %d %d %d %d %d", &j.car, &j.code, &j.in, &j.in_d, &j.out, &j.out_d);
   return j;
}

int main()
{
   JUCHA s[100];
   int num;
   int i;
   scanf("%d", &num);

   for (i = 0; i < num; i++)
   {
      s[i] = input();
   }

   for (i = 0; i < num; i++)
   {
      for (int j = i + 1; j < num; j++)
      {
         if (s[i].code == s[j].code)
            printf("%d\n", s[i].code);

      }
   }
   
   
}

//5321 160123 20170903 0700 20170903 1512
//1234 151237 20170903 0800 20170903 1342
//8623 158762 20170903 0600 20170903 2359
//5715 151237 20170903 1543 20170903 1731
//7473 160123 20170903 1641 20170903 1900
#include <stdio.h>


int main()
{
    char arr1[10002];
    char arr2[10002];
    int i = 0, j = 0, k = 0;
    char result[10003] = { 0 };

    while ((arr1[i] = getchar()) != ' ')
    {
        arr1[i] -= 48;
        i++;
    }

    while ((arr2[j] = getchar()) != '\n')
    {
        arr2[j] -= 48;
        j++;
    }

    int num = 0;
    if (i > j)
        num = j;
    else if (j > i)
        num = i;
    else
        num = i;
    i--;
    j--;

    int num2 = i > j ? i - j : j - i; // 큰 수 에서 작은 수 뺀 개수

    for (num = num; num > 0; num--)
    {

        if (result[k] + arr1[i] + arr2[j] >= 10)
            result[k + 1] = 1;
        else
            result[k + 1] = 0;

        result[k] = ((result[k] + arr1[i] + arr2[j]) % 10);

        k++;
        i--;
        j--;
    }

    for (num2 = num2; num2 > 0; num2--) //
    {
        if (0 <= arr1[i] && arr1[i] < 10)
        {
            if (result[k] + arr1[i] >= 10)
                result[k + 1]++;
            else
                result[k + 1] = 0;
            result[k] = (result[k] + arr1[i]) % 10;
            i--;
        }
        else if (0 <= arr2[j] && arr2[j] < 10)
        {
            if (result[k] + arr2[j] >= 10)
                result[k + 1]++;
            else
                result[k + 1] = 0;
            result[k] = (result[k] + arr2[j]) % 10;
            j--;
        }
        k++;
    }

    if (result[k] > 0) // 가장 높은 자릿수의 합이 10이 넘을 경우
    {
        for (k = k; k >= 0; k--)
            printf("%d", result[k]);
    }
    else
    {
        for (k = k - 1; k >= 0; k--)
            printf("%d", result[k]);
    }

}
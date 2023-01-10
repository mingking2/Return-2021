#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{   
    int count = 0;
    char a[20];
    char *pa = a;

    scanf("%s", a);

    char* pb = strtok(a, "#");

    printf("%s\n", pb);

    for (int i = strlen(pb)-1; i >=0; i--) {
        printf("%c", *(pb + i));
    }


    return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int first = 0;
int sec = 0;
int third = 0;

struct student {
    int height;
    int weight;
    int person;
};

void check(int person, int weight, int height) {
    if (weight >= 70 && person==1) {
        if (height >= 175) first++;
        else if (height >= 165) sec++;
        else third++;
        return;
    }
    else if (weight >= 60) {
        if (height >= 175) sec++;
        else if (height >= 165) first++;
        else third++;
        return;
    }
    else if(weight >= 50){
        if (height >= 175) third++;
        else if (height >= 165) sec++;
        else first++;
        return;
    }
    else if(person == 2 && weight < 50) {
        if (height >= 175) third++;
        else if (height >= 165) sec++;
        else first++;
        return;
    }
}


int main(void) {
    int num;
    scanf("%d", &num);
    if (num > 10)
        return 0;
    student * p = (struct student*)malloc(sizeof(struct student)*num);
    for (int i = 0; i < num; i++) {
        scanf("%d %d %d", &p[i].person, &p[i].weight, &p[i].height);
        check(p[i].person, p[i].weight, p[i].height);
    }
    printf("%d %d %d", first, sec, third);
    return 0;
}

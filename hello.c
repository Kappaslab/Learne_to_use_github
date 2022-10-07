#include <stdio.h>

int main(void)
{
    int i, sum = 0;

    printf("Hello!!\n");
    for (i = 0; i < 100; i++) {
        sum += i;
        printf("%d\n", sum);
    }
}
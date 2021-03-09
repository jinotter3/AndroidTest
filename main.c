#include <stdio.h>

int main(void)
{
    int age1, age2, ageSum;

    do
    {

        scanf("%d %d", &age1, &age2);

    } while (age1 < 0 || age1 > 100 || age2 < 0 || age2 > 100);

    ageSum = age1 + age2;

    printf("두 사람의 나이의 합은 %d입니다.",ageSum);

    return 0;


}

/*
#include <stdio.h>

int main(void)
{
    float pi = 3.14;
    int r;

    scanf("%d",&r);

    printf("%.2f",2 * pi * (float)r);

    return 0;

}
*/

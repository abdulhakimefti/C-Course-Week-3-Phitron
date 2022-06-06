// Problem 9
#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if (a < 90)
    {
        if (a < 40)
        {
            printf("%d\n", 40 - a);
        }
        else if (a < 70)
        {
            printf("%d\n", 70 - a);
        }
        else
        {
            printf("%d\n", 90 - a);
        }
    }
    else
    {
        printf("expert\n");
    }
}
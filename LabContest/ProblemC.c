// Problem 3
#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    if (a < b)
    {
        for (; a <= b; a++)
        {
            if (a == c)
            {
                printf("Yes\n");
                a = c;
                break;
            }
        }
        if (a != c)
        {

            printf("No\n");
        }
    }
    else if (b<a)
    {
        for (; b<=a; b++)
        {
            if (b-1 == c)
            {
                printf("No\n");
                b = c;break;
            }
        }
        if (b != c)
        {
            printf("Yes\n");
        }
    }
}
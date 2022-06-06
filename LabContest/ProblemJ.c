

// Problem 10
#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int a, b, c;
    a = x / 100;
    b = (x % 100) / 10;
    c = x % 10;
    int numA, numB, numC;
    numA = x;
    numB = (b*100)+(c*10)+a;
    numC=(c*100)+(a*10)+b;
    int totalNUm = numA+numB+numC;
    printf("%d\n",totalNUm);
}
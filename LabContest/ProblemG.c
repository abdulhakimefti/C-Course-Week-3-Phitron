// Problem 7
#include<stdio.h>
int main (){
    int a,b;
    scanf("%d %d",&a,&b);
    int i = 0;
    while (a<=b)
    {
        i++;
        a++;
        // printf("%d\n",a);
    }
    printf("%d\n",i);

}
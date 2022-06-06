// Problem 5
#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,x,d1,d2,s1,s2,z;
    scanf("%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&x);

    if(x%(a+c)>a){
        s1=(x/(a+c))*a+a;
    }else{
        s1=(x/(a+c))*a+(x%(a+c));
    }
    d1=s1*b;

    if(x%(d+f)>d){
        s2=(x/(d+f))*d+d;
    }else{
        s2=(x/(d+f))*d+(x%(d+f));
    }
    d2=s2*e;

    if(d1>d2)
        printf("Takahashi\n");
    else if(d2>d1)
        printf("Aoki\n");
    else
        printf("Draw\n");
    return 0;
}
// #include <stdio.h>
// int main()
// {
//     int a, b, c, d, e, f, x;
//     scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &x);

//     int takahashiRuntime;
//     if (a > x)
//     {
//         takahashiRuntime = x;
//     }
//     else
//     {
//         takahashiRuntime = a;
//         int takahashiRunTimeAfterRest = x - (a + c);
//         if (takahashiRunTimeAfterRest > 0)
//         {

//             takahashiRuntime += takahashiRunTimeAfterRest;
//         }
//     }

//     int takahashiRun = takahashiRuntime * b;

//     int aokiRunTime;
//     if (d > x)
//     {
//         aokiRunTime = x;
//     }
//     else
//     {
//         aokiRunTime = d;
//         int aokiRuntimeAfterRest = x - (d + f);

//         if (aokiRuntimeAfterRest > 0)
//         {
//             aokiRunTime += aokiRuntimeAfterRest;
//         }
//     }

//     int aokiRun = aokiRunTime * e;

//     if (takahashiRun > aokiRun)
//     {
//         printf("Takahashi\n");
//     }
//     else if (takahashiRun < aokiRun)
//     {
//         printf("Aoki\n");
//     }
//     else if (takahashiRun == aokiRun)
//     {
//         printf("Draw\n");
//     }
// }

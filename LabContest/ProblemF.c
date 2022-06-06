
// Problem 6
// #include<stdio.h>
// int main()
// {
//     int n,m;
//     scanf("%d%d",&n,&m);

//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             if(i%2==0){
//                 printf("#");
//             }else{
//                 if(i%4 == 1 && j==m-1)
//                     printf("#");
//                 else if(i%4==3 && j==0)
//                     printf("#");
//                 else
//                     printf(".");;
//             }
//         }
//         printf("\n");
//     }
// }
//rejected
// #include <stdio.h>
// int main()
// {
//     int n, m;
//     scanf("%d %d", &n, &m);
//     int x = n;
//     for (int j = 1; j <= n; j++)
//     {
//         for (int i = 1; i <= m; i++)
//         {
//             if (x % 2 == 1)
//             {
//                 if (i < m)
//                 {
//                     printf("#");
//                 }
//                 else
//                 {
//                     printf("#\n");
//                     x--;
//                 }
//             }
//             else if (x / 2 == 1 && j == 2)
//             {
//                 if (i < m)
//                 {
//                     printf(".");
//                 }
//                 else
//                 {
//                     printf("#\n");
//                     x--;
//                 }
//             }
//             else
//             {
//                 if ((x / 2) % 2 == 0)
//                 {
//                     if (i < m)
//                     {
//                         printf(".");
//                     }
//                     else
//                     {
//                         printf("#\n");
//                         x--;
//                     }
//                 }

//                 else
//                 {
//                     if (x + 1 == n)
//                     {
//                         if (i < m)
//                         {
//                             printf(".");
//                         }
//                         else
//                         {
//                             printf("#\n");
//                             x--;
//                         }
//                     }
//                     else
//                     {
//                         if (i < m && i > 1)
//                         {
//                             printf(".");
//                         }
//                         else if (i < m)
//                         {
//                             printf("#");
//                         }
//                         else
//                         {
//                             printf(".\n");
//                             x--;
//                         }
//                     }
//                 }
//             }
//         }
//     }
// }
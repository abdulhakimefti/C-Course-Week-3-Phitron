// Problem 1
#include<stdio.h>
int main (){
    int n,k,a;
    scanf("%d %d %d",&n,&k,&a);
    for(int i = 1; i < k;i++){
        if(a<n){
            a++;
        }
        else{
            a=1;
        }
    }
    printf("%d\n",a);
}
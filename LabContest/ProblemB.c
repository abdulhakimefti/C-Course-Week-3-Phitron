// Problem 2
#include<stdio.h>
int main (){
    int check;
    scanf("%d",&check);
    int available = 0;
    for(int i = 1;i<=check;i++){
        int p,q;
        scanf("%d %d",&p,&q);
        if((q-p)>=2){
            available++;
        }
    }
    printf("%d\n",available);
}
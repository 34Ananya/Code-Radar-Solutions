#include<stdio.h>
int main(){
    int a,i,j;
    scanf("%d",&a);
    i=1;
    while(i<=a){
        if(i!=1&&i!=a){
            printf("* ");
        }
        else{
        j=1;
        while(j<=a){
            if(j==i){
                printf(" *");
            }
        printf("*");
        j++;
        }
        }
        printf("\n");
        i++;
    }
    return 0;
}
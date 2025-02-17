#include<stdio.h>
int main(){
    int a,i,j;
    scanf("%d",&a);
    i=1;
    while(i<=a){
        if(i!=1&&i!=a){
            printf(" ");
        }
        printf("*");
        i++;
    }
    return 0;
}
#include<stdio.h>
int main(){
    int a,i,j,k=1,l=0;
    scanf("%d",&a);
    i=1;
    while(i<=a){
        j=i;
        while(j<a){
            printf(" ");
            j++;
        }
            l=(k*1)+1;
        j=1;
        while(j<=l){
            printf("*");
            j++;
        }
        k++;
        printf("\n");
        i++;
    }
    return 0;
}
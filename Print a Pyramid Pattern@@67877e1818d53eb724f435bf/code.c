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
        if(k%2==0){
            l=k*i+1;
            j=1;
            while(j<=l){
                printf("*");
                j++;
            }
        }
        printf("\n");
        i++;
    }
    return 0;
}
#include<stdio.h>
int main(){
    int a,i,j,k;
    scanf("%d",&a);
    i=1;
    while(i<=a){
        j=i;
        while(j<a){
            printf(" ");
            j++;
        }
        k=1;
        while(k<=i+1){
            printf("*");
            k=k+2;
        }
        printf("\n");
        i++;
    }
    return 0;
}
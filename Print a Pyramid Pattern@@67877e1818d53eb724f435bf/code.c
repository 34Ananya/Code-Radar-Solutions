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
        k=i;
        while(k<=a){
            printf("*");
            k++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
#include<stdio.h>
int main(){
    int a,i,j,k=0,l;
    scanf("%d",&a);
    i=1;
    while(i<=a){
        j=i;
        while(j<=a){
            printf(" ");
            j++;
        }
        l=1;
        while(l<=k*2+1){
            printf("*");
            l++;
        }
        k++;
        printf("\n");
        i++;
    }
    return 0;
}
#include<stdio.h>
int main(){
    int a,i,j,k,l;
    scanf("%d",&a);
    i=1;
    while(i<=a){
        j=i;
        while(j<=a){
            printf(" ");
            j++;
        }
        l=1;
        while(l<=i*2+1){
            printf("*");
            l++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
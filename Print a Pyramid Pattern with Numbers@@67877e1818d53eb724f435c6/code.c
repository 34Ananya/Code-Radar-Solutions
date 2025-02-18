#include<stdio.h>
int main(){
    int a,i,j,k;
    scanf("%d",&a);
    i=1;
    while(i<=a){
        j=a;
        while(j>i){
            printf(" ");
            j--;
        }
        k=1;
        while(k<=i){
            printf("%d ",k);
            k++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
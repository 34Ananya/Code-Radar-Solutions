#include<stdio.h>
int main(){
    int a,i,j;
    scanf("%d",&a);
    i=a;
    while(i>=1){
        j=i;
        while(j>=1){
            printf("* ");
            j--;
        }
        printf("\n");
        i--;
    }
    return 0;
}
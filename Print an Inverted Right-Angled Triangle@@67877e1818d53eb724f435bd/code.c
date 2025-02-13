#include<stdio.h>
int main(){
    int a,i,j;
    scanf("%d",&a);
    i=a;
    while(i>=1){
        j=i-1;
        while(j>=1){
            printf("k");
            j--;
        }
        printf("*");
        i--;
    }
    return 0;
}
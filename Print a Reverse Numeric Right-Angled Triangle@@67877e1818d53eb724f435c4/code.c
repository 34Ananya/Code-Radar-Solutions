#include<stdio.h>
int main(){
    int a,i,j;
    scanf("%d",&a);
    i=a;
    while(i>=1){
        j=1;
        while(j<=i){
            printf("%d",j);
            j++;
        }
        printf("\n");
        i--;
    }
    return 0;
}
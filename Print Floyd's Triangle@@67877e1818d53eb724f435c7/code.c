#include<stdio.h>
int main(){
    int a,i,j,k=1;
    scanf("%d",&a);
    i=1;
    while(i<=a){
        j=1;
        while(j<=i){
            printf("%d ",k);
            k++;
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
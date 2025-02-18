#include<stdio.h>
int main(){
    int a,i,j;
    scanf("%d",&a);
    i=1;
    while(i<=a){
        j=i;
        while(j<=a){
            printf("%d ",j);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
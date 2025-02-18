#include<stdio.h>
int main(){
    int a,i,j;
    scanf("%d",&a);
    i=1;
    while(i<=a){
        j=i;
        while(j<i+1){
            printf("%d ",j);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
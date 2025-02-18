#include<stdio.h>
int main(){
    int a,i,j,k;
    scanf("%d",&a);
    i=1;
    while(i<=a){
        j=1;
        while(j<=i){
            if(i%2==0){
                k=0;
                printf("%d ",k);
                k=1;
                printf("%d ",k);
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
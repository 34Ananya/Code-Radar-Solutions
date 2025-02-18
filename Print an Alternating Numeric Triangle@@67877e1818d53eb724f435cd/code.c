#include<stdio.h>
int main(){
    int a,i,j;
    scanf("%d",&a);
    i=1;
    while(i<=a){
        j=1;
        while(j<=i){
            if(i%2==0&&j%2==0){
                printf("0 ");
            }
            else{
                printf("1 ");
            }
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}
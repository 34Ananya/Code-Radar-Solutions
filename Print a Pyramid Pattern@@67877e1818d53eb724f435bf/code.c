#include<stdio.h>
int main(){
    int a,i,j,k=1;
    scanf("%d",&a);
    i=1;
    while(i<=a){
        j=i;
        while(j<a){
            printf(" ");
            k++;
            j++;
        }
        printf("%d",k);
        printf("\n");
        i++;
    }
    return 0;
}
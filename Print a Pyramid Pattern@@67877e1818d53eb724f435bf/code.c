#include<stdio.h>
int main(){
    int a,i,j,k=2,l;
    scanf("%d",&a);
    i=1;
    while(i<=a){
        j=i;
        while(j<a){
            printf(" ");
            j++;
        }
        l=0;
        while(l<k){
        printf("*");
        l++;
        }
        printf("\n");
        k++;
        i++;
    }
    return 0;
}
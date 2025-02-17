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
        l=1;
        while(l<=(2*l)+1){
            printf("*");
            l++;
        }
        i++;
    }
    return 0;
}